
/* Définitions */
%{
#include "syntaxique.tab.h"
#include "table_symboles.h"

#include <string.h> 

extern int _nb_ligne;
int _col = 0;
int _nb_ligne = 1;

/* Flex declarations */
FILE* yyin;
int yywrap(void);
int yylex(void);

/* Function declarations */
void inserer(const char* state, const char* nomEntite, const char* codeEntite,
            const char* type, const char* val);

%}

lettre [a-zA-Z]
chiffre [0-9]
IDF {lettre}({lettre}|{chiffre})*
Entier [0-9]+
Decimal [0-9]+\.[0-9]+
chaine \"[^\"]*\"



%%
"//".* { /* Ignorer les commentaires sur une seule ligne */ }
"/*"([^*]|\*+[^*/])*\*+"/" { /* Ignorer les commentaires multi-lignes */ }

"int" {_col += yyleng; return mc_int;}
"float" {_col += yyleng; return mc_float;}
"double" {_col += yyleng; return mc_double;}
"char" {_col += yyleng; return mc_char;}
"boolean" {_col += yyleng; return mc_boolean;}
"String" {_col += yyleng; return mc_String;}
"void" {_col += yyleng; return mc_void;}
"class" {_col += yyleng; return mc_class;}
"public" {_col += yyleng; return mc_public;}
"private" {_col += yyleng; return mc_private;}
"protected" {_col += yyleng; return mc_protected;}
"static" {_col += yyleng; return mc_static;}
"final" {_col += yyleng; return mc_final;}
"extends" {_col += yyleng; return mc_extends;}
"implements" {_col += yyleng; return mc_implements;}
"return" {_col += yyleng; return mc_return;}
"if" {_col += yyleng; return mc_if;}
"else" {_col += yyleng; return mc_else;}
"for" {_col += yyleng; return mc_for;}
"while" {_col += yyleng; return mc_while;}
"try" {_col += yyleng; return mc_try;}
"catch" {_col += yyleng; return mc_catch;}
"System" {_col += yyleng; return mc_System; }
"out" {_col += yyleng; return mc_out; }
"println" {_col += yyleng; return mc_println; } 
"main" {_col += yyleng; return mc_main;}
"++" { _col += yyleng; return inc; }
"--" { _col += yyleng; return dec; }



{IDF} {
    _col += yyleng;
    yylval.str = strdup(yytext); // Allocation pour l'identifiant
    if (dans_boucle) {
        inserer("valide", yytext, "var_boucle", "identificateur", "");
    } else {
        inserer("valide", yytext, "idf", "identificateur", "");
    }
    return idf;
}


{Entier} {
    _col += yyleng;
    yylval.entier = atoi(yytext);
    inserer("valide", yytext, "entier", "nombre", yytext); // yytext est déjà une chaîne
    return entier;
}

{Decimal} {
    _col += yyleng;
    yylval.val_float = atof(yytext);
    inserer("valide", yytext, "decimal", "nombre", yytext);
    return decimal_num;
}

{chaine} {
    _col += yyleng;
    yylval.str = strdup(yytext);
    inserer("valide", yytext, "chaine", "chaine", yytext);
    return chaine;
}


"==" {_col += yyleng; return eq;}
"!=" {_col += yyleng; return neq;}
">=" {_col += yyleng; return geq;}
"<=" {_col += yyleng; return leq;}
"&&" {_col += yyleng; return and;}
"||" {_col += yyleng; return or;}
"!" {_col += yyleng; return not;}
"{" {_col += yyleng; return acco;}
"}" {_col += yyleng; return accf;}
"[" {_col += yyleng; return '[';}
"]" {_col += yyleng; return ']';}
"(" {_col += yyleng; return '(';}
")" {_col += yyleng; return ')';}
"<" {_col += yyleng; return '<';}
">" {_col += yyleng; return '>';}
"+" {_col += yyleng; return '+';}
"-" {_col += yyleng; return '-';}
"*" {_col += yyleng; return '*';}
"/" {_col += yyleng; return '/';}
"=" {_col += yyleng; return '=';}
"," {_col += yyleng; return ',';}
";" {_col += yyleng; return ';';}
"." {_col += yyleng; return '.';}

[ \t] {_col += yyleng;}
\n {_nb_ligne++; _col = 1;}

. {printf("Erreur lexicale: caractère invalide '%s' à la ligne %d, colonne %d\n", yytext, _nb_ligne, _col);}

%%

 