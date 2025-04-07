
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
     mc_return = 262,
     mc_if = 263,
     mc_else = 264,
     mc_for = 265,
     mc_while = 266,
     mc_try = 267,
     mc_catch = 268,
     mc_finally = 269,
     mc_public = 270,
     mc_private = 271,
     mc_protected = 272,
     mc_static = 273,
     mc_final = 274,
     mc_abstract = 275,
     mc_package = 276,
     mc_import = 277,
     mc_System = 278,
     mc_out = 279,
     mc_println = 280,
     mc_double = 281,
     mc_main = 282,
     acco = 283,
     accf = 284,
     geq = 285,
     leq = 286,
     eq = 287,
     neq = 288,
     and = 289,
     or = 290,
     not = 291,
     mc_int = 292,
     mc_float = 293,
     mc_char = 294,
     mc_boolean = 295,
     mc_String = 296,
     idf = 297,
     chaine = 298,
     entier = 299,
     decimal_num = 300,
     LOWER_THAN_ELSE = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 24 "syntaxique.y"

    char* str;        // Pour les identifiants et chaînes
    int entier;      // Pour les valeurs entières
    double val_float; // Pour les nombres décimaux



/* Line 1676 of yacc.c  */
#line 106 "syntaxique.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


