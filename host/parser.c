/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "ebasic.y"

#include "byteassembler.h"
#include "memorymanager.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

extern int line_num;
void yyerror(char const*);
int yylex(void);

void yyerror (char const *msg) {
	fprintf(stderr, "%s at line %d\n", msg, line_num);
	exit(0);
}

/* Line 371 of yacc.c  */
#line 86 "parser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     REAL = 259,
     STRING = 260,
     IDENTIFIER = 261,
     NEWLINE = 262,
     REM = 263,
     DIM = 264,
     SDIM = 265,
     LET = 266,
     STOP = 267,
     ENDIF = 268,
     ELSE = 269,
     COMMA = 270,
     FOR = 271,
     TO = 272,
     FROM = 273,
     NEXT = 274,
     INTO = 275,
     GOTO = 276,
     PRINT = 277,
     INPUT = 278,
     IF = 279,
     THEN = 280,
     COREID = 281,
     SEND = 282,
     RECV = 283,
     RANDOM = 284,
     SYNC = 285,
     BCAST = 286,
     REDUCE = 287,
     SUM = 288,
     MIN = 289,
     MAX = 290,
     PROD = 291,
     ADD = 292,
     SUB = 293,
     MULT = 294,
     DIV = 295,
     MOD = 296,
     AND = 297,
     OR = 298,
     NEQ = 299,
     LEQ = 300,
     GEQ = 301,
     LT = 302,
     GT = 303,
     EQ = 304,
     NOT = 305,
     SQRT = 306,
     SIN = 307,
     COS = 308,
     TAN = 309,
     ASIN = 310,
     ACOS = 311,
     ATAN = 312,
     SINH = 313,
     COSH = 314,
     TANH = 315,
     FLOOR = 316,
     CEIL = 317,
     LOG = 318,
     LOG10 = 319,
     LPAREN = 320,
     RPAREN = 321,
     SLBRACE = 322,
     SRBRACE = 323,
     POW = 324
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define REAL 259
#define STRING 260
#define IDENTIFIER 261
#define NEWLINE 262
#define REM 263
#define DIM 264
#define SDIM 265
#define LET 266
#define STOP 267
#define ENDIF 268
#define ELSE 269
#define COMMA 270
#define FOR 271
#define TO 272
#define FROM 273
#define NEXT 274
#define INTO 275
#define GOTO 276
#define PRINT 277
#define INPUT 278
#define IF 279
#define THEN 280
#define COREID 281
#define SEND 282
#define RECV 283
#define RANDOM 284
#define SYNC 285
#define BCAST 286
#define REDUCE 287
#define SUM 288
#define MIN 289
#define MAX 290
#define PROD 291
#define ADD 292
#define SUB 293
#define MULT 294
#define DIV 295
#define MOD 296
#define AND 297
#define OR 298
#define NEQ 299
#define LEQ 300
#define GEQ 301
#define LT 302
#define GT 303
#define EQ 304
#define NOT 305
#define SQRT 306
#define SIN 307
#define COS 308
#define TAN 309
#define ASIN 310
#define ACOS 311
#define ATAN 312
#define SINH 313
#define COSH 314
#define TANH 315
#define FLOOR 316
#define CEIL 317
#define LOG 318
#define LOG10 319
#define LPAREN 320
#define RPAREN 321
#define SLBRACE 322
#define SRBRACE 323
#define POW 324



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 19 "ebasic.y"

	int integer;
	float real;	
	struct memorycontainer * data;
	char *string;


/* Line 387 of yacc.c  */
#line 275 "parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 303 "parser.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  77
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   393

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNRULES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    17,    19,    23,
      25,    30,    38,    43,    50,    56,    62,    68,    77,    80,
      86,    94,    99,   102,   107,   112,   116,   123,   126,   128,
     130,   132,   134,   136,   138,   140,   142,   144,   146,   148,
     150,   153,   155,   159,   161,   165,   167,   171,   175,   177,
     181,   185,   189,   193,   195,   199,   203,   205,   209,   213,
     217,   221,   224,   227,   230,   233,   236,   239,   242,   245,
     248,   251,   254,   257,   260,   263,   265,   269,   271,   276,
     278,   280,   282,   284,   286,   289,   292,   294,   296
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      72,     0,    -1,    73,    -1,    74,    -1,    73,    74,    -1,
      75,     7,    -1,     3,    75,     7,    -1,     7,    -1,    76,
      70,    75,    -1,    76,    -1,    28,    90,    18,    82,    -1,
      28,    90,    67,    82,    68,    18,    82,    -1,    27,    82,
      17,    82,    -1,    31,    82,    18,    82,    20,    90,    -1,
      32,    77,    82,    20,    90,    -1,     9,    90,    67,    82,
      68,    -1,    10,    90,    67,    82,    68,    -1,    16,    78,
      49,    82,    17,    82,    73,    19,    -1,    21,     3,    -1,
      24,    82,    79,    73,    81,    -1,    24,    82,    79,    73,
      80,    73,    81,    -1,    24,    82,    25,    75,    -1,    23,
      90,    -1,    23,    91,    15,    90,    -1,    11,    90,    49,
      82,    -1,    90,    49,    82,    -1,    90,    67,    82,    68,
      49,    82,    -1,    22,    82,    -1,    12,    -1,     8,    -1,
      30,    -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,
      90,    -1,    25,    -1,    14,    -1,    13,    -1,    83,    -1,
      50,    83,    -1,    84,    -1,    83,    43,    84,    -1,    85,
      -1,    84,    42,    85,    -1,    86,    -1,    85,    49,    86,
      -1,    85,    44,    86,    -1,    87,    -1,    86,    48,    87,
      -1,    86,    47,    87,    -1,    86,    45,    87,    -1,    86,
      46,    87,    -1,    88,    -1,    87,    37,    88,    -1,    87,
      38,    88,    -1,    89,    -1,    88,    39,    89,    -1,    88,
      40,    89,    -1,    88,    41,    89,    -1,    88,    69,    89,
      -1,    51,    89,    -1,    52,    89,    -1,    53,    89,    -1,
      54,    89,    -1,    55,    89,    -1,    56,    89,    -1,    57,
      89,    -1,    58,    89,    -1,    59,    89,    -1,    60,    89,
      -1,    61,    89,    -1,    62,    89,    -1,    63,    89,    -1,
      64,    89,    -1,    91,    -1,    65,    82,    66,    -1,    90,
      -1,    90,    67,    82,    68,    -1,     6,    -1,     3,    -1,
       4,    -1,    26,    -1,    29,    -1,    92,     3,    -1,    92,
       4,    -1,     5,    -1,    37,    -1,    38,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    58,    59,    63,    64,    65,    69,    70,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    98,    99,   100,   101,   105,   109,   113,   117,   121,
     122,   126,   127,   130,   131,   135,   136,   137,   141,   142,
     143,   144,   145,   149,   150,   151,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   177,   178,   179,   180,   184,
     188,   189,   190,   191,   192,   193,   194,   198,   199
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REAL", "STRING",
  "IDENTIFIER", "NEWLINE", "REM", "DIM", "SDIM", "LET", "STOP", "ENDIF",
  "ELSE", "COMMA", "FOR", "TO", "FROM", "NEXT", "INTO", "GOTO", "PRINT",
  "INPUT", "IF", "THEN", "COREID", "SEND", "RECV", "RANDOM", "SYNC",
  "BCAST", "REDUCE", "SUM", "MIN", "MAX", "PROD", "ADD", "SUB", "MULT",
  "DIV", "MOD", "AND", "OR", "NEQ", "LEQ", "GEQ", "LT", "GT", "EQ", "NOT",
  "SQRT", "SIN", "COS", "TAN", "ASIN", "ACOS", "ATAN", "SINH", "COSH",
  "TANH", "FLOOR", "CEIL", "LOG", "LOG10", "LPAREN", "RPAREN", "SLBRACE",
  "SRBRACE", "POW", "':'", "$accept", "program", "lines", "line",
  "statements", "statement", "reductionop", "declareident", "openifblock",
  "elseifblock", "closeifblock", "expression", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "value", "ident",
  "constant", "unary_operator", YY_NULL
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    78,    79,    80,    81,    82,
      82,    83,    83,    84,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    87,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    89,    89,    90,
      91,    91,    91,    91,    91,    91,    91,    92,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     3,     1,     3,     1,
       4,     7,     4,     6,     5,     5,     5,     8,     2,     5,
       7,     4,     2,     4,     4,     3,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     3,     1,     4,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    79,     7,    29,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,     0,
       2,     3,     0,     9,     0,     0,     0,     0,     0,     0,
      35,    18,    80,    81,    86,    82,    83,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    39,    41,    43,    45,
      48,    53,    56,    77,    75,     0,    22,     0,     0,     0,
       0,     0,    31,    32,    33,    34,     0,     1,     4,     5,
       0,     0,     0,     6,     0,     0,     0,     0,    40,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,     0,    36,     0,     0,     0,     0,     0,     0,     8,
      25,     0,     0,     0,    24,     0,    76,    42,    44,    47,
      46,    51,    52,    50,    49,    54,    55,    57,    58,    59,
      60,     0,    23,    21,     0,    12,    10,     0,     0,     0,
       0,    15,    16,     0,    78,    38,    37,     0,    19,     0,
       0,    14,     0,     0,     0,     0,    13,    26,     0,    20,
      11,    17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    76,    29,   123,   167,
     168,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -120
static const yytype_int16 yypact[] =
{
     334,   361,  -120,  -120,  -120,     7,     7,     7,  -120,     7,
      21,   139,    82,   139,   139,     7,  -120,   139,    16,    40,
     334,  -120,    46,     3,   -26,    67,   -20,    11,    26,    30,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,   181,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,   139,  -120,    38,    41,   -30,    13,
     -27,   -23,  -120,    24,  -120,    52,  -120,    81,    72,    88,
     -10,    80,  -120,  -120,  -120,  -120,   139,  -120,  -120,  -120,
     361,   139,   139,  -120,   139,   139,   139,   139,    38,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,    33,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,    39,    39,    39,    39,   139,  -120,
    -120,     7,   361,   334,   139,   139,   139,   139,    86,  -120,
    -120,    42,    44,    45,  -120,    90,  -120,    41,   -30,    13,
      13,   -27,   -27,   -27,   -27,   -23,   -23,  -120,  -120,  -120,
    -120,    47,  -120,  -120,   244,  -120,  -120,    48,    89,     7,
      65,  -120,  -120,   139,  -120,  -120,  -120,   334,  -120,    99,
       7,  -120,   139,   334,   274,   139,  -120,  -120,   304,  -120,
    -120,  -120
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -120,  -120,  -119,   -18,     2,  -120,  -120,  -120,  -120,  -120,
     -56,     8,    91,    23,    20,   -43,   -39,   -46,   -14,     0,
     116,  -120
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      24,    24,    78,    25,   154,    26,    27,    28,   125,    30,
     112,   113,    66,     2,   106,    70,   114,   115,   116,   107,
      24,    68,    69,    81,    31,    71,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      77,    82,    32,    33,    34,     2,   117,    84,   174,    72,
      73,    74,    75,    79,   178,   119,   120,   126,   108,   109,
     110,   111,   103,   139,   140,    35,   145,   146,    36,   141,
     142,   143,   144,    80,    83,    86,    37,    38,    85,    87,
      24,   104,   129,   105,   128,    32,    33,    34,     2,   130,
     131,   118,   132,   133,   134,   135,   121,   122,   127,   136,
     147,   148,   149,   150,    54,   124,   159,   163,    35,   170,
     160,    36,   161,   162,   172,   164,   169,   175,   179,    37,
      38,   152,    24,    24,   153,   138,   151,   137,    67,     0,
      88,     0,   155,   156,   157,   158,    78,     0,     0,     0,
       0,     0,    32,    33,    34,     2,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,    78,     0,     0,   171,
      78,     0,     0,     0,     0,    35,     0,    24,    36,     0,
     176,   173,     0,    24,    24,     0,    37,    38,    24,     0,
     177,     0,     0,   180,    32,    33,    34,     2,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,    35,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     1,     0,     0,
       2,     3,     4,     5,     6,     7,     8,   165,   166,     0,
       9,     0,     0,     0,     0,    10,    11,    12,    13,     0,
       0,    14,    15,     0,    16,    17,    18,     1,     0,     0,
       2,     3,     4,     5,     6,     7,     8,   165,     0,     0,
       9,     0,     0,     0,     0,    10,    11,    12,    13,     0,
       0,    14,    15,     0,    16,    17,    18,     1,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     0,     0,     0,
       9,     0,     0,   181,     0,    10,    11,    12,    13,     0,
       0,    14,    15,     0,    16,    17,    18,     1,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     0,     0,     0,
       9,     0,     0,     0,     0,    10,    11,    12,    13,     0,
       0,    14,    15,     0,    16,    17,    18,     2,     0,     4,
       5,     6,     7,     8,     0,     0,     0,     9,     0,     0,
       0,     0,    10,    11,    12,    13,     0,     0,    14,    15,
       0,    16,    17,    18
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-120)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     1,    20,     1,   123,     5,     6,     7,    18,     9,
      37,    38,    12,     6,    44,    15,    39,    40,    41,    49,
      20,    13,    14,    49,     3,    17,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,    67,     3,     4,     5,     6,    69,    67,   167,    33,
      34,    35,    36,     7,   173,     3,     4,    67,    45,    46,
      47,    48,    54,   106,   107,    26,   112,   113,    29,   108,
     109,   110,   111,    70,     7,    49,    37,    38,    67,    49,
      80,    43,    80,    42,    76,     3,     4,     5,     6,    81,
      82,    67,    84,    85,    86,    87,    15,    25,    18,    66,
     114,   115,   116,   117,    65,    17,    20,    17,    26,    20,
      68,    29,    68,    68,    49,    68,    68,    18,   174,    37,
      38,   121,   122,   123,   122,   105,   118,   104,    12,    -1,
      39,    -1,   124,   125,   126,   127,   154,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,   174,    -1,    -1,   159,
     178,    -1,    -1,    -1,    -1,    26,    -1,   167,    29,    -1,
     170,   163,    -1,   173,   174,    -1,    37,    38,   178,    -1,
     172,    -1,    -1,   175,     3,     4,     5,     6,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    26,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     3,    -1,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      -1,    27,    28,    -1,    30,    31,    32,     3,    -1,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      -1,    27,    28,    -1,    30,    31,    32,     3,    -1,    -1,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      16,    -1,    -1,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    27,    28,    -1,    30,    31,    32,     3,    -1,    -1,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      -1,    27,    28,    -1,    30,    31,    32,     6,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    -1,    27,    28,
      -1,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    10,    11,    12,    16,
      21,    22,    23,    24,    27,    28,    30,    31,    32,    72,
      73,    74,    75,    76,    90,    75,    90,    90,    90,    78,
      90,     3,     3,     4,     5,    26,    29,    37,    38,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    90,    91,    82,    82,
      90,    82,    33,    34,    35,    36,    77,     0,    74,     7,
      70,    49,    67,     7,    67,    67,    49,    49,    83,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    82,    43,    42,    44,    49,    45,    46,
      47,    48,    37,    38,    39,    40,    41,    69,    67,     3,
       4,    15,    25,    79,    17,    18,    67,    18,    82,    75,
      82,    82,    82,    82,    82,    82,    66,    84,    85,    86,
      86,    87,    87,    87,    87,    88,    88,    89,    89,    89,
      89,    82,    90,    75,    73,    82,    82,    82,    82,    20,
      68,    68,    68,    17,    68,    13,    14,    80,    81,    68,
      20,    90,    49,    82,    73,    18,    90,    82,    73,    81,
      82,    19
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
/* Line 1787 of yacc.c  */
#line 55 "ebasic.y"
    { setMemory((yyvsp[(1) - (1)].data)); }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 59 "ebasic.y"
    { (yyval.data)=appendMemory((yyvsp[(1) - (2)].data), (yyvsp[(2) - (2)].data)); }
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 63 "ebasic.y"
    { (yyval.data) = (yyvsp[(1) - (2)].data); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 64 "ebasic.y"
    { (yyval.data) = (yyvsp[(2) - (3)].data); setLineNumber((yyval.data), (yyvsp[(1) - (3)].integer)); }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 65 "ebasic.y"
    { (yyval.data) = NULL; }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 74 "ebasic.y"
    { (yyval.data)=appendRecvStatement((yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].data)); }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 75 "ebasic.y"
    { (yyval.data)=appendRecvIntoArrayStatement((yyvsp[(2) - (7)].string), (yyvsp[(4) - (7)].data), (yyvsp[(7) - (7)].data)); }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 76 "ebasic.y"
    { (yyval.data)=appendSendStatement((yyvsp[(2) - (4)].data), (yyvsp[(4) - (4)].data)); }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 77 "ebasic.y"
    { (yyval.data)=appendBcastStatement((yyvsp[(2) - (6)].data), (yyvsp[(4) - (6)].data), (yyvsp[(6) - (6)].string)); }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 78 "ebasic.y"
    { (yyval.data)=appendReductionStatement((yyvsp[(2) - (5)].integer), (yyvsp[(3) - (5)].data), (yyvsp[(5) - (5)].string)); }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 79 "ebasic.y"
    { (yyval.data)=appendDeclareArray((yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].data)); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 80 "ebasic.y"
    { (yyval.data)=appendDeclareSharedArray((yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].data)); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 81 "ebasic.y"
    { (yyval.data)=appendForStatement((yyvsp[(2) - (8)].string), (yyvsp[(4) - (8)].data), (yyvsp[(6) - (8)].data), (yyvsp[(7) - (8)].data)); leaveScope(); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 82 "ebasic.y"
    { (yyval.data)=appendGotoStatement((yyvsp[(2) - (2)].integer)); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 83 "ebasic.y"
    { (yyval.data)=appendIfStatement((yyvsp[(2) - (5)].data), (yyvsp[(4) - (5)].data)); }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 84 "ebasic.y"
    { (yyval.data)=appendIfElseStatement((yyvsp[(2) - (7)].data), (yyvsp[(4) - (7)].data), (yyvsp[(6) - (7)].data)); }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 85 "ebasic.y"
    { (yyval.data)=appendIfStatement((yyvsp[(2) - (4)].data), (yyvsp[(4) - (4)].data)); }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 86 "ebasic.y"
    { (yyval.data)=appendInputStatement((yyvsp[(2) - (2)].string)); }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 87 "ebasic.y"
    { (yyval.data)=appendInputStringStatement((yyvsp[(2) - (4)].data), (yyvsp[(4) - (4)].string)); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 88 "ebasic.y"
    { (yyval.data)=appendLetStatement((yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].data)); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 89 "ebasic.y"
    { (yyval.data)=appendLetStatement((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].data)); }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 90 "ebasic.y"
    { (yyval.data)=appendArraySetStatement((yyvsp[(1) - (6)].string), (yyvsp[(3) - (6)].data), (yyvsp[(6) - (6)].data)); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 91 "ebasic.y"
    { (yyval.data)=appendPrintStatement((yyvsp[(2) - (2)].data)); }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 92 "ebasic.y"
    { (yyval.data)=appendStopStatement(); }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 93 "ebasic.y"
    { (yyval.data) = NULL; }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 94 "ebasic.y"
    { (yyval.data)=appendSyncStatement(); }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 98 "ebasic.y"
    { (yyval.integer)=0; }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 99 "ebasic.y"
    { (yyval.integer)=1; }
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 100 "ebasic.y"
    { (yyval.integer)=2; }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 101 "ebasic.y"
    { (yyval.integer)=3; }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 105 "ebasic.y"
    { (yyval.string)=(yyvsp[(1) - (1)].string); enterScope(); addVariableIfNeeded((yyvsp[(1) - (1)].string)); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 109 "ebasic.y"
    { enterScope(); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 113 "ebasic.y"
    { leaveScope(); enterScope(); }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 117 "ebasic.y"
    { leaveScope(); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 121 "ebasic.y"
    { (yyval.data)=(yyvsp[(1) - (1)].data); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 122 "ebasic.y"
    { (yyval.data)=(yyvsp[(2) - (2)].data); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 126 "ebasic.y"
    { (yyval.data)=(yyvsp[(1) - (1)].data); }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 127 "ebasic.y"
    { (yyval.data)=createOrExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 130 "ebasic.y"
    { (yyval.data)=(yyvsp[(1) - (1)].data); }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 131 "ebasic.y"
    { (yyval.data)=createAndExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 135 "ebasic.y"
    { (yyval.data)=(yyvsp[(1) - (1)].data); }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 136 "ebasic.y"
    { (yyval.data)=createEqExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 137 "ebasic.y"
    { (yyval.data)=createNeqExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 141 "ebasic.y"
    { (yyval.data)=(yyvsp[(1) - (1)].data); }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 142 "ebasic.y"
    { (yyval.data)=createGtExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 143 "ebasic.y"
    { (yyval.data)=createLtExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 144 "ebasic.y"
    { (yyval.data)=createLeqExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 145 "ebasic.y"
    { (yyval.data)=createGeqExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 149 "ebasic.y"
    { (yyval.data)=(yyvsp[(1) - (1)].data); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 150 "ebasic.y"
    { (yyval.data)=createAddExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 151 "ebasic.y"
    { (yyval.data)=createSubExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 155 "ebasic.y"
    { (yyval.data)=(yyvsp[(1) - (1)].data); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 156 "ebasic.y"
    { (yyval.data)=createMulExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 157 "ebasic.y"
    { (yyval.data)=createDivExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 158 "ebasic.y"
    { (yyval.data)=createModExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 159 "ebasic.y"
    { (yyval.data)=createPowExpression((yyvsp[(1) - (3)].data), (yyvsp[(3) - (3)].data)); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 160 "ebasic.y"
    { (yyval.data)=createSqrtExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 161 "ebasic.y"
    { (yyval.data)=createSinExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 162 "ebasic.y"
    { (yyval.data)=createCosExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 163 "ebasic.y"
    { (yyval.data)=createTanExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 164 "ebasic.y"
    { (yyval.data)=createASinExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 165 "ebasic.y"
    { (yyval.data)=createACosExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 166 "ebasic.y"
    { (yyval.data)=createATanExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 167 "ebasic.y"
    { (yyval.data)=createSinHExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 168 "ebasic.y"
    { (yyval.data)=createCosHExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 169 "ebasic.y"
    { (yyval.data)=createTanHExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 170 "ebasic.y"
    { (yyval.data)=createFloorExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 171 "ebasic.y"
    { (yyval.data)=createCeilExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 172 "ebasic.y"
    { (yyval.data)=createLogExpression((yyvsp[(2) - (2)].data)); }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 173 "ebasic.y"
    { (yyval.data)=createLog10Expression((yyvsp[(2) - (2)].data)); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 177 "ebasic.y"
    { (yyval.data)=(yyvsp[(1) - (1)].data); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 178 "ebasic.y"
    { (yyval.data)=(yyvsp[(2) - (3)].data); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 179 "ebasic.y"
    { (yyval.data)=createIdentifierExpression((yyvsp[(1) - (1)].string)); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 180 "ebasic.y"
    { (yyval.data)=createIdentifierArrayAccessExpression((yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].data)); }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 184 "ebasic.y"
    { (yyval.string) = malloc(strlen((yyvsp[(1) - (1)].string))+1); strcpy((yyval.string), (yyvsp[(1) - (1)].string)); }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 188 "ebasic.y"
    { (yyval.data)=createIntegerExpression((yyvsp[(1) - (1)].integer)); }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 189 "ebasic.y"
    { (yyval.data)=createRealExpression((yyvsp[(1) - (1)].real)); }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 190 "ebasic.y"
    { (yyval.data)=createCoreIdExpression(); }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 191 "ebasic.y"
    { (yyval.data)=createRandomExpression(); }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 192 "ebasic.y"
    { (yyval.data)=createIntegerExpression((yyvsp[(1) - (2)].integer) * (yyvsp[(2) - (2)].integer)); }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 193 "ebasic.y"
    { (yyval.data)=createRealExpression((yyvsp[(1) - (2)].integer) * (yyvsp[(2) - (2)].real)); }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 194 "ebasic.y"
    { (yyval.data)=createStringExpression((yyvsp[(1) - (1)].string)); }
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 198 "ebasic.y"
    { (yyval.integer) = 1; }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 199 "ebasic.y"
    { (yyval.integer) = -1; }
    break;


/* Line 1787 of yacc.c  */
#line 2205 "parser.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2050 of yacc.c  */
#line 202 "ebasic.y"

