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
int dans_boucle = 0; 

%}

%union {
    char* str;
    int entier;
}

/* Tokens */
%token mc_class mc_extends mc_implements mc_void mc_int mc_String
%token mc_return mc_if mc_else mc_for mc_while mc_try mc_catch mc_finally
%token mc_public mc_private mc_protected mc_static mc_final mc_abstract
%token mc_package mc_import mc_System mc_out mc_println mc_boolean mc_char
%token mc_double mc_float mc_main
%token acco accf geq leq eq neq and or not
%token <str> idf chaine
%token <entier> entier type
%token <str> decimal 
%type <entier> expression 

%nonassoc LOWER_THAN_ELSE
%nonassoc mc_else

/* Priorits */
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
        printf("Classe %s analyse avec succs\n", $3);
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
    mc_int
    | mc_float
    | mc_double
    | mc_char
    | mc_boolean
    | mc_String
    | mc_void
    | idf
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
    type idf '=' expression  
    { 
        inserer("valide", $2, "var_boucle", $1, ""); 
        $$ = $4;  // Retourne la valeur de l'expression
    }
    | /* vide */ 
    { 
        $$ = NULL;  // Valeur par dfaut pour l'alternative vide
    }
    ;

for_cond:
    expression { $$ = $1; }
    | /* vide */ { $$ = NULL; }
    ;

for_inc:
    expression { $$ = $1; }
    | /* vide */ { $$ = NULL; }
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
    assignment_expression
    ;

assignment_expression:
    logical_expression
    | idf '=' assignment_expression
    ;

logical_expression:
    comparison_expression
    | logical_expression and comparison_expression
    | logical_expression or comparison_expression
    | not comparison_expression
    ;

comparison_expression:
    additive_expression
    | additive_expression eq additive_expression
    | additive_expression neq additive_expression
    | additive_expression '<' additive_expression
    | additive_expression '>' additive_expression
    | additive_expression leq additive_expression
    | additive_expression geq additive_expression
    ;

additive_expression:
    multiplicative_expression
    | additive_expression '+' multiplicative_expression
    | additive_expression '-' multiplicative_expression
    ;

multiplicative_expression:
    primary_expression
    | multiplicative_expression '*' primary_expression
    | multiplicative_expression '/' primary_expression
    ;

primary_expression:
    idf
    | entier
    | chaine
    | decimal
    | '(' expression ')'
    | primary_expression '.' idf
    ;

%%

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(65001);
    #endif
    

    printf("----- Dbut de l'analyse -----\n");
    int result = yyparse();
    
    if(result == 0) {
        printf("\nAnalyse termine avec succs\n");
    } else {
        printf("\nchec de l'analyse\n");
    }
    
    afficher_table();
    return result;
}

void yyerror(const char *s) {
    fprintf(stderr, "Erreur ligne %d: %s\n", _nb_ligne, s);
    fprintf(stderr, "Token prs de l'erreur: '%s'\n", yytext);
}

int yywrap(void) {
    return 1;
}
