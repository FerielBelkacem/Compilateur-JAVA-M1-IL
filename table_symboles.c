#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "table_symboles.h"

Symbole table[MAX_SYMBOLES];
int nb_symboles = 0;
char portee_actuelle[MAX_PORTEE_LEN] = "global";
static char scope_stack[MAX_SCOPE_DEPTH][MAX_PORTEE_LEN];
static int scope_depth = 0;
int dans_boucle = 0;

extern int _nb_ligne;

void init_scope_stack(void) {
    strcpy(scope_stack[0], "global");
    scope_depth = 1;
}

void entrer_portee(const char* nom_portee) {
    static int compteur = 0;
    compteur++;
    snprintf(portee_actuelle, MAX_PORTEE_LEN, "%s_%d", nom_portee, compteur);
}

void sortir_portee() {
    char* dernier_underscore = strrchr(portee_actuelle, '_');
    if (dernier_underscore) {
        *dernier_underscore = '\0';
    } else {
        strcpy(portee_actuelle, "global");
    }
}

Symbole* rechercher_global(const char* nomEntite) {
    int current_depth = scope_depth;
    while (current_depth > 0) {
        for (int i = nb_symboles - 1; i >= 0; i--) {
            // On ignore les variables de boucle des portées parentes
            if (strcmp(table[i].codeEntite, "var_boucle") == 0)
                continue;
                
            if (strcmp(table[i].nomEntite, nomEntite) == 0 &&
                strcmp(table[i].portee, scope_stack[current_depth-1]) == 0) {
                return &table[i];
            }
        }
        current_depth--;
    }
    return NULL;
}

void inserer(const char* state, const char* nomEntite, const char* codeEntite,
            const char* type, const char* val) {
    
    // Correction de la vérification
    if (strcmp(codeEntite, "entier") == 0 || strcmp(codeEntite, "decimal") == 0) {
        if (!val || val[0] == '\0') {
            fprintf(stderr, "Erreur ligne %d: Valeur manquante pour '%s'\n", _nb_ligne, nomEntite);
            return;
        }
        char* end;
        strtod(val, &end);
        if (*end != '\0') {
            fprintf(stderr, "Erreur ligne %d: Format invalide pour '%s'\n", _nb_ligne, nomEntite);
            return;
        }
    }
     


    // Correction: utiliser codeEntite au lieu de code
    if(strcmp(codeEntite, "field") == 0 || strcmp(codeEntite, "constructor") == 0) {
        // Vérification seulement dans le scope actuel
        for(int i = nb_symboles-1; i >= 0; i--) {
            // Correction: utiliser nomEntite au lieu de nom
            if(strcmp(table[i].nomEntite, nomEntite) == 0 && 
               strcmp(table[i].portee, portee_actuelle) == 0) {
                fprintf(stderr, "Erreur: '%s' déjà déclaré dans '%s'\n", nomEntite, portee_actuelle);
                return;
            }
        }
    }
    
    // Vérification des pointeurs NULL
    if (!nomEntite || !codeEntite || !type) {
        fprintf(stderr, "Erreur: Paramètres invalides pour inserer()\n");
        return;
    }

    // Cas spécial pour les variables de boucle
    if (dans_boucle && strcmp(codeEntite, "var_boucle") == 0) {
        // On saute la vérification de redéclaration pour les variables de boucle
    } else {
        // Vérification de redéclaration dans la portée actuelle
        for (int i = nb_symboles - 1; i >= 0; i--) {
            if (strcmp(table[i].nomEntite, nomEntite) == 0 &&
                strcmp(table[i].portee, portee_actuelle) == 0) {
                fprintf(stderr, "Erreur ligne %d: '%s' déjà déclaré dans '%s'\n",
                       _nb_ligne, nomEntite, portee_actuelle);
                return;
            }
        }
    }

    // Vérifier si la variable existe déjà dans la portée actuelle
    for (int i = nb_symboles-1; i >= 0; i--) {
        if (strcmp(table[i].nomEntite, nomEntite) == 0 &&
            strcmp(table[i].portee, portee_actuelle) == 0) {
            // Mise à jour au lieu d'insertion
            if (table[i].val) free(table[i].val);
            table[i].val = val ? strdup(val) : strdup("");
            return;
        }
    }

    // Validation des types numériques
    if (strcmp(codeEntite, "entier") == 0 || strcmp(codeEntite, "decimal") == 0) {
        if (!val || val[0] == '\0') {
            fprintf(stderr, "Erreur ligne %d: Valeur manquante pour '%s'\n", _nb_ligne, nomEntite);
            return;
        }
        char* end;
        strtod(val, &end);
        if (*end != '\0') {
            fprintf(stderr, "Erreur ligne %d: Format invalide pour '%s'\n", _nb_ligne, nomEntite);
            return;
        }
    }

    // Vérification de la taille de la table
    if (nb_symboles >= MAX_SYMBOLES) {
        fprintf(stderr, "Erreur: Table des symboles pleine\n");
        return;
    }

    // Allocation sécurisée avec vérification
    #define SAFE_STRDUP(s) ((s) ? strdup(s) : strdup(""))
    
    table[nb_symboles].state = SAFE_STRDUP(state);
    table[nb_symboles].nomEntite = SAFE_STRDUP(nomEntite);
    table[nb_symboles].codeEntite = SAFE_STRDUP(codeEntite);
    table[nb_symboles].type = SAFE_STRDUP(type);
    table[nb_symboles].val = SAFE_STRDUP(val);

    // Vérification des allocations
    if (!table[nb_symboles].state || !table[nb_symboles].nomEntite ||
        !table[nb_symboles].codeEntite || !table[nb_symboles].type ||
        !table[nb_symboles].val) {
        fprintf(stderr, "Erreur: Échec d'allocation mémoire\n");
        
        // Nettoyage des allocations partielles
        if (table[nb_symboles].state) free(table[nb_symboles].state);
        if (table[nb_symboles].nomEntite) free(table[nb_symboles].nomEntite);
        if (table[nb_symboles].codeEntite) free(table[nb_symboles].codeEntite);
        if (table[nb_symboles].type) free(table[nb_symboles].type);
        if (table[nb_symboles].val) free(table[nb_symboles].val);
        
        return;
    }

    // Copie de la portée
    strncpy(table[nb_symboles].portee, portee_actuelle, MAX_PORTEE_LEN - 1);
    table[nb_symboles].portee[MAX_PORTEE_LEN - 1] = '\0';

    nb_symboles++;
}

 

void afficher_table(void) {
    printf("\n=== TABLE DES SYMBOLES ===\n");
    printf("%-10s | %-20s | %-15s | %-15s | %-10s | %-10s\n", 
           "State", "Nom", "Code", "Type", "Valeur", "Portée");
    printf("------------------------------------------------------------\n");
    
    for (int i = 0; i < nb_symboles; i++) {
        printf("%-10s | %-20s | %-15s | %-15s | %-10s | %-10s\n",
               table[i].state,
               table[i].nomEntite,
               table[i].codeEntite,
               table[i].type,
               table[i].val,
               table[i].portee);
    }
}

void liberer_table(void) {
    for (int i = 0; i < nb_symboles; i++) {
        free(table[i].state);
        free(table[i].nomEntite);
        free(table[i].codeEntite);
        free(table[i].type);
        free(table[i].val);
    }
    nb_symboles = 0;
}

int variable_existe(const char* identifiant) {
    // Parcourt la table à l'envers pour trouver la déclaration la plus récente
    for (int i = nb_symboles - 1; i >= 0; i--) {
        if (strcmp(table[i].nomEntite, identifiant) == 0) {
            // Vérifie si c'est dans la portée actuelle ou une portée parente
            if (strstr(portee_actuelle, table[i].portee) || 
                strcmp(table[i].portee, "global") == 0) {
                return 1;
            }
        }
    }
    return 0;
}

// Nouvelle fonction: récupère la valeur d'une variable comme double
double get_valeur_variable(const char* identifiant) {
    for (int i = nb_symboles - 1; i >= 0; i--) {
        if (strcmp(table[i].nomEntite, identifiant) == 0) {
            // Accepte si dans portée actuelle ou parente
            if (strstr(portee_actuelle, table[i].portee) || 
                strcmp(table[i].portee, "global") == 0) {
                
                if (strcmp(table[i].codeEntite, "variable") == 0) {
                    return table[i].val ? atof(table[i].val) : 0.0;
                }
                return 0.0; // Pour les autres types
            }
        }
    }
    return 0.0;
}

void mettre_a_jour_variable(const char* nom, double valeur) {
    for (int i = nb_symboles-1; i >= 0; i--) {
        if (strcmp(table[i].nomEntite, nom) == 0) {
            if (table[i].val) free(table[i].val);
            char val_str[20];
            snprintf(val_str, sizeof(val_str), "%d", (int)valeur);
            table[i].val = strdup(val_str);
            return;
        }
    }
}

void inserer_multiple(const char* type, char** noms, int count, char** valeurs) {
    for (int i = 0; i < count; i++) {
        inserer("valide", noms[i], "variable", type, valeurs ? valeurs[i] : "");
    }
}