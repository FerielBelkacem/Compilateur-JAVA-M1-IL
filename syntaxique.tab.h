
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* "%code requires" blocks.  */

/* Line 1676 of yacc.c  */
#line 24 "syntaxique.y"

    typedef struct Parameter Parameter;



/* Line 1676 of yacc.c  */
#line 46 "syntaxique.tab.h"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_class = 258,
     mc_extends = 259,
     mc_implements = 260,
     mc_void = 261,
     mc_this = 262,
     mc_new = 263,
     mc_return = 264,
     mc_if = 265,
     mc_else = 266,
     mc_for = 267,
     mc_while = 268,
     mc_try = 269,
     mc_catch = 270,
     mc_finally = 271,
     mc_public = 272,
     mc_private = 273,
     mc_protected = 274,
     mc_static = 275,
     mc_final = 276,
     mc_abstract = 277,
     mc_package = 278,
     mc_import = 279,
     mc_System = 280,
     mc_out = 281,
     mc_println = 282,
     mc_double = 283,
     mc_main = 284,
     acco = 285,
     accf = 286,
     geq = 287,
     leq = 288,
     eq = 289,
     neq = 290,
     and = 291,
     or = 292,
     not = 293,
     inc = 294,
     dec = 295,
     mc_int = 296,
     mc_float = 297,
     mc_char = 298,
     mc_boolean = 299,
     mc_String = 300,
     idf = 301,
     chaine = 302,
     entier = 303,
     decimal_num = 304,
     LOWER_THAN_ELSE = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 30 "syntaxique.y"

    char* str;        // Pour les identifiants et chaînes
    int entier;      // Pour les valeurs entières
    double val_float; // Pour les nombres décimaux
    Parameter* param_list;



/* Line 1676 of yacc.c  */
#line 122 "syntaxique.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


