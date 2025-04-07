%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "table_symboles.h"

#ifdef _WIN32
#include <windows.h>
#endif

 

extern int _nb_ligne;
extern int _col;
extern int yylex();
extern char* yytext;
void yyerror(const char *s);
extern int dans_boucle; 

%}

%error-verbose

%union {
    char* str;        // Pour les identifiants et chaînes
    int entier;      // Pour les valeurs entières
    double val_float; // Pour les nombres décimaux
}
 

/* Tokens de base */
%token mc_class mc_extends mc_implements mc_void  
%token mc_return mc_if mc_else mc_for mc_while mc_try mc_catch mc_finally
%token mc_public mc_private mc_protected mc_static mc_final mc_abstract
%token mc_package mc_import mc_System mc_out mc_println  
%token mc_double  mc_main
%token acco accf geq leq eq neq and or not inc dec
%token mc_int mc_float mc_char mc_boolean mc_String  

%token <str> idf chaine
%token <entier> entier
%token <val_float> decimal_num

%type <entier> expression assignment_expression logical_expression 
%type <entier> comparison_expression additive_expression multiplicative_expression primary_expression
%type <str> type parameter
%type <entier> for_init for_cond for_inc
 

%nonassoc LOWER_THAN_ELSE
%nonassoc mc_else

/* Priorités */
%right '='
%left or
%left and
%left eq neq
%left '<' '>' leq geq
%left '+' '-'
%left '*' '/'
%right not
%left '.'

%%

program:
    class_declaration
    ;

class_declaration:
    opt_modifiers mc_class idf opt_class_inheritance acco class_body accf
      {
        printf("Classe %s analysée avec succès\n", $3);
    }
    ;

opt_modifiers:
    /* vide */
    | modifiers
    ;

modifiers:
    modifier
    | modifiers modifier
    ;

modifier:
    mc_public
    | mc_private
    | mc_protected
    | mc_static
    | mc_final
    ;

opt_class_inheritance:
    /* vide */
    | inheritance_clause
    ;

inheritance_clause:
    extends_clause
    | implements_clause
    ;

extends_clause:
    mc_extends idf
    ;

implements_clause:
    mc_implements idf_list
    ;

idf_list:
    idf
    | idf_list ',' idf
    ;

class_body:
    /* vide */
    | class_member_declarations
    ;

class_member_declarations:
    class_member_declaration
    | class_member_declarations class_member_declaration
    ;

class_member_declaration:
    field_declaration
    | method_declaration
    ;

field_declaration:
    opt_modifiers type idf ';'
    | opt_modifiers type idf '=' expression ';'
    ;

method_declaration:
    opt_modifiers type idf '(' parameters ')' 
    {
        char nom_portee[50];
        snprintf(nom_portee, sizeof(nom_portee), "methode_%s", $3);
        entrer_portee(nom_portee);
    }
    block
    {
        sortir_portee();
    }
    |
    opt_modifiers mc_void mc_main '(' mc_String '[' ']' idf ')' 
    {
        entrer_portee("main");
    }
    block
    {
        sortir_portee();
    }
    ;

parameters:
    /* vide */
    | parameter_list
    ;

parameter_list:
    parameter
    | parameter_list ',' parameter
    ;

parameter:
    type idf
    ;

type:
    mc_int       { $$ = "int"; }
    | mc_float   { $$ = "float"; }
    | mc_double  { $$ = "double"; }
    | mc_char    { $$ = "char"; }
    | mc_boolean { $$ = "boolean"; }
    | mc_String  { $$ = "String"; }
    | mc_void    { $$ = "void"; }
    | idf        { $$ = $1; }
    ;
     

block:
    acco { entrer_portee("bloc"); } statements accf { sortir_portee(); }
    ;

statements:
    /* vide */
    | statements statement
    ;

statement:
    declaration_statement
    | expression_statement
    | if_statement
    | for_statement 
    | while_statement
    | return_statement
    | block
    | io_statement
    ;

declaration_statement:
    type idf ';'
    | type idf '=' expression ';'
    ;

expression_statement:
    expression ';'
    ;

if_statement:
    mc_if '(' expression ')' statement %prec LOWER_THAN_ELSE
    | mc_if '(' expression ')' statement mc_else statement
    ;

 
for_statement:
    mc_for '(' 
    { 
        static int for_counter = 0;
        for_counter++;
        char scope_name[20];
        snprintf(scope_name, sizeof(scope_name), "for_%d", for_counter);
        entrer_portee(scope_name);
        dans_boucle = 1;
    }
    for_init ';' for_cond ';' for_inc ')' 
    { 
        dans_boucle = 0;
    }
    statement 
    { 
        sortir_portee(); 
    }
    ;

for_init:
    type idf '=' expression {
        char val_str[20];
        snprintf(val_str, sizeof(val_str), "%d", $4);
        inserer("valide", $2, "var_boucle", $1, val_str);
        $$ = $4;
    }

for_cond:
    expression { $$ = $1; }
    | /* vide */ { $$ = 1; }  // 1 = condition toujours vraie
    ;

for_inc:
    idf inc {
        if (!variable_existe($1)) {
            yyerror("Variable non déclarée");
            YYERROR;
        }
        double val = get_valeur_variable($1);
        val += 1;
        mettre_a_jour_variable($1, val);
        $$ = val;
    }
    | idf dec {
        if (!variable_existe($1)) {
            yyerror("Variable non déclarée");
            YYERROR;
        }
        double val = get_valeur_variable($1);
        val -= 1;
        mettre_a_jour_variable($1, val);
        $$ = val;
    }
    | /* vide */ { $$ = 0; }
    ;

while_statement:
    mc_while '(' expression ')' statement
    ;

return_statement:
    mc_return ';'
    | mc_return expression ';'
    ;

io_statement:
    mc_System '.' mc_out '.' mc_println '(' expression ')' ';'
    ;

expression:
    assignment_expression { $$ = $1; }
    ;

assignment_expression:
    logical_expression { $$ = $1; }
    | idf '=' assignment_expression { $$ = $3; }  // $3 doit être entier
    ;

logical_expression:
    comparison_expression { $$ = $1; }
    | logical_expression and comparison_expression { $$ = $1 && $3; }
    | not comparison_expression { $$ = !$2; }
    ;

comparison_expression:
    additive_expression { $$ = $1; }
    | additive_expression eq additive_expression { $$ = $1 == $3; }
    | additive_expression neq additive_expression { $$ = $1 != $3; }
    | additive_expression '<' additive_expression { $$ = $1 < $3; }
    | additive_expression '>' additive_expression { $$ = $1 > $3; }
    | additive_expression leq additive_expression { $$ = $1 <= $3; }
    | additive_expression geq additive_expression { $$ = $1 >= $3; }
    ;

primary_expression:
    idf {
        if (!variable_existe($1)) {
            yyerror("Variable non déclarée");
            $$ = 0.0;
        } else {
            $$ = get_valeur_variable($1);
        }
        free($1); // Libère la mémoire allouée par strdup()
    }
    | entier { $$ = (double)$1; }  // Conversion explicite
    | decimal_num { $$ = $1; }     // Utilisation directe
    | chaine { $$ = 0.0; }         // Valeur par défaut pour les chaînes
    | '(' expression ')' { $$ = (double)$2; }
    ;

additive_expression:
    multiplicative_expression { $$ = $1; }
    | additive_expression '+' multiplicative_expression { $$ = $1 + $3; }
    | additive_expression '-' multiplicative_expression { $$ = $1 - $3; }
    ;

multiplicative_expression:
    primary_expression { $$ = $1; }
    | multiplicative_expression '*' primary_expression { $$ = $1 * $3; }
    | multiplicative_expression '/' primary_expression { 
          if ($3 == 0.0) {
              yyerror("Division par zéro");
              $$ = 0.0;
          } else {
              $$ = $1 / $3; 
          }
      }
    ;


%%

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(65001);
    #endif
    

    printf("----- Début de l'analyse -----\n");
    int result = yyparse();
    
    if(result == 0) {
        printf("\nAnalyse terminée avec succès\n");
    } else {
        printf("\nÉchec de l'analyse\n");
    }
    
    afficher_table();
    return result;
}

void yyerror(const char *s) {
    fprintf(stderr, "Erreur syntaxique à la ligne %d, colonne %d : %s\n", _nb_ligne, _col, s);
}

int yywrap(void) {
    return 1;
}