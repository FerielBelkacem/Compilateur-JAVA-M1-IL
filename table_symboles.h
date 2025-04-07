#ifndef TABLE_SYMBOLES_H
#define TABLE_SYMBOLES_H

#define MAX_SYMBOLES 1000
#define MAX_PORTEE_LEN 100
#define MAX_SCOPE_DEPTH 20
#define MAX_VAL_LEN 100

typedef struct {
    char* state;
    char* nomEntite;
    char* codeEntite;
    char* type;
    char* val;
    char portee[MAX_PORTEE_LEN];
} Symbole;


extern Symbole table[MAX_SYMBOLES];
extern int nb_symboles; 
extern int dans_boucle;
extern char portee_actuelle[MAX_PORTEE_LEN];

void init_scope_stack(void);
void entrer_portee(const char* nom_portee);
void sortir_portee(void);
void inserer(const char* state, const char* nomEntite, const char* codeEntite,
            const char* type, const char* val);
Symbole* rechercher_global(const char* nomEntite);
void afficher_table(void);
void liberer_table(void);

// Nouvelles fonctions ajoutées
int variable_existe(const char* identifiant);
double get_valeur_variable(const char* identifiant);
void mettre_a_jour_variable(const char* nom_variable, double nouvelle_valeur);
void inserer_multiple(const char* type, char** noms, int count, char** valeurs);

#endif