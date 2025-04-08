
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntaxique.y"

#include "table_symboles.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#ifdef _WIN32
#include <windows.h>
#endif

 

extern int _nb_ligne;
extern int _col;
extern int yylex();
extern char* yytext;
void yyerror(const char *s);
extern int dans_boucle; 



/* Line 189 of yacc.c  */
#line 97 "syntaxique.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 24 "syntaxique.y"

    typedef struct Parameter Parameter;



/* Line 209 of yacc.c  */
#line 127 "syntaxique.tab.c"

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

/* Line 214 of yacc.c  */
#line 30 "syntaxique.y"

    char* str;        // Pour les identifiants et chaînes
    int entier;      // Pour les valeurs entières
    double val_float; // Pour les nombres décimaux
    Parameter* param_list;



/* Line 214 of yacc.c  */
#line 203 "syntaxique.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 215 "syntaxique.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNRULES -- Number of states.  */
#define YYNSTATES  196

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      60,    61,    56,    54,    59,    55,    58,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    62,
      52,    51,    53,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    13,    14,    16,    18,    21,    23,
      25,    27,    29,    31,    32,    34,    36,    38,    41,    44,
      46,    50,    51,    53,    55,    58,    60,    62,    64,    65,
      73,    78,    85,    86,    95,    96,    98,   100,   104,   107,
     109,   111,   113,   115,   117,   119,   121,   123,   124,   129,
     130,   133,   135,   137,   139,   141,   143,   145,   147,   149,
     153,   155,   159,   161,   165,   168,   174,   182,   183,   184,
     196,   201,   203,   204,   207,   210,   211,   217,   220,   224,
     234,   236,   238,   242,   244,   248,   250,   254,   257,   259,
     263,   267,   271,   275,   279,   283,   287,   291,   293,   296,
     299,   301,   303,   305,   309,   315,   316,   318,   320,   324,
     326,   330,   334,   336,   340
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    65,    -1,    66,     3,    46,    69,    30,
      74,    31,    -1,    -1,    67,    -1,    68,    -1,    67,    68,
      -1,    17,    -1,    18,    -1,    19,    -1,    20,    -1,    21,
      -1,    -1,    70,    -1,    71,    -1,    72,    -1,     4,    46,
      -1,     5,    73,    -1,    46,    -1,    73,    59,    46,    -1,
      -1,    75,    -1,    76,    -1,    75,    76,    -1,    79,    -1,
      80,    -1,    77,    -1,    -1,    66,    46,    60,    82,    61,
      78,    86,    -1,    66,    85,    46,    62,    -1,    66,    85,
      46,    51,   104,    62,    -1,    -1,    66,    85,    46,    60,
      82,    61,    81,    86,    -1,    -1,    83,    -1,    84,    -1,
      83,    59,    84,    -1,    85,    46,    -1,    41,    -1,    42,
      -1,    28,    -1,    43,    -1,    44,    -1,    45,    -1,     6,
      -1,    46,    -1,    -1,    30,    87,    88,    31,    -1,    -1,
      88,    89,    -1,    90,    -1,    93,    -1,    94,    -1,    95,
      -1,   101,    -1,   102,    -1,    86,    -1,   103,    -1,    85,
      91,    62,    -1,    92,    -1,    91,    59,    92,    -1,    46,
      -1,    46,    51,   104,    -1,   104,    62,    -1,    10,    60,
     104,    61,    89,    -1,    10,    60,   104,    61,    89,    11,
      89,    -1,    -1,    -1,    12,    60,    96,    98,    62,    99,
      62,   100,    61,    97,    89,    -1,    85,    46,    51,   104,
      -1,   104,    -1,    -1,    46,    39,    -1,    46,    40,    -1,
      -1,    13,    60,   104,    61,    89,    -1,     9,    62,    -1,
       9,   104,    62,    -1,    25,    58,    26,    58,    27,    60,
     104,    61,    62,    -1,   105,    -1,   107,    -1,   106,    51,
     105,    -1,    46,    -1,     7,    58,    46,    -1,   108,    -1,
     107,    36,   108,    -1,    38,   108,    -1,   112,    -1,   112,
      34,   112,    -1,   112,    35,   112,    -1,   112,    53,   112,
      -1,   112,    52,   112,    -1,   112,    33,   112,    -1,   112,
      32,   112,    -1,    46,    58,    46,    -1,     7,    58,    46,
      -1,    46,    -1,    46,    39,    -1,    46,    40,    -1,    48,
      -1,    49,    -1,    47,    -1,    60,   104,    61,    -1,     8,
      46,    60,   110,    61,    -1,    -1,   111,    -1,   104,    -1,
     111,    59,   104,    -1,   113,    -1,   112,    54,   113,    -1,
     112,    55,   113,    -1,   109,    -1,   113,    56,   109,    -1,
     113,    57,   109,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    80,    86,    88,    92,    93,    97,    98,
      99,   100,   101,   104,   106,   110,   111,   115,   119,   123,
     124,   127,   129,   133,   134,   138,   139,   140,   145,   144,
     157,   161,   170,   170,   182,   183,   187,   188,   198,   207,
     208,   209,   210,   211,   212,   213,   214,   219,   219,   222,
     224,   228,   229,   230,   231,   232,   233,   234,   235,   239,
     242,   243,   246,   247,   251,   255,   256,   262,   271,   261,
     281,   289,   290,   294,   304,   314,   318,   322,   323,   327,
     331,   336,   337,   362,   363,   372,   373,   374,   378,   379,
     380,   381,   388,   395,   396,   400,   420,   431,   440,   450,
     460,   461,   462,   463,   464,   471,   473,   477,   478,   482,
     483,   484,   488,   489,   490
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_class", "mc_extends",
  "mc_implements", "mc_void", "mc_this", "mc_new", "mc_return", "mc_if",
  "mc_else", "mc_for", "mc_while", "mc_try", "mc_catch", "mc_finally",
  "mc_public", "mc_private", "mc_protected", "mc_static", "mc_final",
  "mc_abstract", "mc_package", "mc_import", "mc_System", "mc_out",
  "mc_println", "mc_double", "mc_main", "acco", "accf", "geq", "leq", "eq",
  "neq", "and", "or", "not", "inc", "dec", "mc_int", "mc_float", "mc_char",
  "mc_boolean", "mc_String", "idf", "chaine", "entier", "decimal_num",
  "LOWER_THAN_ELSE", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "'.'", "','", "'('", "')'", "';'", "$accept", "program",
  "class_declaration", "opt_modifiers", "modifiers", "modifier",
  "opt_class_inheritance", "inheritance_clause", "extends_clause",
  "implements_clause", "idf_list", "class_body",
  "class_member_declarations", "class_member_declaration",
  "constructor_declaration", "$@1", "field_declaration",
  "method_declaration", "$@2", "parameters", "parameter_list", "parameter",
  "type", "block", "$@3", "statements", "statement",
  "declaration_statement", "declarator_list", "declarator",
  "expression_statement", "if_statement", "for_statement", "$@4", "$@5",
  "for_init", "for_cond", "for_inc", "while_statement", "return_statement",
  "io_statement", "expression", "assignment_expression", "assignable",
  "logical_expression", "comparison_expression", "primary_expression",
  "arguments", "expression_list", "additive_expression",
  "multiplicative_expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    61,    60,    62,    43,    45,    42,    47,    46,    44,
      40,    41,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    66,    66,    67,    67,    68,    68,
      68,    68,    68,    69,    69,    70,    70,    71,    72,    73,
      73,    74,    74,    75,    75,    76,    76,    76,    78,    77,
      79,    79,    81,    80,    82,    82,    83,    83,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    87,    86,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      91,    91,    92,    92,    93,    94,    94,    96,    97,    95,
      98,    99,    99,   100,   100,   100,   101,   102,   102,   103,
     104,   105,   105,   106,   106,   107,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   113,   113,   113
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     7,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     2,     2,     1,
       3,     0,     1,     1,     2,     1,     1,     1,     0,     7,
       4,     6,     0,     8,     0,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     3,     2,     5,     7,     0,     0,    11,
       4,     1,     0,     2,     2,     0,     5,     2,     3,     9,
       1,     1,     3,     1,     3,     1,     3,     2,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     2,
       1,     1,     1,     3,     5,     0,     1,     1,     3,     1,
       3,     3,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     8,     9,    10,    11,    12,     0,     2,     0,     5,
       6,     1,     0,     7,    13,     0,     0,     0,    14,    15,
      16,    17,    19,    18,     4,     0,     0,     0,     4,    23,
      27,    25,    26,    20,    45,    41,    39,    40,    42,    43,
      44,    46,     0,     3,    24,    34,     0,    46,     0,    35,
      36,     0,     0,    34,    30,    28,     0,    38,     0,     0,
       0,    97,   102,   100,   101,     0,     0,    80,     0,    81,
      85,   112,    88,   109,     0,     0,    37,     0,     0,     0,
      97,    87,    98,    99,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      47,    29,    96,   105,     0,    95,   103,    82,    86,    94,
      93,    89,    90,    92,    91,   110,   111,   113,   114,     0,
      49,   107,     0,   106,    96,    33,     0,   104,     0,     0,
       0,     0,     0,     0,    48,    97,     0,    57,    50,    51,
      52,    53,    54,    55,    56,    58,     0,   108,    77,     0,
       0,    67,     0,     0,    62,     0,    60,    64,    78,     0,
       0,     0,     0,     0,     0,    59,     0,     0,     0,     0,
       0,    63,    61,    65,     0,    72,    76,     0,     0,     0,
       0,    71,     0,    66,    70,    75,     0,     0,     0,     0,
      73,    74,    68,    79,     0,    69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    26,     9,    10,    17,    18,    19,    20,
      23,    27,    28,    29,    30,    75,    31,    32,   119,    48,
      49,    50,   136,   137,   120,   126,   138,   139,   155,   156,
     140,   141,   142,   160,   194,   168,   180,   188,   143,   144,
     145,   146,    67,    68,    69,    70,    71,   122,   123,    72,
      73
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -159
static const yytype_int16 yypact[] =
{
     169,  -159,  -159,  -159,  -159,  -159,    17,  -159,    19,   169,
    -159,  -159,   -17,  -159,    21,    -8,     4,    26,  -159,  -159,
    -159,  -159,  -159,    20,    63,    27,   119,    54,   164,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,    31,    50,  -159,  -159,   130,    35,  -159,    37,    43,
    -159,    72,    -1,   130,  -159,  -159,   130,  -159,    65,    75,
      16,     0,  -159,  -159,  -159,    -1,    64,  -159,    76,    93,
    -159,  -159,   145,   -22,    69,   103,  -159,    98,    86,    99,
     -27,  -159,  -159,  -159,   113,   105,  -159,    -1,    16,    16,
      16,    16,    16,    16,    16,    16,    16,    16,    16,  -159,
    -159,  -159,   117,    -1,   123,  -159,  -159,  -159,  -159,     6,
       6,     6,     6,     6,     6,   -22,   -22,  -159,  -159,   103,
    -159,  -159,   109,   132,  -159,  -159,    62,  -159,    -1,    -5,
     133,   134,   136,   143,  -159,   -30,   146,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,   140,  -159,  -159,   141,
      -1,  -159,    -1,   178,   154,   -44,  -159,  -159,  -159,   147,
     130,   148,   149,    -1,   146,  -159,   107,   160,   150,   107,
     183,  -159,  -159,   200,   162,    -1,  -159,   155,   107,    -1,
     152,  -159,    -1,  -159,  -159,   170,   156,    14,   157,   158,
    -159,  -159,  -159,  -159,   107,  -159
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,  -159,   219,  -159,   212,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,   194,  -159,  -159,  -159,  -159,  -159,   171,
    -159,   167,   -26,   -70,  -159,  -159,  -158,  -159,  -159,    61,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,   -51,   139,  -159,  -159,   -56,   -31,  -159,  -159,    49,
      -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -85
static const yytype_int16 yytable[] =
{
      42,    66,    58,    59,    81,   101,    58,    59,   173,    82,
      83,   176,    82,    83,    85,   164,   -46,    11,   165,    51,
     183,   -83,    12,    79,    59,    15,    16,    51,    84,    14,
      51,    84,   108,    60,    97,    98,   195,    60,    21,    82,
      83,    61,    62,    63,    64,    61,    62,    63,    64,   125,
      22,   -83,   121,   190,   191,    65,    24,   148,    84,    65,
      95,    96,    80,    62,    63,    64,   117,   118,    34,    58,
      59,   129,   130,    33,   131,   132,    65,   147,   149,    25,
       1,     2,     3,     4,     5,    43,    52,   133,   115,   116,
      35,    45,   100,   134,   -21,    53,    46,    54,    55,   159,
      60,   161,    56,    36,    37,    38,    39,    40,   135,    62,
      63,    64,   171,    34,    58,    59,   129,   130,    57,   131,
     132,    78,    65,    77,   181,    34,    86,    87,   184,    88,
      99,   186,   133,   100,   167,    35,    34,   100,   109,   110,
     111,   112,   113,   114,   102,    60,   103,    35,    36,    37,
      38,    39,    40,   135,    62,    63,    64,   104,    35,   105,
      36,    37,    38,    39,    40,    41,   106,    65,   -84,   124,
     127,    36,    37,    38,    39,    40,    47,    89,    90,    91,
      92,     1,     2,     3,     4,     5,     1,     2,     3,     4,
       5,   128,   154,   150,   151,   -22,   152,    93,    94,    95,
      96,   153,   157,   158,   162,   163,   174,   170,   166,   169,
     177,   178,   175,   179,   185,   182,   187,   189,   192,     8,
     193,    13,    44,    76,    74,   172,   107
};

static const yytype_uint8 yycheck[] =
{
      26,    52,     7,     8,    60,    75,     7,     8,   166,    39,
      40,   169,    39,    40,    65,    59,    46,     0,    62,    45,
     178,    51,     3,     7,     8,     4,     5,    53,    58,    46,
      56,    58,    88,    38,    56,    57,   194,    38,    46,    39,
      40,    46,    47,    48,    49,    46,    47,    48,    49,   119,
      46,    51,   103,    39,    40,    60,    30,    62,    58,    60,
      54,    55,    46,    47,    48,    49,    97,    98,     6,     7,
       8,     9,    10,    46,    12,    13,    60,   128,   129,    59,
      17,    18,    19,    20,    21,    31,    51,    25,    95,    96,
      28,    60,    30,    31,    31,    60,    46,    62,    61,   150,
      38,   152,    59,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   163,     6,     7,     8,     9,    10,    46,    12,
      13,    46,    60,    58,   175,     6,    62,    51,   179,    36,
      61,   182,    25,    30,   160,    28,     6,    30,    89,    90,
      91,    92,    93,    94,    46,    38,    60,    28,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    58,    28,    46,
      41,    42,    43,    44,    45,    46,    61,    60,    51,    46,
      61,    41,    42,    43,    44,    45,    46,    32,    33,    34,
      35,    17,    18,    19,    20,    21,    17,    18,    19,    20,
      21,    59,    46,    60,    60,    31,    60,    52,    53,    54,
      55,    58,    62,    62,    26,    51,    46,    58,    61,    61,
      27,    11,    62,    51,    62,    60,    46,    61,    61,     0,
      62,     9,    28,    56,    53,   164,    87
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    18,    19,    20,    21,    64,    65,    66,    67,
      68,     0,     3,    68,    46,     4,     5,    69,    70,    71,
      72,    46,    46,    73,    30,    59,    66,    74,    75,    76,
      77,    79,    80,    46,     6,    28,    41,    42,    43,    44,
      45,    46,    85,    31,    76,    60,    46,    46,    82,    83,
      84,    85,    51,    60,    62,    61,    59,    46,     7,     8,
      38,    46,    47,    48,    49,    60,   104,   105,   106,   107,
     108,   109,   112,   113,    82,    78,    84,    58,    46,     7,
      46,   108,    39,    40,    58,   104,    62,    51,    36,    32,
      33,    34,    35,    52,    53,    54,    55,    56,    57,    61,
      30,    86,    46,    60,    58,    46,    61,   105,   108,   112,
     112,   112,   112,   112,   112,   113,   113,   109,   109,    81,
      87,   104,   110,   111,    46,    86,    88,    61,    59,     9,
      10,    12,    13,    25,    31,    46,    85,    86,    89,    90,
      93,    94,    95,   101,   102,   103,   104,   104,    62,   104,
      60,    60,    60,    58,    46,    91,    92,    62,    62,   104,
      96,   104,    26,    51,    59,    62,    61,    85,    98,    61,
      58,   104,    92,    89,    46,    62,    89,    27,    11,    51,
      99,   104,    60,    89,   104,    62,   104,    46,   100,    61,
      39,    40,    61,    62,    97,    89
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 81 "syntaxique.y"
    {
        printf("Classe %s analysée avec succès\n", (yyvsp[(3) - (7)].str));
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 145 "syntaxique.y"
    {
        char nom_portee[50];
        snprintf(nom_portee, sizeof(nom_portee), "constructeur_%s", (yyvsp[(2) - (5)].str));
        entrer_portee(nom_portee);
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 151 "syntaxique.y"
    {
        sortir_portee();
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 158 "syntaxique.y"
    {
        inserer("valide", (yyvsp[(3) - (4)].str), "field", (yyvsp[(2) - (4)].str), "");
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 162 "syntaxique.y"
    {
        char val_str[20];
        snprintf(val_str, sizeof(val_str), "%d", (yyvsp[(5) - (6)].entier));
        inserer("valide", (yyvsp[(3) - (6)].str), "field", (yyvsp[(2) - (6)].str), val_str);
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 170 "syntaxique.y"
    {
        char nom_portee[50];
        snprintf(nom_portee, sizeof(nom_portee), "methode_%s", (yyvsp[(3) - (6)].str));
        entrer_portee(nom_portee);
        inserer_parametres((yyvsp[(5) - (6)].param_list)); // <-- Ici !
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 176 "syntaxique.y"
    {
        sortir_portee();
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 182 "syntaxique.y"
    { (yyval.param_list) = NULL; ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 183 "syntaxique.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 187 "syntaxique.y"
    { (yyval.param_list) = (yyvsp[(1) - (1)].param_list); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 188 "syntaxique.y"
    {
        // Concaténation des paramètres
        Parameter* last = (yyvsp[(1) - (3)].param_list);
        while (last->next != NULL) last = last->next;
        last->next = (yyvsp[(3) - (3)].param_list);
        (yyval.param_list) = (yyvsp[(1) - (3)].param_list);
    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 198 "syntaxique.y"
    {
        (yyval.param_list) = malloc(sizeof(Parameter));
        (yyval.param_list)->type = strdup((yyvsp[(1) - (2)].str));
        (yyval.param_list)->name = strdup((yyvsp[(2) - (2)].str));
        (yyval.param_list)->next = NULL;
    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 207 "syntaxique.y"
    { (yyval.str) = "int"; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 208 "syntaxique.y"
    { (yyval.str) = "float"; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 209 "syntaxique.y"
    { (yyval.str) = "double"; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 210 "syntaxique.y"
    { (yyval.str) = "char"; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 211 "syntaxique.y"
    { (yyval.str) = "boolean"; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 212 "syntaxique.y"
    { (yyval.str) = "String"; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 213 "syntaxique.y"
    { (yyval.str) = "void"; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 214 "syntaxique.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 219 "syntaxique.y"
    { entrer_portee("bloc"); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 219 "syntaxique.y"
    { sortir_portee(); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 262 "syntaxique.y"
    { 
        static int for_counter = 0;
        for_counter++;
        char scope_name[20];
        snprintf(scope_name, sizeof(scope_name), "for_%d", for_counter);
        entrer_portee(scope_name);
        dans_boucle = 1;
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 271 "syntaxique.y"
    { 
        dans_boucle = 0;
    ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 275 "syntaxique.y"
    { 
        sortir_portee(); 
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 281 "syntaxique.y"
    {
        char val_str[20];
        snprintf(val_str, sizeof(val_str), "%d", (yyvsp[(4) - (4)].entier));
        inserer("valide", (yyvsp[(2) - (4)].str), "var_boucle", (yyvsp[(1) - (4)].str), val_str);
        (yyval.entier) = (yyvsp[(4) - (4)].entier);
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 289 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (1)].entier); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 290 "syntaxique.y"
    { (yyval.entier) = 1; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 294 "syntaxique.y"
    {
        if (!variable_existe((yyvsp[(1) - (2)].str))) {
            yyerror("Variable non déclarée");
            YYERROR;
        }
        double val = get_valeur_variable((yyvsp[(1) - (2)].str));
        val += 1;
        mettre_a_jour_variable((yyvsp[(1) - (2)].str), val);
        (yyval.entier) = val;
    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 304 "syntaxique.y"
    {
        if (!variable_existe((yyvsp[(1) - (2)].str))) {
            yyerror("Variable non déclarée");
            YYERROR;
        }
        double val = get_valeur_variable((yyvsp[(1) - (2)].str));
        val -= 1;
        mettre_a_jour_variable((yyvsp[(1) - (2)].str), val);
        (yyval.entier) = val;
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 314 "syntaxique.y"
    { (yyval.entier) = 0; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 331 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (1)].entier); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 336 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (1)].entier); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 337 "syntaxique.y"
    {
        // Conversion spéciale pour les champs
        if (strncmp((yyvsp[(1) - (3)].str), "mc_this.", 8) == 0) {
            mettre_a_jour_variable((yyvsp[(1) - (3)].str) + 8, (yyvsp[(3) - (3)].entier)); // Saute "mc_this."
        } else {
            // Vérifie si c'est un champ sans this.
            if (!variable_existe((yyvsp[(1) - (3)].str))) {
                // Essaie avec this. préfixé
                char full_name[100];
                snprintf(full_name, sizeof(full_name), "mc_this.%s", (yyvsp[(1) - (3)].str));
                if (!variable_existe(full_name)) {
                    yyerror("Variable non déclarée");
                    YYERROR;
                }
                mettre_a_jour_variable(full_name, (yyvsp[(3) - (3)].entier));
            } else {
                mettre_a_jour_variable((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].entier));
            }
        }
        (yyval.entier) = (yyvsp[(3) - (3)].entier);
        free((yyvsp[(1) - (3)].str));
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 362 "syntaxique.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 363 "syntaxique.y"
    {
         char* temp = malloc(100);
         snprintf(temp, 100, "mc_this.%s", (yyvsp[(3) - (3)].str));
         (yyval.str) = temp;
         free((yyvsp[(3) - (3)].str));
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 372 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (1)].entier); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 373 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (3)].entier) && (yyvsp[(3) - (3)].entier); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 374 "syntaxique.y"
    { (yyval.entier) = !(yyvsp[(2) - (2)].entier); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 378 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (1)].entier); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 379 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (3)].entier) == (yyvsp[(3) - (3)].entier); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 380 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (3)].entier) != (yyvsp[(3) - (3)].entier); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 381 "syntaxique.y"
    {
        if ((yyvsp[(1) - (3)].entier) == 0 || (yyvsp[(3) - (3)].entier) == 0) {
            yyerror("Variable non initialisée dans comparaison");
            YYERROR;
        }
        (yyval.entier) = (yyvsp[(1) - (3)].entier) > (yyvsp[(3) - (3)].entier);
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 388 "syntaxique.y"
    {
        if ((yyvsp[(1) - (3)].entier) == 0 || (yyvsp[(3) - (3)].entier) == 0) {
            yyerror("Variable non initialisée dans comparaison");
            YYERROR;
        }
        (yyval.entier) = (yyvsp[(1) - (3)].entier) < (yyvsp[(3) - (3)].entier);
    ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 395 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (3)].entier) <= (yyvsp[(3) - (3)].entier); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 396 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (3)].entier) >= (yyvsp[(3) - (3)].entier); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 400 "syntaxique.y"
    {
        if (strcmp((yyvsp[(1) - (3)].str), "this") == 0) {
            char full_name[100];
            snprintf(full_name, sizeof(full_name), "mc_this.%s", (yyvsp[(3) - (3)].str));
            if (!variable_existe(full_name)) {
                yyerror("Membre non déclaré");
                free((yyvsp[(1) - (3)].str));
                free((yyvsp[(3) - (3)].str));
                YYERROR;
            }
            (yyval.entier) = get_valeur_variable(full_name);
            free((yyvsp[(1) - (3)].str));
            free((yyvsp[(3) - (3)].str));
        } else {
            yyerror("Accès membre non supporté pour l'identifiant non 'this'");
            free((yyvsp[(1) - (3)].str));
            free((yyvsp[(3) - (3)].str));
            YYERROR;
        }
    ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 420 "syntaxique.y"
    {
        char full_name[100];
        snprintf(full_name, sizeof(full_name), "mc_this.%s", (yyvsp[(3) - (3)].str));
        if (!variable_existe(full_name)) {
            yyerror("Membre non déclaré");
            free((yyvsp[(3) - (3)].str));
            YYERROR;
        }
        (yyval.entier) = get_valeur_variable(full_name);
        free((yyvsp[(3) - (3)].str));
    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 431 "syntaxique.y"
    {
        if (!variable_existe((yyvsp[(1) - (1)].str))) {
            yyerror("Variable non déclarée");
            free((yyvsp[(1) - (1)].str));
            YYERROR;
        }
        (yyval.entier) = get_valeur_variable((yyvsp[(1) - (1)].str));
        free((yyvsp[(1) - (1)].str));
    ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 440 "syntaxique.y"
    {
        if (!variable_existe((yyvsp[(1) - (2)].str))) {
            yyerror("Variable non déclarée");
            YYERROR;
        }
        int val = get_valeur_variable((yyvsp[(1) - (2)].str));
        val++;
        mettre_a_jour_variable((yyvsp[(1) - (2)].str), val);
        (yyval.entier) = val;
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 450 "syntaxique.y"
    {
        if (!variable_existe((yyvsp[(1) - (2)].str))) {
            yyerror("Variable non déclarée");
            YYERROR;
        }
        int val = get_valeur_variable((yyvsp[(1) - (2)].str));
        val--;
        mettre_a_jour_variable((yyvsp[(1) - (2)].str), val);
        (yyval.entier) = val;
    ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 460 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (1)].entier); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 461 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (1)].val_float); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 462 "syntaxique.y"
    { (yyval.entier) = 0; ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 463 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(2) - (3)].entier); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 464 "syntaxique.y"
    {
        // Ici vous devriez créer une nouvelle instance
        // Pour l'instant on retourne juste 0
        (yyval.entier) = 0;
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 482 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (1)].entier); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 483 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (3)].entier) + (yyvsp[(3) - (3)].entier); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 484 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (3)].entier) - (yyvsp[(3) - (3)].entier); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 488 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (1)].entier); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 489 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (3)].entier) * (yyvsp[(3) - (3)].entier); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 490 "syntaxique.y"
    { 
          if ((yyvsp[(3) - (3)].entier) == 0.0) {
              yyerror("Division par zéro");
              (yyval.entier) = 0.0;
          } else {
              (yyval.entier) = (yyvsp[(1) - (3)].entier) / (yyvsp[(3) - (3)].entier); 
          }
      ;}
    break;



/* Line 1455 of yacc.c  */
#line 2218 "syntaxique.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 501 "syntaxique.y"


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
    extern char *yytext;
    extern int _nb_ligne, _col;
    extern char portee_actuelle[MAX_PORTEE_LEN];
    extern Symbole table[MAX_SYMBOLES];
    extern int nb_symboles;

    fprintf(stderr, "Erreur à ligne %d, colonne %d : %s\n", _nb_ligne, _col, s);
    fprintf(stderr, "Contexte : %s\n", yytext);
    
    fprintf(stderr, "Portée actuelle : %s\n", portee_actuelle);
    
    fprintf(stderr, "Variables dans portée :\n");
    for (int i = 0; i < nb_symboles; i++) {
        if (strstr(portee_actuelle, table[i].portee)) {
            fprintf(stderr, "- %s (type: %s, valeur: %s)\n", 
                   table[i].nomEntite, table[i].type, table[i].val);
        }
    }
}

int yywrap(void) {
    return 1;
}

