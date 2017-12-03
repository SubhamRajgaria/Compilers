/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass3_15CS30043.y" /* yacc.c:339  */

	#include<stdio.h>
	#include "ass4_15CS30043_translator.h"
	#include "ass4_15CS30043_translator.cxx"
	#include <string>
	#include <sstream>
	#include <cstring>
	int yyerror(string);
	extern int yylex(void);
	exp_attr exp;


#line 79 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INT_CONSTANT = 259,
    FLOAT_CONSTANT = 260,
    CHAR_CONSTANT = 261,
    ZERO_CONSTANT = 262,
    STRING_LITERAL = 263,
    UNSIGNED = 264,
    BREAK = 265,
    VOID = 266,
    RETURN = 267,
    CASE = 268,
    FLOAT = 269,
    SHORT = 270,
    CHAR = 271,
    FOR = 272,
    SIGNED = 273,
    WHILE = 274,
    GOTO = 275,
    BOOL = 276,
    CONTINUE = 277,
    IF = 278,
    DEFAULT = 279,
    DO = 280,
    INT = 281,
    SWITCH = 282,
    DOUBLE = 283,
    LONG = 284,
    ELSE = 285,
    MATRIX = 286,
    DASHARROW = 287,
    PLUSPLUS = 288,
    MINMIN = 289,
    DOTQUOTE = 290,
    LSHIFT = 291,
    RSHIFT = 292,
    LTE = 293,
    GTE = 294,
    EQUALS = 295,
    NEQUALS = 296,
    LAND = 297,
    LOR = 298,
    STAREQ = 299,
    DIVEQ = 300,
    MODEQ = 301,
    PLUSEQ = 302,
    MINEQ = 303,
    LSHIFTEQ = 304,
    RSHIFTEQ = 305,
    ANDEQ = 306,
    POWEQ = 307,
    OREQ = 308,
    ERR = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "ass3_15CS30043.y" /* yacc.c:355  */

	id_attr id;
	int intVal;
	char* charVal;
	char cVal;
	double dbVal;
	char* stringVal;
	struct exp_attr exp;
	dec_attr dec;
	int instr;
	vector<int>* nextList;


#line 185 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 202 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  120

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    66,    61,     2,
      55,    56,    62,    63,    60,    64,    59,    65,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,    74,
      67,    73,    68,    71,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,    69,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    70,    76,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,   127,   143,   159,   174,   191,   196,   201,
     203,   225,   226,   229,   232,   255,   280,   283,   284,   287,
     288,   291,   293,   315,   337,   423,   424,   425,   426,   429,
     433,   449,   482,   514,   547,   548,   559,   571,   572,   588,
     603,   604,   621,   637,   653,   669,   670,   685,   701,   702,
     717,   718,   734,   735,   750,   751,   761,   762,   770,   771,
     781,   782,   814,   817,   820,   823,   826,   829,   832,   835,
     838,   841,   844,   849,   854,   861,   863
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INT_CONSTANT",
  "FLOAT_CONSTANT", "CHAR_CONSTANT", "ZERO_CONSTANT", "STRING_LITERAL",
  "UNSIGNED", "BREAK", "VOID", "RETURN", "CASE", "FLOAT", "SHORT", "CHAR",
  "FOR", "SIGNED", "WHILE", "GOTO", "BOOL", "CONTINUE", "IF", "DEFAULT",
  "DO", "INT", "SWITCH", "DOUBLE", "LONG", "ELSE", "MATRIX", "DASHARROW",
  "PLUSPLUS", "MINMIN", "DOTQUOTE", "LSHIFT", "RSHIFT", "LTE", "GTE",
  "EQUALS", "NEQUALS", "LAND", "LOR", "STAREQ", "DIVEQ", "MODEQ", "PLUSEQ",
  "MINEQ", "LSHIFTEQ", "RSHIFTEQ", "ANDEQ", "POWEQ", "OREQ", "ERR", "'('",
  "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'",
  "'}'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "M", "N", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,    40,    41,    91,    93,    46,
      44,    38,    42,    43,    45,    47,    37,    60,    62,    94,
     124,    63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -77

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      16,   -70,   -70,   -70,   -70,   -70,   -70,    16,    16,    16,
     -70,   -70,   -70,   -70,   -41,    -4,    39,    16,   -70,   -48,
     -31,   -11,   -26,    24,   -18,   -22,    -9,    26,   -32,   -70,
     -70,     3,   -70,   -70,   -50,    16,    67,   -70,   -70,   -70,
      16,    69,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,    16,   -70,   -70,    16,    16,    16,    16,
      16,    16,    16,    16,    16,    16,    16,    16,    16,    16,
      16,    16,   -70,   -70,     4,   -70,    16,   -70,    -6,   -70,
      25,    22,   -70,   -70,   -70,   -70,   -70,   -70,   -48,   -48,
     -31,   -31,   -11,   -11,   -11,   -11,   -26,   -26,    24,   -18,
     -22,    16,    16,   -70,   -70,    36,   -70,    16,    -9,    26,
      16,    16,   -70,    34,     2,    23,   -70,   -70,    16,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     3,     4,     5,     6,     7,     0,     0,     0,
      25,    26,    27,    28,     9,    21,    29,     0,    30,    34,
      37,    40,    45,    48,    50,    52,    54,    56,    58,    60,
      73,     0,    22,    23,     0,     0,     0,    14,    15,    16,
      17,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    62,     0,    29,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    75,     0,     1,     0,     8,     0,    13,
       0,    18,    19,    12,    61,    31,    32,    33,    35,    36,
      38,    39,    43,    44,    41,    42,    46,    47,    49,    51,
      53,     0,     0,    75,    74,     0,    11,     0,    55,    57,
       0,     0,    20,    76,     0,     0,    10,    75,     0,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -12,   -23,     5,
      -7,     6,    27,    28,    29,    -2,    -5,   -70,   -17,   -38,
     -70,    -8,   -69,     1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    14,    15,    80,    81,    54,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      53,    31,   101,    74
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      16,    34,    82,    75,   102,    55,    77,    32,    33,    16,
      76,    73,    63,    64,    56,    84,    35,    57,    58,     1,
       2,     3,     4,     5,     6,    61,    62,    78,    36,    37,
      38,    39,    59,    60,   110,    16,    88,    89,   104,   -76,
      16,    65,    66,    69,    85,    86,    87,    70,   118,     7,
       8,    40,   105,    16,    76,    41,    92,    93,    94,    95,
     116,    71,    76,    76,    67,    68,    90,    91,    72,   112,
      79,     9,    83,    96,    97,   103,    16,    10,    11,    12,
      13,   106,   107,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   111,    76,   117,    98,   109,    99,   108,
     100,   119,   113,   114,     0,     0,     0,    16,     0,     0,
      16,    16,    52,     0,   115
};

static const yytype_int8 yycheck[] =
{
       0,     9,    40,     0,    73,    17,    56,     7,     8,     9,
      60,    43,    38,    39,    62,    53,    57,    65,    66,     3,
       4,     5,     6,     7,     8,    36,    37,    35,    32,    33,
      34,    35,    63,    64,   103,    35,    59,    60,    76,    71,
      40,    67,    68,    61,    56,    57,    58,    69,   117,    33,
      34,    55,    58,    53,    60,    59,    63,    64,    65,    66,
      58,    70,    60,    60,    40,    41,    61,    62,    42,   107,
       3,    55,     3,    67,    68,    71,    76,    61,    62,    63,
      64,    56,    60,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    57,    60,    72,    69,   102,    70,   101,
      71,   118,   110,   111,    -1,    -1,    -1,   107,    -1,    -1,
     110,   111,    73,    -1,   113
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    33,    34,    55,
      61,    62,    63,    64,    78,    79,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    98,    82,    82,    98,    57,    32,    33,    34,    35,
      55,    59,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    73,    97,    82,    84,    62,    65,    66,    63,
      64,    36,    37,    38,    39,    67,    68,    40,    41,    61,
      69,    70,    42,    43,   100,     0,    60,    56,    98,     3,
      80,    81,    96,     3,    96,    84,    84,    84,    85,    85,
      86,    86,    87,    87,    87,    87,    88,    88,    89,    90,
      91,    99,    99,    71,    96,    58,    56,    60,    92,    93,
      99,    57,    96,    98,    98,   100,    58,    72,    99,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    80,    80,    81,
      81,    82,    82,    82,    82,    83,    83,    83,    83,    84,
      85,    85,    85,    85,    86,    86,    86,    87,    87,    87,
      88,    88,    88,    88,    88,    89,    89,    89,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    99,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       7,     4,     3,     3,     2,     2,     2,     0,     1,     1,
       3,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     4,     1,     4,     1,     9,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 96 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
											if(currentsymboltable->isPresent((yyvsp[0].id).name))
												{
													(yyval.exp).addr = currentsymboltable->lookup((yyvsp[0].id).name);
													currentsymboltable->print();
													(yyval.exp).t_exp = &((yyval.exp).addr->t);
													//$$.t_exp = new type(t_mat);
													//$$.t_exp->rows = 3;
													//$$.t_exp->cols = 2;
													//$$.t_exp->size = $$.t_exp->get_size();
													//$$.addr->size = $$.t_exp->size; 
													(yyval.exp).truelist = NULL;
					   								(yyval.exp).falselist = NULL;
												}



											else
												if(globalsymboltable->isPresent((yyvsp[0].id).name))
													{
														(yyval.exp).addr = globalsymboltable->lookup((yyvsp[0].id).name);
														(yyval.exp).t_exp = &((yyval.exp).addr->t);
														(yyval.exp).truelist = NULL;
					   									(yyval.exp).falselist = NULL;
													}

												else
													exit(-1);		//error;
					
										}
#line 1405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 127 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	basictype t = t_integer;
				   							type* t_int = new type(t);
				   							symentry* tmp = currentsymboltable->gentemp(*t_int);
					   						(yyval.exp).addr = tmp;
					   						initialVal i;
					   						i.intVal = (yyvsp[0].intVal);
					   						(yyval.exp).addr->setInitialVal(i);
					   						ostringstream str1;
					   						str1 << (yyvsp[0].intVal);
					   						quads->emit(str1.str(),tmp->name);
					   						(yyval.exp).t_exp = t_int;
					   						(yyval.exp).truelist = NULL;
					   						(yyval.exp).falselist = NULL;

					   					}
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 143 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				   							basictype t = t_double;
				   							type* t_doub = new type(t);
				   							symentry* tmp = currentsymboltable->gentemp(*t_doub);
					   						(yyval.exp).addr = tmp;
					   						initialVal i;
					   						i.dbVal = (yyvsp[0].dbVal);
					   						(yyval.exp).addr->setInitialVal(i);
					   						ostringstream str1;
					   						str1 << (yyvsp[0].dbVal);
					   						quads->emit(str1.str(),tmp->name);
					   						(yyval.exp).t_exp = t_doub;
					   						(yyval.exp).truelist = NULL;
					   						(yyval.exp).falselist = NULL;
					   					}
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 159 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				   							basictype t = t_char;
				   							type* t_char = new type(t);
				   							symentry* tmp = currentsymboltable->gentemp(*t_char);
					   						(yyval.exp).addr = tmp;
					   						initialVal i;
					   						i.charVal = (yyvsp[0].charVal);
					   						(yyval.exp).addr->setInitialVal(i);
					   						quads->emit(string((yyvsp[0].charVal)),tmp->name);
					   						(yyval.exp).t_exp = t_char;
					   						(yyval.exp).truelist = NULL;
					   						(yyval.exp).falselist = NULL;

				   						}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 174 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				   							basictype t = t_integer;
				   							type* t_int = new type(t);
				   							symentry* tmp = currentsymboltable->gentemp(*t_int);
					   						(yyval.exp).addr = tmp;
					   						initialVal i;
					   						i.intVal = (yyvsp[0].intVal);
					   						(yyval.exp).addr->setInitialVal(i);
					   						ostringstream str1;
					   						str1 << (yyvsp[0].intVal);
					   						quads->emit(str1.str(),tmp->name);
					   						(yyval.exp).t_exp = t_int;
					   						(yyval.exp).truelist = NULL;
					   						(yyval.exp).falselist = NULL;

				   						}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 191 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				   							//Not supported for now 

				  						}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 196 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[-1].exp);	}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 201 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);	}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 203 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				   																		if((yyvsp[-6].exp).t_exp->actype!=t_mat)
				   																		{
				   																			cout << "Not a matrix type";
				   																			exit(-1);
				   																		}
				   																		else
				   																		{
				   																			(yyval.exp)=(yyvsp[-6].exp);
				   																			(yyval.exp).isMattype = true;
				   																			type* t = new type(t_integer);
				   																			symentry* temp = currentsymboltable->gentemp(*t);
				   																			ostringstream str1;
					   																		str1 << (yyvsp[-6].exp).t_exp->cols;
				   																			quads->emit("*",(yyvsp[-4].exp).addr->name,str1.str(),temp->name);
				   																			str1 << (yyvsp[-6].exp).t_exp->rows;
				   																			quads->emit("+",temp->name,(yyvsp[-1].exp).addr->name,temp->name);
				   																			(yyval.exp).addr = temp;
				   																			(yyval.exp).mat = (yyvsp[-6].exp).addr;
				   																			(yyval.exp).t_exp = new type(t_double);
				   																		}
				   																	}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 225 "ass3_15CS30043.y" /* yacc.c:1646  */
    {}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 226 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				   																		//Not supported
				   																	}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 229 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				   																		//Not supported
				   																	}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 232 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				   																(yyval.exp)=(yyvsp[-1].exp);
				   																(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);

				   																if((yyvsp[-1].exp).isMattype==true)
				   																{
				   																	type* ty = new type(t_double);
				   																	symentry* tmp = currentsymboltable->gentemp(*ty);
				   																	quads->emit("=[]",(yyvsp[-1].exp).mat->name,(yyvsp[-1].exp).addr->name,(yyval.exp).addr->name);
				   																	(yyval.exp).t_exp = ty;
				   																	(yyval.exp).addr->t = *ty;
				   																	(yyval.exp).addr->size = ty->get_size();
				   																	quads->emit("+",(yyval.exp).addr->name,"1",tmp->name);
				   																	quads->emit("[]=",tmp->name,(yyvsp[-1].exp).addr->name,(yyvsp[-1].exp).mat->name);
				   																}
				   																else{
				   																	quads->emit((yyvsp[-1].exp).addr->name,(yyval.exp).addr->name);
				   																	quads->emit("+",(yyvsp[-1].exp).addr->name,"1",(yyvsp[-1].exp).addr->name);
				   																}
				   																(yyval.exp).isMattype = false;

				   															}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 255 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				   																(yyval.exp)=(yyvsp[-1].exp);
				   																(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);

				   																if((yyvsp[-1].exp).isMattype==true)
				   																{
				   																	type* ty = new type(t_double);
				   																	symentry* tmp = currentsymboltable->gentemp(*ty);
				   																	quads->emit("=[]",(yyvsp[-1].exp).mat->name,(yyvsp[-1].exp).addr->name,(yyval.exp).addr->name);
				   																	(yyval.exp).addr->t = *ty;
				   																	(yyval.exp).t_exp = ty;
				   																	(yyval.exp).addr->size = ty->get_size();
				   																	cout << (yyval.exp).addr->name << ":" << (yyval.exp).addr->t.size;
				   																	quads->emit("-",(yyval.exp).addr->name,"1",tmp->name);
				   																	quads->emit("[]=",tmp->name,(yyvsp[-1].exp).addr->name,(yyvsp[-1].exp).mat->name);
				   																}
				   																else{
				   																	quads->emit((yyvsp[-1].exp).addr->name,(yyval.exp).addr->name);
				   																	quads->emit("-",(yyvsp[-1].exp).addr->name,"1",(yyvsp[-1].exp).addr->name);
				   																}

				   																(yyval.exp).isMattype = false;

				   															}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 280 "ass3_15CS30043.y" /* yacc.c:1646  */
    {}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 283 "ass3_15CS30043.y" /* yacc.c:1646  */
    {}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 284 "ass3_15CS30043.y" /* yacc.c:1646  */
    {}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 287 "ass3_15CS30043.y" /* yacc.c:1646  */
    {}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 288 "ass3_15CS30043.y" /* yacc.c:1646  */
    {}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 291 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp) = (yyvsp[0].exp);	}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 293 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
		   		 																(yyval.exp)=(yyvsp[0].exp);
				   																(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);

				   																if((yyvsp[0].exp).isMattype==true)
				   																{
				   																	type* ty = new type(t_double);
				   																	quads->emit("=[]",(yyvsp[0].exp).mat->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);
				   																	(yyval.exp).addr->t = *ty;
				   																	(yyval.exp).t_exp = ty;
				   																	(yyval.exp).addr->size = ty->get_size();
				   																	quads->emit("+",(yyval.exp).addr->name,"1",(yyval.exp).addr->name);
				   																	quads->emit("[]=",(yyval.exp).addr->name,(yyvsp[0].exp).addr->name,(yyvsp[0].exp).mat->name);
				   																}
				   																else{
				   																	quads->emit("+",(yyvsp[0].exp).addr->name,"1",(yyvsp[0].exp).addr->name);
				   																	quads->emit((yyvsp[0].exp).addr->name,(yyval.exp).addr->name);
				   																}
				   																(yyval.exp).isMattype = false;

		   		 															}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 315 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
		   		 																(yyval.exp)=(yyvsp[0].exp);
				   																(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);

				   																if((yyvsp[0].exp).isMattype==true)
				   																{
				   																	type* ty = new type(t_double);
				   																	quads->emit("=[]",(yyvsp[0].exp).mat->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);
				   																	(yyval.exp).addr->t = *ty;
				   																	(yyval.exp).t_exp = ty;
				   																	(yyval.exp).addr->size = ty->get_size();
				   																	quads->emit("-",(yyval.exp).addr->name,"1",(yyval.exp).addr->name);
				   																	quads->emit("[]=",(yyval.exp).addr->name,(yyvsp[0].exp).addr->name,(yyvsp[0].exp).mat->name);
				   																}
				   																else{
				   																	quads->emit("-",(yyvsp[0].exp).addr->name,"1",(yyvsp[0].exp).addr->name);
				   																	quads->emit((yyvsp[0].exp).addr->name,(yyval.exp).addr->name);
				   																}
				   																(yyval.exp).isMattype = false;

		   		 															}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 337 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
		   		 																if( (yyvsp[-1].cVal) == '&') 
		   		 																{

		   		 																	(yyval.exp) = (yyvsp[0].exp);
		   		 																	basictype t = t_pointer;
		   		 																	(yyval.exp).t_exp = new type(t);
		   		 																	(yyval.exp).t_exp->pointerto = (yyvsp[0].exp).t_exp;
		   		 																	(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
		   		 																	if((yyvsp[0].exp).isMattype==false){
		   		 																		quads->emit("&",(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);
		   		 																	}
		   		 																	else
		   		 																	{
		   		 																		quads->emit("+",(yyval.exp).addr->name,(yyvsp[0].exp).mat->name,(yyvsp[0].exp).addr->name);
		   		 																	}
		   		 																}
		   		 																else if((yyvsp[-1].cVal) == '*')
		   		 																{

		   		 																	if((yyvsp[0].exp).t_exp->pointerto == NULL) //if not a pointer throw error
		   		 																	{
		   		 																		cout << "Error - not a pointer";
		   		 																		exit(-1);										
		   		 																	}
		   		 																	(yyval.exp) = (yyvsp[0].exp);
		   		 																	(yyval.exp).t_exp = (yyvsp[0].exp).t_exp->pointerto;
		   		 																	(yyval.exp).isPtrtype = true;		   		 																	
		   		 																}
		   		 																else if((yyvsp[-1].cVal) == '+')
		   		 																{
		   		 																	(yyval.exp) = (yyvsp[0].exp);
		   		 																	if((yyvsp[0].exp).isMattype == true)
		   		 																	{
		   		 																		(yyval.exp).isMattype = false;
		   		 																		type* ty = new type(t_double);
		   		 																		symentry* tmp = currentsymboltable->gentemp(*ty);
		   		 																		quads->emit("=[]",(yyvsp[0].exp).mat->name,(yyvsp[0].exp).addr->name,tmp->name);
		   		 																		(yyval.exp).addr = tmp;
				   																		(yyval.exp).t_exp = ty;
		   		 																	}
		   		 																	else if((yyvsp[0].exp).isPtrtype == true)
		   		 																	{
		   		 																		(yyval.exp).isPtrtype = false;
		   		 																		(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
		   		 																		quads->emit("*val",(yyvsp[0].exp).addr->name,(yyval.exp).addr->name); 
		   		 																	}
		   		 																	
		   		 																}
		   		 																else if((yyvsp[-1].cVal) == '-')
		   		 																{
		   		 																	(yyval.exp)=(yyvsp[0].exp);
		   		 																	if((yyvsp[0].exp).isMattype == true)
		   		 																	{
		   		 																		(yyval.exp).isMattype = false;
		   		 																		type* ty = new type(t_double);
		   		 																		symentry* tmp = currentsymboltable->gentemp(*ty);
		   		 																		quads->emit("=[]",(yyvsp[0].exp).mat->name,(yyvsp[0].exp).addr->name,tmp->name);
				   																		(yyval.exp).t_exp = ty;
				   																		(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
		   		 																		quads->emit("-",tmp->name,(yyval.exp).addr->name);
		   		 																	}
		   		 																	else if((yyvsp[0].exp).isPtrtype == true)
		   		 																	{
		   		 																		(yyval.exp).isPtrtype = false;
		   		 																		symentry* tmp= currentsymboltable->gentemp(*(yyval.exp).t_exp);
		   		 																		quads->emit("*val",(yyvsp[0].exp).addr->name,tmp->name);
		   		 																		(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
		   		 																		quads->emit("-",tmp->name,(yyval.exp).addr->name); 
		   		 																	}
		   		 																	else if(((yyvsp[0].exp).isMattype == false && (yyvsp[0].exp).t_exp->actype == t_mat)||(((yyvsp[0].exp).isPtrtype == false && (yyvsp[0].exp).t_exp->actype == t_pointer)))
		   		 																	{
		   		 																		cout << "Error - Cannot negate a pointer reference";
		   		 																		exit(-1);
		   		 																	}
		   		 																	else
		   		 																	{
		   		 																		(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
		   		 																		quads->emit("-",(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);
		   		 																	}
		   		 																	
		   		 																}

		   		 															}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 423 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.cVal) = '&';	}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 424 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.cVal) = '*';	}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 425 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.cVal) = '+';	}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 426 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.cVal) = '-';	}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 429 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp) = (yyvsp[0].exp);
																				
																			}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 433 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);
																				if((yyvsp[0].exp).isMattype==true)
																				{
																					type* ty = new type(t_double);
																					(yyval.exp).addr = currentsymboltable->gentemp(*ty);
																					quads->emit("=[]",(yyvsp[0].exp).mat->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name); 
																					(yyval.exp).t_exp = ty;
																					(yyval.exp).isMattype = false;
																				}
																				else if((yyvsp[0].exp).isPtrtype==true)
																				{
																					(yyval.exp).isPtrtype = false;
		   		 																	(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
		   		 																	quads->emit("*val",(yyvsp[0].exp).addr->name,(yyval.exp).addr->name); 
																				}
																			}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 449 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
						  														if((yyvsp[0].exp).isMattype == true)
						  														{
						  															(yyvsp[0].exp).isMattype = false;
						  															type* ty = new type(t_double);
						  															symentry* tmp = currentsymboltable->gentemp(*ty);
						  															quads->emit("=[]",(yyvsp[0].exp).mat->name,(yyvsp[0].exp).addr->name,tmp->name);
						  															(yyvsp[0].exp).addr = tmp;
						  															(yyvsp[0].exp).t_exp=ty;

						  														}
						  														else if((yyvsp[0].exp).isPtrtype == true)
						  														{
						  															(yyvsp[0].exp).isPtrtype = false;
		   		 																	type* ty = (yyvsp[0].exp).t_exp;
						  															symentry* tmp = currentsymboltable->gentemp(*ty);
						  															quads->emit("*val",(yyvsp[0].exp).addr->name,tmp->name);
						  															(yyvsp[0].exp).addr = tmp;
						  															(yyvsp[0].exp).t_exp = ty;						  															

						  														}
						  														if((yyvsp[-2].exp).t_exp->actype==t_double && (yyvsp[0].exp).t_exp->actype==t_integer)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
						  														(yyval.exp)=(yyvsp[-2].exp);
						  														(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
						  														quads->emit("*",(yyvsp[-2].exp).addr->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);			

						  													}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 482 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
						  	if((yyvsp[0].exp).isMattype == true)
						  														{
						  															(yyvsp[0].exp).isMattype = false;
						  															type* ty = new type(t_double);
						  															symentry* tmp = currentsymboltable->gentemp(*ty);
						  															quads->emit("=[]",(yyvsp[0].exp).mat->name,(yyvsp[0].exp).addr->name,tmp->name);
						  															(yyvsp[0].exp).addr = tmp;
						  															(yyvsp[0].exp).t_exp=ty;

						  														}
						  														else if((yyvsp[0].exp).isPtrtype == true)
						  														{
						  															(yyvsp[0].exp).isPtrtype = false;
		   		 																	type* ty = (yyvsp[0].exp).t_exp;
						  															symentry* tmp = currentsymboltable->gentemp(*ty);
						  															quads->emit("*val",(yyvsp[0].exp).addr->name,tmp->name);
						  															(yyvsp[0].exp).addr = tmp;
						  															(yyvsp[0].exp).t_exp = ty;						  															

						  														}
						  														if((yyvsp[-2].exp).t_exp->actype==t_double && (yyvsp[0].exp).t_exp->actype==t_integer)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				(yyval.exp)=(yyvsp[-2].exp);
						  														(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
						  														quads->emit("/",(yyvsp[-2].exp).addr->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);			
																			}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 514 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	if((yyvsp[0].exp).isMattype == true)
						  														{
						  															(yyvsp[0].exp).isMattype = false;
						  															type* ty = new type(t_double);
						  															symentry* tmp = currentsymboltable->gentemp(*ty);
						  															quads->emit("=[]",(yyvsp[0].exp).mat->name,(yyvsp[0].exp).addr->name,tmp->name);
						  															(yyvsp[0].exp).addr = tmp;
						  															(yyvsp[0].exp).t_exp=ty;

						  														}
						  														else if((yyvsp[0].exp).isPtrtype == true)
						  														{
						  															(yyvsp[0].exp).isPtrtype = false;
		   		 																	type* ty = (yyvsp[0].exp).t_exp;
						  															symentry* tmp = currentsymboltable->gentemp(*ty);
						  															quads->emit("*val",(yyvsp[0].exp).addr->name,tmp->name);
						  															(yyvsp[0].exp).addr = tmp;
						  															(yyvsp[0].exp).t_exp = ty;						  															

						  														}
						  														if((yyvsp[-2].exp).t_exp->actype==t_double && (yyvsp[0].exp).t_exp->actype==t_integer)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
						  														(yyval.exp)=(yyvsp[-2].exp);
						  														(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
						  														quads->emit("%",(yyvsp[-2].exp).addr->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);			

						  													}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 547 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);	}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 548 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	if((yyvsp[-2].exp).t_exp->actype==t_double && (yyvsp[0].exp).t_exp->actype==t_integer)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				(yyval.exp)=(yyvsp[-2].exp);
						  														(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
						  														quads->emit("+",(yyvsp[-2].exp).addr->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);	

																			}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 559 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
																				if((yyvsp[-2].exp).t_exp->actype==t_double && (yyvsp[0].exp).t_exp->actype==t_integer)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				(yyval.exp)=(yyvsp[-2].exp);
						  														(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
						  														quads->emit("-",(yyvsp[-2].exp).addr->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);	
						  													}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 571 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);	}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 572 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				 																if((yyvsp[-2].exp).t_exp->actype == t_double || (yyvsp[0].exp).t_exp->actype == t_double)
				 																	{
				 																		cout << "Incompatible Types for Shift operation - Double";
				 																		exit(-1);
				 																	}
				 																if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				(yyval.exp)=(yyvsp[-2].exp);
						  														(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
						  														quads->emit("<<",(yyvsp[-2].exp).addr->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);	

				 															}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 588 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				 																if((yyvsp[-2].exp).t_exp->actype == t_double || (yyvsp[0].exp).t_exp->actype == t_double)
				 																	{
				 																		cout << "Incompatible Types for Shift operation";
				 																		exit(-1);
				 																	}
				 																if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				(yyval.exp)=(yyvsp[-2].exp);
						  														(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
						  														quads->emit(">>",(yyvsp[-2].exp).addr->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);	
																			}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 603 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);	}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 604 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
					  															if((yyvsp[-2].exp).t_exp->actype==t_double && (yyvsp[0].exp).t_exp->actype==t_integer)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				basictype t = t_Bool;
																				(yyval.exp).t_exp = new type(t);
																				(yyval.exp).truelist = makelist(quads->nextinstr);
					  															(yyval.exp).falselist =makelist(quads->nextinstr+1);
					  															quads->emit("if<",(yyvsp[-2].exp).addr->name, (yyvsp[0].exp).addr->name,"");
					  															quads->emit("goto","","");
					  															

					  														}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 621 "ass3_15CS30043.y" /* yacc.c:1646  */
    {

					  															if((yyvsp[-2].exp).t_exp->actype==t_double && (yyvsp[0].exp).t_exp->actype==t_integer)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				basictype t = t_Bool;
																				(yyval.exp).t_exp = new type(t);
					  															(yyval.exp).truelist = makelist(quads->nextinstr);
					  															(yyval.exp).falselist =makelist(quads->nextinstr+1);
					  															quads->emit("if>",(yyvsp[-2].exp).addr->name, (yyvsp[0].exp).addr->name,"");
					  															quads->emit("goto","","");

					  														}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 637 "ass3_15CS30043.y" /* yacc.c:1646  */
    {

					  															if((yyvsp[-2].exp).t_exp->actype==t_double && (yyvsp[0].exp).t_exp->actype==t_integer)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				basictype t = t_Bool;
																				(yyval.exp).t_exp = new type(t);
					  															(yyval.exp).truelist = makelist(quads->nextinstr);
					  															(yyval.exp).falselist =makelist(quads->nextinstr+1);
					  															quads->emit("if<=",(yyvsp[-2].exp).addr->name, (yyvsp[0].exp).addr->name,"");
					  															quads->emit("goto","","");
					  														}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 653 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	
					  															if((yyvsp[-2].exp).t_exp->actype==t_double && (yyvsp[0].exp).t_exp->actype==t_integer)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				basictype t = t_Bool;
																				(yyval.exp).t_exp = new type(t);
					  															(yyval.exp).truelist = makelist(quads->nextinstr);
					  															(yyval.exp).falselist =makelist(quads->nextinstr+1);
					  															quads->emit("if>=",(yyvsp[-2].exp).addr->name, (yyvsp[0].exp).addr->name,"");
					  															quads->emit("goto","","");

					  														}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 669 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);	}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 670 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				   																if((yyvsp[-2].exp).t_exp->actype==t_double && (yyvsp[0].exp).t_exp->actype==t_integer)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				basictype t = t_Bool;
																				(yyval.exp).t_exp = new type(t);
					  															(yyval.exp).truelist = makelist(quads->nextinstr);
					  															(yyval.exp).falselist =makelist(quads->nextinstr++);
					  															quads->emit("if==",(yyvsp[-2].exp).addr->name, (yyvsp[0].exp).addr->name,"");
					  															quads->emit("goto","","");
				   															}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 685 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				   																if((yyvsp[-2].exp).t_exp->actype==t_double && (yyvsp[0].exp).t_exp->actype==t_integer)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				basictype t = t_Bool;
																				(yyval.exp).t_exp = new type(t);
					  															(yyval.exp).truelist = makelist(quads->nextinstr);
					  															(yyval.exp).falselist =makelist(quads->nextinstr++);
					  															quads->emit("if!=",(yyvsp[-2].exp).addr->name, (yyvsp[0].exp).addr->name,"");
					  															quads->emit("goto","","");

				   															}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 701 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);	}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 702 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
			   																	if((yyvsp[-2].exp).t_exp->actype == t_double || (yyvsp[0].exp).t_exp->actype == t_double)
				 																	{
				 																		cout << "Incompatible Types for Shift operation";
				 																		exit(-1);
				 																	}
				 																if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				(yyval.exp)=(yyvsp[-2].exp);
						  														(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
						  														quads->emit("&",(yyvsp[-2].exp).addr->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);	
			   																}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 717 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);	}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 718 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
				        														if((yyvsp[-2].exp).t_exp->actype == t_double || (yyvsp[0].exp).t_exp->actype == t_double)
				 																	{
				 																		cout << "Incompatible Types for Shift operation";
				 																		exit(-1);
				 																	}
				 																if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				(yyval.exp)=(yyvsp[-2].exp);
						  														(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
						  														quads->emit("^",(yyvsp[-2].exp).addr->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);

				        													}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 734 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);	}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 735 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
																				if((yyvsp[-2].exp).t_exp->actype == t_double || (yyvsp[0].exp).t_exp->actype == t_double)
				 																	{
				 																		cout << "Incompatible Types for Shift operation";
				 																		exit(-1);
				 																	}
				 																if((yyvsp[-2].exp).t_exp->actype==t_integer && (yyvsp[0].exp).t_exp->actype==t_char)
																					typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
																				else
																					typecheck(&((yyvsp[-2].exp)),&((yyvsp[0].exp)));
																				(yyval.exp)=(yyvsp[-2].exp);
						  														(yyval.exp).addr = currentsymboltable->gentemp(*(yyval.exp).t_exp);
						  														quads->emit("|",(yyvsp[-2].exp).addr->name,(yyvsp[0].exp).addr->name,(yyval.exp).addr->name);
																			}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 750 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);	}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 751 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
					   																type* t = new type(t_Bool);
					   																(yyval.exp).t_exp = t;
					   																backpatch((yyvsp[-3].exp).truelist,(yyvsp[-1].instr));
					   																(yyval.exp).truelist = (yyvsp[0].exp).truelist;
					   																(yyval.exp).falselist = merge((yyvsp[-3].exp).falselist,(yyvsp[0].exp).falselist);


					   															}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 761 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);	}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 762 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
					  															type* t = new type(t_Bool);
					   															(yyval.exp).t_exp = t;
					  															backpatch((yyvsp[-3].exp).falselist,(yyvsp[-1].instr));
					  															(yyval.exp).truelist = merge((yyvsp[-3].exp).truelist,(yyvsp[0].exp).truelist);
					  															(yyval.exp).falselist = (yyvsp[0].exp).falselist;
					  														}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 770 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);	}
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 772 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
					   															/*backpatch($1.truelist,$4.instr);
					   															backpatch($1.falselist,$8.instr);
					   															$$ = $5;
					   															$$.addr = currentsymboltable->gentemp(*$$.t_exp);*/


					   														}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 781 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);	}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 782 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
			          																	if((yyvsp[-1].cVal) != '=')
			          																		cout << "Operation not supported";
			          																	else
			          																	{
			          																		if((yyvsp[-2].exp).isMattype != true && (yyvsp[-2].exp).t_exp->actype == t_mat)
			          																		{
			          																			cout << "Unsupported Operation - Matrix cannot be directly assigned without referencing";
			        																			exit(-1);
			          																		}
			          																		
			          																		else
			          																		{
			          																			typecheck(&((yyvsp[0].exp)),&((yyvsp[-2].exp)));
			          																			if((yyvsp[-2].exp).isMattype == true)
			          																			{
			          																				quads->emit("[]=",(yyvsp[0].exp).addr->name,(yyvsp[-2].exp).addr->name,(yyvsp[-2].exp).mat->name);
			          																			}
			          																			else if((yyvsp[-2].exp).isPtrtype == true)
			          																			{
			          																				quads->emit("*copy",(yyvsp[0].exp).addr->name,(yyvsp[-2].exp).addr->name);
			          																			}
			          																			else{
			          																				quads->emit((yyvsp[0].exp).addr->name,(yyvsp[-2].exp).addr->name);
			          																			}
			          																		}
			          																	}
			          																	(yyval.exp) = (yyvsp[0].exp);


			          																}
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 814 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
																				(yyval.cVal) = '=';
																			}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 817 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	
																				//Not supported
																			}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 820 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	
																				//Not supported
																			}
#line 2365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 823 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	
																				//Not supported
																			}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 826 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	
																				//Not supported
																			}
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 829 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	
																				//Not supported
																			}
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 832 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	
																				//Not supported
																			}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 835 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	
																				//Not supported
																			}
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 838 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	
																				//Not supported
																			}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 841 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	
																				//Not supported
																			}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 844 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	
																				//Not supported
																			}
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 849 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.exp)=(yyvsp[0].exp);
																				quads->print();
																				currentsymboltable->print();
																				
																			}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 854 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
	       																		// Not supported 
	       																	}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 861 "ass3_15CS30043.y" /* yacc.c:1646  */
    {	(yyval.instr) = quads->nextinstr;	}
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 863 "ass3_15CS30043.y" /* yacc.c:1646  */
    {
																				(yyval.nextList) = makelist(quads->nextinstr);
																				quads->emit("goto","","");
																			}
#line 2462 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2466 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1027 "ass3_15CS30043.y" /* yacc.c:1906  */


int yyerror(string err){
  cout << err;
  return -1;
}

