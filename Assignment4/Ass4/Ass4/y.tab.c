/* A Bison parser, made by GNU Bison 3.0.2.  */

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass4_15CS10061_2.y" /* yacc.c:339  */

#include <stdio.h>
#include <iostream>
extern int yylex();
#include "ass4_15CS10061_translator.h"
#include <string.h>
#include <sstream>
void yyerror(const char* s);

#line 76 "y.tab.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BREAK = 258,
    CASE = 259,
    CHAR = 260,
    CONTINUE = 261,
    DEFAULT = 262,
    DO = 263,
    DOUBLE = 264,
    SHORT = 265,
    LONG = 266,
    ELSE = 267,
    FLOAT = 268,
    FOR = 269,
    GOTO = 270,
    IF = 271,
    INT = 272,
    RETURN = 273,
    SIGNED = 274,
    SWITCH = 275,
    UNSIGNED = 276,
    VOID = 277,
    WHILE = 278,
    BOOL = 279,
    MATRIX = 280,
    COMMENT = 281,
    IDENTIFIER = 282,
    INT_NO = 283,
    FLOAT_NO = 284,
    CHARACTER = 285,
    STRING = 286,
    LEFT_SQUARE_BRACE = 287,
    RIGHT_SQUARE_BRACE = 288,
    LEFT_ROUND_BRACE = 289,
    RIGHT_ROUND_BRACE = 290,
    LEFT_CURLY_BRACE = 291,
    RIGHT_CURLY_BRACE = 292,
    PERIOD = 293,
    ARROW = 294,
    INCREMENT = 295,
    DECREMENT = 296,
    AMPERSAND = 297,
    MULTIPLY = 298,
    ADD = 299,
    SUBTRACT = 300,
    TILDA = 301,
    NEGATION = 302,
    DIVIDE = 303,
    PERCENTILE = 304,
    LEFT_SHIFT = 305,
    RIGHT_SHIFT = 306,
    LESS_THAN = 307,
    GREATER_THAN = 308,
    LESS_THAN_EQUALTO = 309,
    GREATER_THAN_EQUALTO = 310,
    DOUBLE_EQUAL = 311,
    NOT_EQUAL = 312,
    XOR = 313,
    OR = 314,
    BINARY_AND = 315,
    BINARY_OR = 316,
    QUESTION_MARK = 317,
    COLON = 318,
    SEMI_COLON = 319,
    EQUAL = 320,
    STAR_EQUAL = 321,
    SLASH_EQUAL = 322,
    PERCENTILE_EQUAL = 323,
    PLUS_EQUAL = 324,
    MINUS_EQUAL = 325,
    LEFT_SHIFT_EQUAL = 326,
    RIGHT_SHIFT_EQUAL = 327,
    AND_EQUAL = 328,
    XOR_EQUAL = 329,
    OR_EQUAL = 330,
    COMMA = 331,
    HASH = 332,
    TRANSPOSE = 333,
    NEWLINE = 334,
    UNKNOWN = 335,
    IF_CONFLICT = 336
  };
#endif
/* Tokens.  */
#define BREAK 258
#define CASE 259
#define CHAR 260
#define CONTINUE 261
#define DEFAULT 262
#define DO 263
#define DOUBLE 264
#define SHORT 265
#define LONG 266
#define ELSE 267
#define FLOAT 268
#define FOR 269
#define GOTO 270
#define IF 271
#define INT 272
#define RETURN 273
#define SIGNED 274
#define SWITCH 275
#define UNSIGNED 276
#define VOID 277
#define WHILE 278
#define BOOL 279
#define MATRIX 280
#define COMMENT 281
#define IDENTIFIER 282
#define INT_NO 283
#define FLOAT_NO 284
#define CHARACTER 285
#define STRING 286
#define LEFT_SQUARE_BRACE 287
#define RIGHT_SQUARE_BRACE 288
#define LEFT_ROUND_BRACE 289
#define RIGHT_ROUND_BRACE 290
#define LEFT_CURLY_BRACE 291
#define RIGHT_CURLY_BRACE 292
#define PERIOD 293
#define ARROW 294
#define INCREMENT 295
#define DECREMENT 296
#define AMPERSAND 297
#define MULTIPLY 298
#define ADD 299
#define SUBTRACT 300
#define TILDA 301
#define NEGATION 302
#define DIVIDE 303
#define PERCENTILE 304
#define LEFT_SHIFT 305
#define RIGHT_SHIFT 306
#define LESS_THAN 307
#define GREATER_THAN 308
#define LESS_THAN_EQUALTO 309
#define GREATER_THAN_EQUALTO 310
#define DOUBLE_EQUAL 311
#define NOT_EQUAL 312
#define XOR 313
#define OR 314
#define BINARY_AND 315
#define BINARY_OR 316
#define QUESTION_MARK 317
#define COLON 318
#define SEMI_COLON 319
#define EQUAL 320
#define STAR_EQUAL 321
#define SLASH_EQUAL 322
#define PERCENTILE_EQUAL 323
#define PLUS_EQUAL 324
#define MINUS_EQUAL 325
#define LEFT_SHIFT_EQUAL 326
#define RIGHT_SHIFT_EQUAL 327
#define AND_EQUAL 328
#define XOR_EQUAL 329
#define OR_EQUAL 330
#define COMMA 331
#define HASH 332
#define TRANSPOSE 333
#define NEWLINE 334
#define UNKNOWN 335
#define IF_CONFLICT 336

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 11 "ass4_15CS10061_2.y" /* yacc.c:355  */

	int intVal;
	char charVal;	
	double doubleVal;
	char* strVal;
	struct identifierAttr idAttr;
  	struct expressionAttr expAttr;
  	struct varDeclaration varAttr;
  	union initializerAttr initAttr;
  	quadEnum unaryOpAttr;
  	int instr;
  	struct listNode *NAttr;
  	struct listParam *paramAttr;

#line 293 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 308 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   568

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   158,   158,   160,   165,   174,   183,   192,   201,   202,
     204,   233,   255,   266,   286,   287,   288,   300,   312,   325,
     329,   333,   344,   363,   378,   390,   391,   392,   393,   395,
     397,   405,   602,   784,   968,   969,  1165,  1358,  1359,  1369,
    1380,  1381,  1390,  1399,  1408,  1418,  1419,  1428,  1439,  1440,
    1451,  1452,  1463,  1464,  1475,  1476,  1483,  1484,  1491,  1492,
    1513,  1514,  1643,  1644,  1645,  1646,  1647,  1648,  1649,  1650,
    1651,  1652,  1653,  1655,  1656,  1658,  1663,  1664,  1679,  1688,
    1690,  1694,  1696,  1725,  1767,  1773,  1779,  1780,  1786,  1787,
    1788,  1794,  1801,  1802,  1803,  1805,  1815,  1822,  1850,  1851,
    1860,  1889,  1896,  1902,  1903,  1912,  1913,  1918,  1920,  1927,
    1934,  1941,  1943,  1944,  1946,  1947,  1949,  1950,  1952,  1953,
    1956,  1957,  1962,  1964,  1965,  1967,  1968,  1970,  1971,  1972,
    1973,  1974,  1975,  1977,  1978,  1979,  1981,  1983,  1984,  1986,
    1987,  1992,  1993,  1995,  1997,  2004,  2018,  2020,  2030,  2037,
    2048,  2050,  2051,  2052,  2053,  2056,  2061,  2062,  2064,  2065,
    2067,  2068,  2070,  2071,  2075,  2076,  2078
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CASE", "CHAR", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "SHORT", "LONG", "ELSE", "FLOAT", "FOR",
  "GOTO", "IF", "INT", "RETURN", "SIGNED", "SWITCH", "UNSIGNED", "VOID",
  "WHILE", "BOOL", "MATRIX", "COMMENT", "IDENTIFIER", "INT_NO", "FLOAT_NO",
  "CHARACTER", "STRING", "LEFT_SQUARE_BRACE", "RIGHT_SQUARE_BRACE",
  "LEFT_ROUND_BRACE", "RIGHT_ROUND_BRACE", "LEFT_CURLY_BRACE",
  "RIGHT_CURLY_BRACE", "PERIOD", "ARROW", "INCREMENT", "DECREMENT",
  "AMPERSAND", "MULTIPLY", "ADD", "SUBTRACT", "TILDA", "NEGATION",
  "DIVIDE", "PERCENTILE", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN",
  "GREATER_THAN", "LESS_THAN_EQUALTO", "GREATER_THAN_EQUALTO",
  "DOUBLE_EQUAL", "NOT_EQUAL", "XOR", "OR", "BINARY_AND", "BINARY_OR",
  "QUESTION_MARK", "COLON", "SEMI_COLON", "EQUAL", "STAR_EQUAL",
  "SLASH_EQUAL", "PERCENTILE_EQUAL", "PLUS_EQUAL", "MINUS_EQUAL",
  "LEFT_SHIFT_EQUAL", "RIGHT_SHIFT_EQUAL", "AND_EQUAL", "XOR_EQUAL",
  "OR_EQUAL", "COMMA", "HASH", "TRANSPOSE", "NEWLINE", "UNKNOWN",
  "IF_CONFLICT", "$accept", "M", "N", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "AND_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_AND_expression",
  "logical_OR_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "type_specifier",
  "declarator", "direct_declarator", "pointer", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_row_list", "initializer_row", "designation",
  "designator_list", "designator", "statement", "labeled_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "expression_opt",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", "O", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336
};
# endif

#define YYPACT_NINF -206

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-206)))

#define YYTABLE_NINF -167

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     436,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,    -2,   436,   418,  -206,  -206,  -206,     3,
     -27,  -206,   -52,  -206,    95,   -19,    76,  -206,  -206,  -206,
       9,  -206,  -206,     3,   454,  -206,    -2,   374,    -7,   473,
     395,   -19,  -206,  -206,   -18,  -206,  -206,  -206,  -206,  -206,
     511,   435,   511,   511,  -206,  -206,  -206,  -206,     6,    96,
     493,   511,  -206,    79,    98,    -1,    86,   101,    21,    35,
      43,     7,   105,  -206,  -206,  -206,   230,  -206,  -206,  -206,
    -206,    74,  -206,  -206,     3,    78,    39,  -206,   -28,  -206,
     -21,   511,    91,  -206,    31,    45,   454,     1,  -206,  -206,
    -206,   511,   492,   102,   119,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,   511,
    -206,  -206,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,  -206,  -206,
      70,    89,   511,    99,   108,  -206,   142,   155,   144,   333,
     158,  -206,   122,    -6,  -206,  -206,  -206,  -206,   159,   162,
    -206,  -206,  -206,  -206,  -206,   163,  -206,  -206,   436,  -206,
     177,  -206,   511,  -206,   173,  -206,  -206,   435,   435,  -206,
    -206,  -206,   -24,  -206,   -17,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,    79,    79,    98,    98,    -1,    -1,    -1,    -1,
      86,    86,   101,    21,    35,   511,   511,  -206,  -206,   145,
    -206,   273,   273,   314,   146,   511,  -206,    25,   511,   175,
     273,  -206,  -206,   230,   511,  -206,  -206,  -206,  -206,    45,
    -206,   454,   179,  -206,   511,    43,     7,   511,   273,  -206,
    -206,   511,  -206,  -206,   136,  -206,   -12,   511,  -206,  -206,
     180,  -206,   511,  -206,   136,  -206,   191,   511,   511,   182,
     273,   136,  -206,   -22,   152,   184,   136,   185,  -206,  -206,
    -206,   186,  -206,  -206,   511,   273,  -206,   273,  -206,   511,
     136,  -206,   511,  -206,   273,  -206,   187,  -206,   207,  -206,
     161,   192,  -206,  -206,  -206,   273,   273,  -206,  -206
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    85,    90,    86,    88,    89,    87,    92,    93,    84,
      94,    91,   161,     0,    78,     0,   158,   160,    97,     0,
     105,    76,     0,    80,    82,    96,     0,    79,     1,   159,
       0,   106,    77,     0,     0,   164,     0,     0,     0,     0,
       0,    95,    98,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,    25,    26,    27,    28,    10,    21,
      29,     0,    30,    34,    37,    40,    45,    48,    50,    52,
      54,    56,    58,    60,   114,    83,   137,   165,   162,   163,
     101,     0,   112,   104,   111,     0,   107,   108,     0,    73,
       0,     0,     0,   119,     0,   116,     0,     0,   123,    22,
      23,     0,     0,     0,     0,    16,    17,    18,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
      29,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     2,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     2,     4,     0,   141,   142,   127,   128,     0,     2,
     139,   129,   130,   131,   132,    99,   110,   102,     0,   103,
       0,     9,     0,    75,     0,   126,   115,     0,     0,   118,
     122,   124,     0,    12,     0,    19,    14,    15,    61,    31,
      32,    33,    35,    36,    38,    39,    41,    42,    44,    43,
      46,    47,    49,    51,    53,     0,     0,     2,   153,     0,
     152,     0,     0,     0,     0,     0,   154,     0,     0,     0,
       0,   143,   136,     0,     0,   109,   113,    74,   125,   117,
     120,     0,     0,    13,     0,    55,    57,     0,     0,   135,
       2,     0,     2,   151,     3,   155,     0,     0,   133,   140,
       0,   121,     0,    20,     3,   134,     0,   156,     0,     0,
       0,     3,   100,     0,     0,     0,   157,     0,     3,     2,
     146,     0,    11,     2,     0,     0,     2,     0,     2,     0,
       3,   150,   156,     3,     0,    59,     0,     3,   144,   147,
       0,     0,     2,   148,     2,     0,     0,   145,   149
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -206,  -117,   -82,  -206,  -206,  -206,   -51,  -206,   -26,    55,
      56,    19,    57,    94,   106,    93,    26,    50,  -206,   -85,
      -8,  -206,   -50,   120,   -20,     5,  -206,   232,  -206,     8,
     237,   247,  -206,  -206,   100,  -206,   -31,  -206,    92,   104,
    -206,   181,  -151,  -206,   151,  -206,  -206,    60,  -205,  -206,
    -206,  -206,     2,  -206,   270,  -206,  -206,  -206
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   205,   140,    58,    59,   184,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      89,   119,   153,   174,    12,    36,    22,    23,    14,    44,
      25,    26,    85,    86,    87,    88,    93,    94,    95,    96,
      97,    98,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   267,    15,    16,    17,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,    99,   100,    75,    35,    13,   173,   169,   242,   232,
     120,   272,    32,    39,   171,    40,    20,    77,   233,    27,
      13,    24,   206,   260,    33,    18,    74,    30,   212,    76,
      18,    81,    19,    91,   219,   121,   257,    19,   101,    92,
     120,    20,   223,    74,    42,    84,    20,    34,   170,   127,
     128,   182,   172,   268,   172,   172,   154,   173,   221,   234,
     239,   240,    21,   135,   172,   179,   180,   138,   176,   248,
     172,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   255,    74,   245,
     237,   120,   166,   136,   185,   177,   189,   190,   191,   217,
       1,   172,   137,    18,     2,     3,     4,   165,     5,   270,
      19,   188,     6,   167,     7,   168,     8,     9,   175,    10,
      11,   178,   122,   256,   281,   258,   283,   123,   124,   186,
     102,  -166,   207,   289,   103,   104,   105,   106,   129,   130,
     131,   132,   125,   126,   297,   298,   187,   230,   196,   197,
     198,   199,   277,   208,   120,   120,   279,   133,   134,   282,
      34,   284,   259,   210,   227,   244,   139,    -3,   246,    74,
      74,   211,   264,    84,   107,   295,   213,   296,   215,   271,
     192,   193,   214,   194,   195,   220,   276,   254,    78,    79,
     200,   201,   218,   241,   285,   224,   222,   261,   286,  -138,
     251,   288,   263,   154,   226,   291,   228,   266,   238,   247,
     243,   252,   172,   262,   265,   273,   250,   269,   274,   292,
     275,   278,   290,    74,   280,   293,   253,   294,   120,   202,
     204,   235,   266,   141,   142,     1,   143,   144,   145,     2,
       3,     4,   203,     5,   146,   147,   148,     6,   149,     7,
     150,     8,     9,   151,    10,    11,   236,   152,    46,    47,
      48,    49,   209,    41,    50,    43,    76,    31,   225,   229,
      52,    53,    54,    55,    56,    57,   141,   142,   181,   143,
     144,   145,   231,   249,   287,    29,     0,   146,   147,   148,
       0,   149,     0,   150,     0,     0,   151,     0,     0,     0,
     152,    46,    47,    48,    49,     0,     0,    50,     0,    76,
       0,     0,     0,    52,    53,    54,    55,    56,    57,     1,
       0,     0,     0,     2,     3,     4,     0,     5,     0,     0,
       0,     6,     0,     7,     0,     8,     9,     0,    10,    11,
       0,    45,    46,    47,    48,    49,     0,     0,    50,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,    57,
      45,    46,    47,    48,    49,     0,     0,    50,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,    57,     1,
       0,     0,     0,     2,     3,     4,     0,     5,     0,     0,
       0,     6,     0,     7,     0,     8,     9,   216,    10,    11,
       1,     0,     0,     0,     2,     3,     4,     0,     5,     0,
      76,     0,     6,     0,     7,     0,     8,     9,    28,    10,
      11,     0,    82,     1,     0,     0,     0,     2,     3,     4,
      83,     5,     0,     0,     0,     6,     0,     7,     0,     8,
       9,     1,    10,    11,     0,     2,     3,     4,     0,     5,
       0,     0,     0,     6,     0,     7,     0,     8,     9,     0,
      10,    11,    45,    46,    47,    48,    49,    91,     0,    50,
       0,    51,     0,    92,     0,    52,    53,    54,    55,    56,
      57,    45,    46,    47,    48,    49,     0,     0,    50,     0,
      51,     0,     0,     0,    52,    53,    54,    55,    56,    57,
      45,    46,    47,    48,    49,     0,    80,    50,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,    57,    45,
      46,    47,    48,    49,     0,     0,    50,   183,     0,     0,
       0,     0,    52,    53,    54,    55,    56,    57,    45,    46,
      47,    48,    49,     0,     0,    50,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,    57,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118
};

static const yytype_int16 yycheck[] =
{
      50,    52,    53,    34,    24,     0,    91,    35,   213,    33,
      61,    33,    64,    32,    35,    34,    43,    37,    35,    14,
      15,    13,   139,    35,    76,    27,    34,    19,   145,    36,
      27,    39,    34,    32,   151,    61,   241,    34,    32,    38,
      91,    43,   159,    51,    35,    40,    43,    65,    76,    50,
      51,   101,    76,   258,    76,    76,    76,   142,    64,    76,
     211,   212,    64,    42,    76,    96,    65,    60,    37,   220,
      76,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   238,    96,    64,
     207,   142,    84,    58,   102,    64,   122,   123,   124,   149,
       5,    76,    59,    27,     9,    10,    11,    33,    13,   260,
      34,   119,    17,    35,    19,    76,    21,    22,    27,    24,
      25,    76,    43,   240,   275,   242,   277,    48,    49,    27,
      34,    36,    62,   284,    38,    39,    40,    41,    52,    53,
      54,    55,    44,    45,   295,   296,    27,   178,   129,   130,
     131,   132,   269,    64,   205,   206,   273,    56,    57,   276,
      65,   278,   244,    64,   172,   215,    61,    62,   218,   177,
     178,    63,   254,   168,    78,   292,    34,   294,    34,   261,
     125,   126,    27,   127,   128,    63,   268,   237,    37,    38,
     133,   134,    34,   213,   279,    32,    37,   247,   280,    37,
     231,   283,   252,   223,    27,   287,    33,   257,    63,    34,
      64,    32,    76,    33,    23,    63,   224,    35,    34,    12,
      35,    35,    35,   231,   274,    64,   234,    35,   279,   135,
     137,   205,   282,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   136,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   206,    27,    28,    29,
      30,    31,   142,    26,    34,    33,    36,    20,   168,   177,
      40,    41,    42,    43,    44,    45,     3,     4,    97,     6,
       7,     8,   178,   223,   282,    15,    -1,    14,    15,    16,
      -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    36,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,     5,
      -1,    -1,    -1,     9,    10,    11,    -1,    13,    -1,    -1,
      -1,    17,    -1,    19,    -1,    21,    22,    -1,    24,    25,
      -1,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,     5,
      -1,    -1,    -1,     9,    10,    11,    -1,    13,    -1,    -1,
      -1,    17,    -1,    19,    -1,    21,    22,    64,    24,    25,
       5,    -1,    -1,    -1,     9,    10,    11,    -1,    13,    -1,
      36,    -1,    17,    -1,    19,    -1,    21,    22,     0,    24,
      25,    -1,    27,     5,    -1,    -1,    -1,     9,    10,    11,
      35,    13,    -1,    -1,    -1,    17,    -1,    19,    -1,    21,
      22,     5,    24,    25,    -1,     9,    10,    11,    -1,    13,
      -1,    -1,    -1,    17,    -1,    19,    -1,    21,    22,    -1,
      24,    25,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    -1,    38,    -1,    40,    41,    42,    43,    44,
      45,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      36,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      27,    28,    29,    30,    31,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    27,
      28,    29,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    27,    28,
      29,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     9,    10,    11,    13,    17,    19,    21,    22,
      24,    25,   106,   107,   110,   135,   136,   137,    27,    34,
      43,    64,   108,   109,   111,   112,   113,   107,     0,   136,
     111,   113,    64,    76,    65,   106,   107,   138,   139,    32,
      34,   112,    35,   109,   111,    27,    28,    29,    30,    31,
      34,    36,    40,    41,    42,    43,    44,    45,    85,    86,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   118,    36,   106,   126,   126,
      33,   102,    27,    35,   107,   114,   115,   116,   117,   102,
     104,    32,    38,   118,   119,   120,   121,   122,   123,    88,
      88,    32,    34,    38,    39,    40,    41,    78,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   103,
      88,    90,    43,    48,    49,    44,    45,    50,    51,    52,
      53,    54,    55,    56,    57,    42,    58,    59,    60,    61,
      84,     3,     4,     6,     7,     8,    14,    15,    16,    18,
      20,    23,    27,   104,   106,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,    33,   111,    35,    76,    35,
      76,    35,    76,   101,   105,    27,    37,    64,    76,   118,
      65,   123,   104,    35,    87,   102,    27,    27,   102,    90,
      90,    90,    91,    91,    92,    92,    93,    93,    93,    93,
      94,    94,    95,    96,    97,    83,    83,    62,    64,   105,
      64,    63,    83,    34,    27,    34,    64,   104,    34,    83,
      63,    64,    37,    83,    32,   116,    27,   102,    33,   120,
     118,   121,    33,    35,    76,    98,    99,    83,    63,   124,
     124,   106,   130,    64,   104,    64,   104,    34,   124,   129,
     102,   118,    32,   102,   104,   124,    83,   130,    83,    84,
      35,   104,    33,   104,    84,    23,   104,   134,   130,    35,
     124,    84,    33,    63,    34,    35,    84,    83,    35,    83,
     104,   124,    83,   124,    83,   101,    84,   134,    84,   124,
      35,    84,    12,    64,    35,    83,    83,   124,   124
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    84,    85,    85,    85,    85,    85,    85,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    88,    88,    89,    89,    89,    89,    90,
      91,    91,    91,    91,    92,    92,    92,    93,    93,    93,
      94,    94,    94,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   104,   104,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     120,   120,   121,   122,   122,   123,   123,   124,   124,   124,
     124,   124,   124,   125,   125,   125,   126,   127,   127,   128,
     128,   129,   129,   130,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   133,   133,   133,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     3,
       1,     7,     3,     4,     3,     3,     2,     2,     2,     1,
       3,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     4,     1,     4,     1,     9,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     3,     4,
       7,     3,     4,     4,     3,     1,     2,     1,     1,     3,
       2,     1,     1,     3,     1,     3,     1,     3,     2,     1,
       3,     4,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     3,     0,     1,     1,
       3,     1,     1,     2,     8,    11,     5,     8,    10,    12,
       7,     3,     2,     2,     2,     3,     0,     1,     1,     2,
       1,     1,     4,     4,     1,     2,     0
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
#line 158 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    { (yyval.instr) = nextInstr;}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 160 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    { (yyval.NAttr) = makelist(nextInstr);
	quad_array->emit(_GOTO,0,0,0, 0,0,0);
}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 165 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	(yyvsp[0].idAttr).loc = currentSymTable->lookup((yyvsp[0].idAttr).var);
	if(!((yyvsp[0].idAttr).loc))
		(yyvsp[0].idAttr).loc = globalSymTable->lookup((yyvsp[0].idAttr).var);
	(yyval.expAttr).loc = (yyvsp[0].idAttr).loc;
	(yyval.expAttr).type = ((yyvsp[0].idAttr).loc)->Type;
	(yyval.expAttr).array = (yyval.expAttr).loc;
	(yyval.expAttr).loc1 = 0;
}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 174 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	(yyval.expAttr).val.intData = (yyvsp[0].intVal);
	(yyval.expAttr).type = newNode(_INT,-1);
	(yyval.expAttr).loc = currentSymTable->gentemp(_INT);
	char *arg1 = new char[10];
	sprintf(arg1,"%d",(yyvsp[0].intVal));
	char *res = strdup(((yyval.expAttr).loc)->name);
	quad_array->emit(res, arg1, 0, (yyval.expAttr).loc);	
}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 183 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).val.doubleData = (yyvsp[0].doubleVal);
		(yyval.expAttr).type = newNode(_DOUBLE,-1);
		(yyval.expAttr).loc = currentSymTable->gentemp(_DOUBLE);
	  	char *arg1 = new char[10];
	  	sprintf(arg1,"%lf",(yyvsp[0].doubleVal));
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	quad_array->emit(res, arg1, 0, (yyval.expAttr).loc);	
}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 192 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).val.charData = (yyvsp[0].charVal);
	  	(yyval.expAttr).type = newNode(_CHAR,-1);
	  	(yyval.expAttr).loc = currentSymTable->gentemp(_CHAR);
	  	char *arg1 = new char[10];
	  	sprintf(arg1,"%c",(yyvsp[0].charVal));
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	quad_array->emit(res, arg1, 0, (yyval.expAttr).loc);	
}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 201 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("It is a string literal\n");}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 202 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[-1].expAttr);}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 204 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);	}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 233 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).matrix = (yyvsp[-6].expAttr).matrix;
		cout << "Hello" << endl;
	  	(yyval.expAttr).type = ((yyvsp[-6].expAttr).type);
	  	if((yyvsp[-6].expAttr).type->middle != _MATRIX){
	  		cout << "Not a matrix type " <<endl;
			exit(-1);
		}
	  	else{
			(yyval.expAttr)=(yyvsp[-6].expAttr);
			symbolTableRow *temp = currentSymTable->gentemp(_INT);
			char *arg2 = strdup("");
			sprintf(arg2, "%d", (yyvsp[-6].expAttr).type->cols);
			quad_array->emit(INTO, temp->name, (yyvsp[-4].expAttr).loc->name, arg2, (yyvsp[-4].expAttr).loc,  (yyvsp[-6].expAttr).loc, temp);
			quad_array->emit(PLUS, temp->name, temp->name, (yyvsp[-1].expAttr).loc->name, temp,  (yyvsp[-1].expAttr).loc, temp);
			(yyval.expAttr).loc = temp;
			(yyval.expAttr).loc2 = (yyvsp[-6].expAttr).loc;
			(yyval.expAttr).type = newNode(_DOUBLE,-1);
			(yyval.expAttr).isMatrix = true;																
		}
		flag_matrix = 1;
}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 255 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		int count = 0;
	  	symbolTableRow *t = globalSymTable->lookup(((yyvsp[-2].expAttr).loc)->name);
	  	(yyval.expAttr).loc = currentSymTable->gentemp(((((t->nestedTable)->table)[count]).Type)->middle);
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"%d",count);
	  	quad_array->emit(call, res, arg1, arg2,(yyvsp[-2].expAttr).loc,0,(yyval.expAttr).loc);
	  	(yyval.expAttr).type = ((yyval.expAttr).loc)->Type;
}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 266 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		listParam *temp = (yyvsp[-1].paramAttr);
	  	int count = 0;
	  	//printf("Yo\n");
	  	while(temp){
	  		char *arg1 = strdup((temp->parameter)->name);
	  		quad_array->emit(PARAM, 0, arg1, temp->parameter,0);
	  		count++;
	  		temp = temp->next;
	  	}
	  	symbolTableRow *t = globalSymTable->lookup(((yyvsp[-3].expAttr).loc)->name);
	  	(yyval.expAttr).loc = currentSymTable->gentemp(((((t->nestedTable)->table)[count]).Type)->middle);
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	char *arg1 = strdup(((yyvsp[-3].expAttr).loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"%d",count);
	  	quad_array->emit(call, res, arg1, arg2,(yyvsp[-3].expAttr).loc,0,(yyval.expAttr).loc );
	  	(yyval.expAttr).type = ((yyval.expAttr).loc)->Type;
	  	//printf("Yo\n");
}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 286 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf ("postfix-expression.identifier\n");}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 287 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf ("postfix-expression->identifier\n");}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 288 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-1].expAttr).type)->middle);
	  	char *arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	quad_array->emit(res, arg1, (yyvsp[-1].expAttr).loc, (yyval.expAttr).loc);
	  	arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"1");
	  	res = strdup(((yyvsp[-1].expAttr).loc)->name);
	  	quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[-1].expAttr).loc,0,(yyvsp[-1].expAttr).loc );
	  	(yyval.expAttr).type = (yyvsp[-1].expAttr).type;
}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 300 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-1].expAttr).type)->middle);
	  	char *arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	quad_array->emit(res, arg1, (yyvsp[-1].expAttr).loc, (yyval.expAttr).loc);
	  	arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"1");
	  	res = strdup(((yyvsp[-1].expAttr).loc)->name);
	  	quad_array->emit(MINUS, res, arg1, arg2,(yyvsp[-1].expAttr).loc,0,(yyvsp[-1].expAttr).loc );
	  	(yyval.expAttr).type = (yyvsp[-1].expAttr).type;
}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 312 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-1].expAttr).type)->middle);
	char *arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	char *res = strdup(((yyval.expAttr).loc)->name);
	quad_array->emit(TRANS, res, arg1, (yyvsp[-1].expAttr).loc, (yyval.expAttr).loc);
	(yyval.expAttr).type = (yyvsp[-1].expAttr).type;
	((yyval.expAttr).type)->rows = (yyvsp[-1].expAttr).type->cols;
	((yyval.expAttr).type)->cols = (yyvsp[-1].expAttr).type->rows;
}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 325 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		//printf("%s\n",($1.loc)->name);
	  	(yyval.paramAttr) = makeParamList((yyvsp[0].expAttr).loc);
}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 329 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	(yyval.paramAttr) = mergeParamList((yyvsp[-2].paramAttr),makeParamList((yyvsp[0].expAttr).loc));
}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 333 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr) = (yyvsp[0].expAttr);
	  	if((yyvsp[0].expAttr).loc2){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[0].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[0].expAttr).matrix)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc2)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(EQ_BRACKET, res, arg1, arg2,(yyvsp[0].expAttr).loc,(yyvsp[0].expAttr).loc2,(yyval.expAttr).loc);
	  		//$$.loc1 = 0;
	  	}
}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 344 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].expAttr).isMatrix){
			(yyval.expAttr).loc = currentSymTable->gentemp(_DOUBLE);
			(yyval.expAttr).type = newNode(_DOUBLE,-1);
		}
		else{
			(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[0].expAttr).type)->middle);
			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
		}
	  	char *arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"1");
	  	char *res = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[0].expAttr).loc,0,(yyvsp[0].expAttr).loc);
	  	arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	res = strdup(((yyval.expAttr).loc)->name);
	  	quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
		(yyval.expAttr).isMatrix = false;
}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 363 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].expAttr).isMatrix)
			(yyval.expAttr).loc = currentSymTable->gentemp(_DOUBLE);
		else
			(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[0].expAttr).type)->middle);
	  	char *arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"1");
	  	char *res = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(MINUS, res, arg1, arg2,(yyvsp[0].expAttr).loc,0,(yyvsp[0].expAttr).loc );
	  	arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	res = strdup(((yyval.expAttr).loc)->name);
	  	quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  	(yyval.expAttr).type = (yyvsp[0].expAttr).type;
}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 378 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].expAttr).isMatrix)
			(yyval.expAttr).loc = currentSymTable->gentemp(_DOUBLE);
		else
			(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[0].expAttr).type)->middle);
	  	char *arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	quad_array->emit((yyvsp[-1].unaryOpAttr), res, arg1, 0, (yyvsp[0].expAttr).loc,0,(yyval.expAttr).loc);
	  	(yyval.expAttr).type = (yyvsp[0].expAttr).type;
		(yyval.expAttr).isMatrix = false;
}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 390 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.unaryOpAttr) = U_ADDR;}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 391 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.unaryOpAttr) = U_STAR;}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 392 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.unaryOpAttr) = U_PLUS;}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 393 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.unaryOpAttr) = U_MINUS;}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 395 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 397 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr) = (yyvsp[0].expAttr);
	if((yyvsp[0].expAttr).isMatrix==true){
		(yyval.expAttr).loc = currentSymTable->gentemp(_DOUBLE);
		quad_array->emit(EQ_BRACKET, (yyval.expAttr).loc->name, (yyvsp[0].expAttr).matrix->name, (yyvsp[0].expAttr).loc->name, (yyvsp[0].expAttr).loc, (yyvsp[0].expAttr).loc, (yyval.expAttr).loc);
		(yyval.expAttr).type = newNode(_DOUBLE,-1);
		(yyval.expAttr).isMatrix = false;
	}
}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 405 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==1){
			cout << "Hi"<<endl;
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(INTO, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==3)
		{
			(yyval.expAttr).loc = currentSymTable->gentemp(_MATRIX);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(INTO, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
			((yyval.expAttr).type)->rows = (yyvsp[-2].expAttr).type->rows;
			((yyval.expAttr).type)->cols = (yyvsp[0].expAttr).type->cols;	
		}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==4){
			((yyvsp[-2].expAttr).type)->middle = _DOUBLE;
			(yyvsp[-2].expAttr).isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  			if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
		  			temp1 = currentSymTable->gentemp(_DOUBLE);
		  			char *arg1 = new char[100];
		  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
		  			char *res = strdup(temp1->name);
		  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1 );
		  			temp2 = currentSymTable->gentemp(_DOUBLE);
		  			arg1 = strdup(temp1->name);
		  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
		  			res = strdup(temp2->name);
		  			quad_array->emit(INTO, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
		  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  			}
	  			else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
		  			temp1 = currentSymTable->gentemp(_INT);
		  			char *arg1 = new char[100];
		  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
		  			char *res = strdup(temp1->name);
		  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
		  			temp2 = currentSymTable->gentemp(_INT);
		  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
		  			char *arg2 = strdup(temp1->name);
		  			res = strdup(temp2->name);
		  			quad_array->emit(INTO, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
		  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  			}
			  	else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
						cout << "Doub to int"<<endl;
			  			temp1 = currentSymTable->gentemp(_DOUBLE);
			  			char *arg1 = new char[100];
			  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
			  			char *res = strdup(temp1->name);
			  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
			  			temp2 = currentSymTable->gentemp(_DOUBLE);
			  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
			  			char *arg2 = strdup(temp1->name);
			  			res = strdup(temp2->name);
			  			quad_array->emit(INTO, res, arg1, arg2 ,(yyvsp[-2].expAttr).loc,temp1,temp2);
			  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
			  	}
			  	else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
			  			temp1 = currentSymTable->gentemp(_INT);
			  			char *arg1 = new char[100];
			  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
			  			char *res = strdup(temp1->name);
			  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc,temp1);
			  			temp2 = currentSymTable->gentemp(_INT);
			  			arg1 = strdup(temp1->name);
			  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
			  			res = strdup(temp2->name);
			  			quad_array->emit(INTO, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2 );
			  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
			  	}
	  	(yyval.expAttr).loc = temp2;
		}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==5){
			((yyvsp[0].expAttr).type)->middle = _DOUBLE;
			(yyvsp[0].expAttr).isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  			if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
		  			temp1 = currentSymTable->gentemp(_DOUBLE);
		  			char *arg1 = new char[100];
		  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
		  			char *res = strdup(temp1->name);
		  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1 );
		  			temp2 = currentSymTable->gentemp(_DOUBLE);
		  			arg1 = strdup(temp1->name);
		  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
		  			res = strdup(temp2->name);
		  			quad_array->emit(INTO, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
		  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  			}
	  			else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
		  			temp1 = currentSymTable->gentemp(_INT);
		  			char *arg1 = new char[100];
		  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
		  			char *res = strdup(temp1->name);
		  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
		  			temp2 = currentSymTable->gentemp(_INT);
		  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
		  			char *arg2 = strdup(temp1->name);
		  			res = strdup(temp2->name);
		  			quad_array->emit(INTO, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
		  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  			}
			  	else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
						cout << "Doub to int"<<endl;
			  			temp1 = currentSymTable->gentemp(_DOUBLE);
			  			char *arg1 = new char[100];
			  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
			  			char *res = strdup(temp1->name);
			  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
			  			temp2 = currentSymTable->gentemp(_DOUBLE);
			  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
			  			char *arg2 = strdup(temp1->name);
			  			res = strdup(temp2->name);
			  			quad_array->emit(INTO, res, arg1, arg2 ,(yyvsp[-2].expAttr).loc,temp1,temp2);
			  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
			  	}
			  	else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
			  			temp1 = currentSymTable->gentemp(_INT);
			  			char *arg1 = new char[100];
			  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
			  			char *res = strdup(temp1->name);
			  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc,temp1);
			  			temp2 = currentSymTable->gentemp(_INT);
			  			arg1 = strdup(temp1->name);
			  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
			  			res = strdup(temp2->name);
			  			quad_array->emit(INTO, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2 );
			  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
			  	}
	  			(yyval.expAttr).loc = temp2;
		}
		else{
	  			symbolTableRow *temp1, *temp2;
	  			if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
		  			temp1 = currentSymTable->gentemp(_DOUBLE);
		  			char *arg1 = new char[100];
		  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
		  			char *res = strdup(temp1->name);
		  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1 );
		  			temp2 = currentSymTable->gentemp(_DOUBLE);
		  			arg1 = strdup(temp1->name);
		  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
		  			res = strdup(temp2->name);
		  			quad_array->emit(INTO, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
		  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  			}
	  			else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
		  			temp1 = currentSymTable->gentemp(_INT);
		  			char *arg1 = new char[100];
		  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
		  			char *res = strdup(temp1->name);
		  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
		  			temp2 = currentSymTable->gentemp(_INT);
		  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
		  			char *arg2 = strdup(temp1->name);
		  			res = strdup(temp2->name);
		  			quad_array->emit(INTO, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
		  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  			}
			  	else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
						cout << "Doub to int"<<endl;
			  			temp1 = currentSymTable->gentemp(_DOUBLE);
			  			char *arg1 = new char[100];
			  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
			  			char *res = strdup(temp1->name);
			  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
			  			temp2 = currentSymTable->gentemp(_DOUBLE);
			  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
			  			char *arg2 = strdup(temp1->name);
			  			res = strdup(temp2->name);
			  			quad_array->emit(INTO, res, arg1, arg2 ,(yyvsp[-2].expAttr).loc,temp1,temp2);
			  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
			  	}
			  	else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
			  			temp1 = currentSymTable->gentemp(_INT);
			  			char *arg1 = new char[100];
			  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
			  			char *res = strdup(temp1->name);
			  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc,temp1);
			  			temp2 = currentSymTable->gentemp(_INT);
			  			arg1 = strdup(temp1->name);
			  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
			  			res = strdup(temp2->name);
			  			quad_array->emit(INTO, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2 );
			  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
			  	}
	  	(yyval.expAttr).loc = temp2;
	}
}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 602 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==1){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(DIV, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==4){
			((yyvsp[-2].expAttr).type)->middle = _DOUBLE;
			(yyvsp[-2].expAttr).isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, (yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
		}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==5){
			((yyvsp[0].expAttr).type)->middle = _DOUBLE;
			(yyvsp[0].expAttr).isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, (yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
		}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, (yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
	  	}
}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 784 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==1){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(PERCENT, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==4){
			((yyvsp[-2].expAttr).type)->middle = _DOUBLE;
			(yyvsp[-2].expAttr).isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, (yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
		}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==5){
			((yyvsp[0].expAttr).type)->middle = _DOUBLE;
			(yyvsp[0].expAttr).isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, (yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
		}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PERCENT, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PERCENT, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PERCENT, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);

	  			quad_array->emit(PERCENT, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
	  	}
}
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 968 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 969 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		cout << "Adding...."<<endl;
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==1){
			cout << (yyvsp[-2].expAttr).type <<"  " << (yyvsp[0].expAttr).type << endl;
	  		//printf("Help me\n");
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc );
	  		//printf("Help me\n");
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==2){
			(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc );
	  		//printf("Help me\n");
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
		}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==4){
			((yyvsp[-2].expAttr).type)->middle = _DOUBLE;
			(yyvsp[-2].expAttr).isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, (yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
		}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==5){
			((yyvsp[0].expAttr).type)->middle = _DOUBLE;
			(yyvsp[0].expAttr).isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, (yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
		}
		else{
	  			symbolTableRow *temp1, *temp2;
	  			if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PLUS, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  	}
	  	else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
	  	else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
				cout << "Double to Int"<<endl;
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
	  	else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PLUS, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  	}
	  	(yyval.expAttr).loc = temp2;
	}
}
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 1165 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==1){
	  		//printf("Help me\n");
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(MINUS, res, arg1,arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		//printf("Help me\n");
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==2){
			(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(MINUS, res, arg1,arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
		}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==4){
			((yyvsp[-2].expAttr).type)->middle = _DOUBLE;
			(yyvsp[-2].expAttr).isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, (yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
		}
		else if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==5){
			((yyvsp[0].expAttr).type)->middle = _DOUBLE;
			(yyvsp[0].expAttr).isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, (yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
		}
		else{
	  			symbolTableRow *temp1, *temp2;
	  			if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(MINUS, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  	}
	  	else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(MINUS, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
	  	else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(MINUS, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
	  	else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(MINUS, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  	}
	  		(yyval.expAttr).loc = temp2;
	}
}
#line 3005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 1358 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 1359 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)==1){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(SL, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
}
#line 3026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 1369 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(SR, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
}
#line 3041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 1380 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1381 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).TL = makelist(nextInstr);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(goto_LT, 0, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	(yyval.expAttr).FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	(yyval.expAttr).type = newNode(_BOOL,-1);	
}
#line 3061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1390 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).TL = makelist(nextInstr);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(goto_GT, 0, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	(yyval.expAttr).FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 1399 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).TL = makelist(nextInstr);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(goto_GTE, 0, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	(yyval.expAttr).FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 3089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1408 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).TL = makelist(nextInstr);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(goto_LTE, 0, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	(yyval.expAttr).FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 1418 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1419 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).TL = makelist(nextInstr);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(goto_EQ, 0, arg1, arg2, (yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	(yyval.expAttr).FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 3123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 1428 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).TL = makelist(nextInstr);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(goto_NEQ, 0, arg1, arg2, (yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	(yyval.expAttr).FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 3137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 1439 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 1440 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(BW_AND, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
}
#line 3158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 1451 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 1452 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(BW_XOR, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
}
#line 3179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 1463 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 1464 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(BW_INOR, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
}
#line 3200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1475 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 1476 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		backpatch((yyvsp[-3].expAttr).TL,(yyvsp[-1].instr));
	  	(yyval.expAttr).FL = merge((yyvsp[-3].expAttr).FL, (yyvsp[0].expAttr).FL);
	  	(yyval.expAttr).TL = (yyvsp[0].expAttr).TL;
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 3217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 1483 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 1484 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		backpatch((yyvsp[-3].expAttr).FL,(yyvsp[-1].instr));
	  	(yyval.expAttr).TL = merge((yyvsp[-3].expAttr).TL,(yyvsp[0].expAttr).TL);
	  	(yyval.expAttr).FL = (yyvsp[0].expAttr).FL;
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 1491 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1492 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-4].expAttr).type)->middle);
	  	(yyval.expAttr).type = (yyvsp[-4].expAttr).type;
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	char *arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  	listNode *l = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0,0);
	  	backpatch((yyvsp[-3].NAttr),nextInstr);
	  	res = strdup(((yyval.expAttr).loc)->name);
	  	arg1 = strdup(((yyvsp[-4].expAttr).loc)->name);
	  	quad_array->emit(res, arg1,(yyvsp[-4].expAttr).loc,(yyval.expAttr).loc);
	  	l = merge(l,makelist(nextInstr));
	  	quad_array->emit(_GOTO, 0, 0, 0,0);
	  	backpatch((yyvsp[-7].NAttr),nextInstr);
	  	conv2Bool(&(yyvsp[-8].expAttr));
	  	backpatch((yyvsp[-8].expAttr).TL,(yyvsp[-5].instr));
	  	backpatch((yyvsp[-8].expAttr).FL,(yyvsp[-1].instr));
	  	backpatch(l,nextInstr);
}
#line 3265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1513 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1514 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type,(yyvsp[0].expAttr).type)==1){
	  		if((yyvsp[-2].expAttr).loc1){
		  		//printf("%s\n",($1.loc)->name);
		  		char *arg1 = strdup(((yyvsp[-2].expAttr).array)->name);
		  		char *arg2 = strdup(((yyvsp[-2].expAttr).loc1)->name);
		  		char *res = strdup(((yyvsp[0].expAttr).loc)->name);
		  		quad_array->emit(BRACKET_EQ, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[-2].expAttr).loc1,(yyvsp[0].expAttr).loc);
	  		}
	  		else{
		  		char *arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
			  	char *res = strdup(((yyvsp[-2].expAttr).loc)->name);
			  	quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,(yyvsp[-2].expAttr).loc);
	  		}
	  	}
		if(typecheck((yyvsp[-2].expAttr).type,(yyvsp[0].expAttr).type)==4){
			((yyvsp[-2].expAttr).type)->middle = _DOUBLE;
			(yyvsp[-2].expAttr).isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  		}
		}
		else if(typecheck((yyvsp[-2].expAttr).type,(yyvsp[0].expAttr).type)==5){
			((yyvsp[0].expAttr).type)->middle = _DOUBLE;
			(yyvsp[0].expAttr).isMatrix = false;
			symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  		}
		}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  		}
	  		if((yyvsp[-2].expAttr).loc1){
		  		//printf("%s\n",($1.loc)->name);
		  		char *arg1 = strdup(((yyvsp[-2].expAttr).array)->name);
		  		char *arg2 = strdup(((yyvsp[-2].expAttr).loc1)->name);
		  		char *res = strdup((temp1)->name);
		  		quad_array->emit(BRACKET_EQ,res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[-2].expAttr).loc1,(yyvsp[0].expAttr).loc );
	  		}
	  		else{
		  		char *arg1 = strdup((temp1)->name);
			  	char *res = strdup(((yyvsp[-2].expAttr).loc)->name);
			  	quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,(yyvsp[-2].expAttr).loc);
	  		}
	  	}
}
#line 3404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1643 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("assignment-operator -> =\n");}
#line 3410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1644 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("assignment-operator -> *=\n");}
#line 3416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1645 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("assignment-operator -> /=\n");}
#line 3422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1646 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("assignment-operator -> mod \n");}
#line 3428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1647 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("assignment-operator -> +=\n");}
#line 3434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1648 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("assignment-operator -> -=\n");}
#line 3440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1649 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("assignment-operator -> <<=\n");}
#line 3446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1650 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("assignment-operator -> >>=\n");}
#line 3452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1651 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("assignment-operator -> &=\n");}
#line 3458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1652 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("assignment-operator -> ^=\n");}
#line 3464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1653 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("assignment-operator -> |=\n");}
#line 3470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1655 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1656 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("expression -> expression assignment-expression\n");}
#line 3482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1658 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("constant-expression -> conditional_expression\n");}
#line 3488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1663 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {}
#line 3494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1664 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(flag1 == 1 && flag2 == 0){
	  		treeNodeType *temp = newNode(((yyvsp[-2].varAttr).type)->middle,-1);
	  		char *temp1 = strdup("retVal");
	  		symbolTableRow x(temp1,temp,0,(yyvsp[-2].varAttr).width,-1,0);
	  		tempUseSymTable->insert(x);
	  		temp = newNode(_FUNC,-1);
	  		symbolTableRow y((yyvsp[-1].varAttr).var,temp,0,0,-1,tempUseSymTable);
	  		globalSymTable->insert(y);
	  	}
	  	flag1 = 0;
	  	flag2 = 0;
	  	c = 0;
}
#line 3513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1679 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		printf("Declaration-> type_specifier\n");
		if(flag1 == 0 || flag2 == 0){
	  		(yyval.varAttr).type = (yyvsp[0].varAttr).type;
	  		(yyval.varAttr).width = (yyvsp[0].varAttr).width;
	  		t = (yyval.varAttr).type;
	  		w = (yyval.varAttr).width;
	  	}
}
#line 3527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1688 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("declaration-specifiers -> type-specifier declaration_specifiers_optional\n");}
#line 3533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1690 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	if(flag1 == 1 && flag2 == 0)
	  		(yyval.varAttr).var = (yyvsp[0].varAttr).var;
}
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1694 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("init-declarator-list ->init-declarator-list init-declarator\n");}
#line 3548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1696 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(flag1 == 0){
	  		treeNodeType *temp = newNode(t->middle,-1);
	  		temp = mergeNode((yyvsp[0].varAttr).type,temp);
	  		int temp_size;
	  		if(temp->middle == _PTR)
	  			temp_size = SIZE_OF_PTR;
	  		else{
		  		switch(t->middle){
		  			case _INT : temp_size = SIZE_OF_INT;
		  					   break;
		  			case _DOUBLE : temp_size = SIZE_OF_DOUBLE;
		  						  break;
		  			case _CHAR   : temp_size = SIZE_OF_CHAR;
		  						  break;
					case _MATRIX : cout << (yyvsp[0].varAttr).type->rows<<endl; 
							temp_size = 1;
						break; 	
	  			}
	  		}
	  		temp_size = temp_size * (yyvsp[0].varAttr).width;
	  		symbolTableRow x((yyvsp[0].varAttr).var,temp,0,temp_size,-1,0);
	  		currentSymTable->insert(x);
	  		//currentSymTableprint_table();
	  	}
	  	else if(flag1 == 1 && flag2 == 0){
	  		(yyval.varAttr).var = (yyvsp[0].varAttr).var;
	  	}
}
#line 3582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1725 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(flag1 == 0){
	  		treeNodeType *temp = newNode(t->middle,-1);
	  		temp = mergeNode((yyvsp[-2].varAttr).type,temp);
	  		void *value;
	  		int *v1;
	  		double *v2;
	  		char *v3;
			double matrixInit[10000];
	  		int temp_size;
	  		switch(t->middle){
	  			case _INT : v1 = (int *)malloc(sizeof(int));
	  					   (*v1) = (yyvsp[0].initAttr).intData; 	
	  					   value = (void *)v1;
	  					   temp_size = SIZE_OF_INT;
	  					   break;
	  			case _DOUBLE : v2 = (double *)malloc(sizeof(double));
		  					   (*v2) = (yyvsp[0].initAttr).doubleData;
		  					   //printf("%lf\n",$3.doubleData); 	
		  					   value = (void *)v2;
		  					   //printf("%lf\n",*v2);
		  					   temp_size = SIZE_OF_DOUBLE;
		  					   break;
	  			case _CHAR   :v3 = (char *)malloc(sizeof(char));
	  					   (*v3) = (yyvsp[0].initAttr).charData; 	
	  					   value = (void *)v3;
	  					   temp_size = SIZE_OF_CHAR;
	  					   break;
				case _MATRIX : int i;
								/*for(i=0;i<$3.matrixI;i++)
									matrixInit[i] = ($3.entries)[i];*/
								temp_size = 1;
								value = (void *)matrixInit;
								break;
	  			default     : value = 0; 	
	  		}
	  		temp_size = temp_size * (yyvsp[-2].varAttr).width;
	  		symbolTableRow x((yyvsp[-2].varAttr).var,temp,value,temp_size,-1,0);
	  		currentSymTable->insert(x);
	  	}	
}
#line 3628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1767 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	if(flag2 == 0 || flag1 == 0){
	  		(yyval.varAttr).type = newNode(_VOID,-1);
	  		(yyval.varAttr).width = 0;
	 }
}
#line 3639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1773 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(flag2 == 0 || flag1 == 0){
	  		(yyval.varAttr).type = newNode(_CHAR,-1);
	  		(yyval.varAttr).width = 0;
	  	}	
}
#line 3650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1779 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("type-specifier -> short\n");}
#line 3656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1780 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {	printf("INT\n");
		if(flag2 == 0 || flag1 == 0){
	  		(yyval.varAttr).type = newNode(_INT,-1);
	  		(yyval.varAttr).width = 0;
	  	}
}
#line 3667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1786 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("type-specifier -> long\n");}
#line 3673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1787 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("type-specifier -> float\n");}
#line 3679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1788 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(flag2 == 0 || flag1 == 0){
	  		(yyval.varAttr).type = newNode(_DOUBLE,-1);
	  		(yyval.varAttr).width = SIZE_OF_DOUBLE;
	  	}
}
#line 3690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1794 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		cout << "type->matrix"<<endl;
		if(flag2 == 0 || flag1 == 0){
	  		(yyval.varAttr).type = newNode(_MATRIX,-1);
	  		(yyval.varAttr).width = (yyval.varAttr).width+2*SIZE_OF_INT;
	  	}
}
#line 3702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1801 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("type-specifier -> signed\n");}
#line 3708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1802 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("type-specifier -> unsigned\n");}
#line 3714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1803 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("type-specifier -> Bool\n");}
#line 3720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1805 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	printf(" Decl -> ptr delarator\n");
	if(flag1 == 0 || flag2 == 0){
	  	(yyval.varAttr).type = mergeNode((yyvsp[0].varAttr).type,(yyvsp[-1].varAttr).type);
	  	(yyval.varAttr).width = (yyvsp[0].varAttr).width;
	  	(yyval.varAttr).var = (yyvsp[0].varAttr).var;
	  	//printf("%d\n",($$.type)->middle);
	  	//printf("%d\n",$$.width);
	}
}
#line 3735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1815 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {	
			printf(" Decl -> declarator\n");
			(yyval.varAttr).type = (yyvsp[0].varAttr).type;
	  		(yyval.varAttr).var = (yyvsp[0].varAttr).var;
	  		(yyval.varAttr).width = (yyvsp[0].varAttr).width;
}
#line 3746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1822 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		cout << "Direct_decl->identifier"<<endl;
		if(flag1 == 0 || flag2 == 0){
	  		(yyval.varAttr).var = (yyvsp[0].idAttr).var;
		  	(yyval.varAttr).type = 0;
		  	(yyval.varAttr).width = 1;
		  	if(c == 0){
		  		//printf("DD->Id me load hai kya?\n");
		  		symbolTableRow *t = currentSymTable->lookup((yyvsp[0].idAttr).var);
			  	if(t){
			  		flag2 = 1;
			  		tempUseSymTable = (t->nestedTable);	// Set flag to handle multiple declaration
			  		//printf("%s\n",(t->nestedTable)[0].table->name);
			  		//printf("%p\n",tempUseSymTable);
			  		//printf("%p\n",t->nestedTable);
			  		//if(!temp_use)
			  		//printf("Null hai\n");
			  		//printf("%d\n",temp_use->curr_length);
			  		//printf("%s\n",(temp_use->table)[0].name);
			  		//temp_use->print_table();
			  		//printf("Type casting ka load nahi hai\n");
			  	}												// (to be used in other actions)		
			  	else                                            
			  		flag2 = 0; 
			  	c++;	
		  	}
	  	}		
}
#line 3779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1850 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("direct_declarator -> (declarator)\n");}
#line 3785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1851 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	
	if(flag1 == 0 || flag2 == 0){
	  	treeNodeType *temp = newNode(_ARR, (yyvsp[-1].expAttr).val.intData);
	  	(yyval.varAttr).type = mergeNode((yyvsp[-3].varAttr).type,temp);
	  	(yyval.varAttr).width = (yyvsp[-3].varAttr).width * (yyvsp[-1].expAttr).val.intData;
	  	(yyval.varAttr).var = (yyvsp[-3].varAttr).var;
	}
}
#line 3799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1860 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	printf("New Rule \n");
	if((flag1 ==0 || flag2 == 0)){
		printf("Hello\n");
		treeNodeType *temp = newNode(_MATRIX, -1);
	  	(yyval.varAttr).type = mergeNode((yyvsp[-6].varAttr).type,temp);
		//$$.type = $1.type;
		cout << (yyvsp[-6].varAttr).width << endl;
	  	(yyval.varAttr).width = (yyvsp[-6].varAttr).width * (yyvsp[-4].expAttr).val.intData;
	  	(yyval.varAttr).var = (yyvsp[-6].varAttr).var;
		printf("Yes\n");
		cout << (yyvsp[-4].expAttr).val.intData<<endl;
		(yyval.varAttr).type->rows = (yyvsp[-4].expAttr).val.intData;
		(yyval.varAttr).type->cols = (yyvsp[-1].expAttr).val.intData;
	  	(yyval.varAttr).width = (yyval.varAttr).width * (yyvsp[-1].expAttr).val.intData * SIZE_OF_DOUBLE;
		(yyval.varAttr).width = (yyval.varAttr).width + 2*SIZE_OF_INT;
		cout << (yyval.varAttr).width <<endl;
	  	(yyval.varAttr).var = (yyvsp[-6].varAttr).var;
	}
	else{
		treeNodeType *temp = newNode(_ARR, (yyvsp[-4].expAttr).val.intData);
	  	(yyval.varAttr).type = mergeNode((yyvsp[-6].varAttr).type,temp);
	  	(yyval.varAttr).width = (yyvsp[-6].varAttr).width * (yyvsp[-4].expAttr).val.intData;
		temp = newNode(_ARR, (yyvsp[-1].expAttr).val.intData);
	  	(yyval.varAttr).type = mergeNode((yyval.varAttr).type,temp);
	  	(yyval.varAttr).width = (yyval.varAttr).width * (yyvsp[-1].expAttr).val.intData;
	  	(yyval.varAttr).var = (yyvsp[-6].varAttr).var;
	}
}
#line 3833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1889 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(flag1 == 0 || flag2 == 0){
	  		(yyval.varAttr).var = (yyvsp[-2].varAttr).var;
		  	(yyval.varAttr).type = (yyvsp[-2].varAttr).type;
		  	(yyval.varAttr).width = (yyvsp[-2].varAttr).width;
	  	}
}
#line 3845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1896 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		flag1 = 1;										// Flag1 is set for variable declaration
	  	(yyval.varAttr).var = (yyvsp[-3].varAttr).var;
	  	(yyval.varAttr).type = 0;
	  	(yyval.varAttr).width = 1;
}
#line 3856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1902 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {}
#line 3862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1903 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		flag1 = 1;
	  	if(flag2 == 0)
	  		tempUseSymTable = createSymbolTable();
	  	(yyval.varAttr).var = (yyvsp[-2].varAttr).var;
	  	(yyval.varAttr).type = 0;
	  	(yyval.varAttr).width = 1;
}
#line 3875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1912 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.varAttr).type = newNode(_PTR,-1);}
#line 3881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1913 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		treeNodeType *temp = newNode(_PTR,-1);
	  	(yyval.varAttr).type = mergeNode((yyvsp[0].varAttr).type,temp);
}
#line 3890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1918 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("parameter_type_list-> parameter-list\n");}
#line 3896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1920 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(flag2 == 0){										// An indication of the fact that function has not been
	  		tempUseSymTable = createSymbolTable();				// declared previously
	  		symbolTableRow x((yyvsp[0].varAttr).var,(yyvsp[0].varAttr).type,0,(yyvsp[0].varAttr).width,-1,0); //Insert in sym tab of function(offset comp.in insert)
	  		tempUseSymTable->insert(x);
	  	}
}
#line 3908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1927 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(flag2 == 0){
	  		symbolTableRow x((yyvsp[0].varAttr).var,(yyvsp[0].varAttr).type,0,(yyvsp[0].varAttr).width,-1,0); //Insert in sym tab of function(offset comp. in insert)
	  		tempUseSymTable->insert(x);
	  	}
}
#line 3919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1934 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		if(flag2 == 0){										// An indication that function has not been declared prev
	  		(yyval.varAttr).type = mergeNode((yyvsp[0].varAttr).type,(yyvsp[-1].varAttr).type);
	  		(yyval.varAttr).var = (yyvsp[0].varAttr).var;
	  		(yyval.varAttr).width = (yyvsp[-1].varAttr).width*(yyvsp[0].varAttr).width;
	  	}	
}
#line 3931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1941 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("parameter_declaration -> declaration-specifiers\n");}
#line 3937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1943 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("identifier-list -> identifier\n");}
#line 3943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1944 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("identifier-list ->identifier-list identifier\n");}
#line 3949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1946 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.initAttr) = (yyvsp[0].expAttr).val;}
#line 3955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1947 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.initAttr)=(yyvsp[-1].initAttr);}
#line 3961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1949 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.initAttr)=(yyvsp[0].initAttr);}
#line 3967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1950 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {}
#line 3973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1952 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {}
#line 3979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1953 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.initAttr).matrixI =0;
	//($$.entries)[$$.matrixI] = $1.doubleData;
	(yyval.initAttr).matrixI++;}
#line 3987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1956 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {/*($$.entries)[$$.matrixI] = $3.doubleData;*/}
#line 3993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1957 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {}
#line 3999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1962 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("designation -> designation-list\n");}
#line 4005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1964 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("designation-list -> designator\n");}
#line 4011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1965 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("designation-list -> designation-list designator\n");}
#line 4017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1967 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("designator -> [constant-expression\n]");}
#line 4023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1968 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("designator -> .identifier\n");}
#line 4029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1970 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("statement -> labeled statement\n");}
#line 4035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1971 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 4041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1972 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 4047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1973 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 4053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1974 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 4059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1975 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 4065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1977 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("labeled-statement -> identifier:statement\n");}
#line 4071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1978 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("labeled-statement ->case constant-expression:statement\n");}
#line 4077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1979 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("labeled-statement ->default :statement\n");}
#line 4083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1981 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[-1].expAttr);}
#line 4089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1983 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("block-item-list-optional -> empty\n");}
#line 4095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1984 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 4101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1986 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 4107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1987 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		backpatch((yyvsp[-2].expAttr).NL,(yyvsp[-1].instr));
		(yyval.expAttr) = (yyvsp[0].expAttr);
}
#line 4116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1992 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("block-item -> declaration\n");}
#line 4122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1993 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 4128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1995 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[-1].expAttr);}
#line 4134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1997 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		backpatch((yyvsp[-4].NAttr),nextInstr);
	  	conv2Bool(&(yyvsp[-5].expAttr));
	  	backpatch((yyvsp[-5].expAttr).TL,(yyvsp[-2].instr));
	  	(yyval.expAttr).NL = merge((yyvsp[-1].expAttr).NL,(yyvsp[-5].expAttr).FL);
	  	(yyval.expAttr).NL = merge((yyval.expAttr).NL,(yyvsp[0].NAttr));
}
#line 4146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2004 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		listNode *l = 0;
	  	if(((yyvsp[-8].expAttr).type)->middle!=BOOL){
	  		l = makelist(nextInstr);
	  		quad_array->emit(_GOTO, 0, 0, 0,0);
	  	}
	  	backpatch((yyvsp[-7].NAttr),nextInstr);
	  	conv2Bool(&(yyvsp[-8].expAttr));
	  	backpatch((yyvsp[-8].expAttr).TL,(yyvsp[-5].instr));
	  	backpatch((yyvsp[-8].expAttr).FL,(yyvsp[-1].instr));
	  	listNode *temp = merge((yyvsp[-3].NAttr),(yyvsp[-4].expAttr).NL);
	  	(yyval.expAttr).NL = merge(temp,(yyvsp[0].expAttr).NL);
	  	(yyval.expAttr).NL = merge((yyval.expAttr).NL,l);
}
#line 4165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2018 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("expression-statement-> switch(expression)statement\n");}
#line 4171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2020 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		char *res = new char[10];
	  	sprintf(res,"%d",(yyvsp[-6].instr));
	  	quad_array->emit(_GOTO, res, 0,0,0);
	  	backpatch((yyvsp[-3].NAttr),nextInstr);
	  	conv2Bool(&(yyvsp[-4].expAttr));
	  	backpatch((yyvsp[0].expAttr).NL,(yyvsp[-6].instr));
	  	backpatch((yyvsp[-4].expAttr).TL,(yyvsp[-1].instr));
	  	(yyval.expAttr).NL = (yyvsp[-4].expAttr).FL;
}
#line 4186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2030 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		backpatch((yyvsp[-2].NAttr),nextInstr);
	  	conv2Bool(&(yyvsp[-3].expAttr));
	  	backpatch((yyvsp[-3].expAttr).TL,(yyvsp[-8].instr));
	  	backpatch((yyvsp[-7].expAttr).NL,(yyvsp[-6].instr));
	  	(yyval.expAttr).NL = (yyvsp[-3].expAttr).FL;
}
#line 4198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2037 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		backpatch((yyvsp[-3].NAttr),(yyvsp[-8].instr));
	  	listNode *l = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0,0,0);
	  	(yyvsp[0].expAttr).NL = merge((yyvsp[0].expAttr).NL,l);
	  	backpatch((yyvsp[0].expAttr).NL,(yyvsp[-5].instr));
	  	backpatch((yyvsp[-6].NAttr),nextInstr);
	  	conv2Bool(&(yyvsp[-7].expAttr));
	  	backpatch((yyvsp[-7].expAttr).TL,(yyvsp[-1].instr));
	  	(yyval.expAttr).NL = (yyvsp[-7].expAttr).FL;
}
#line 4214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2048 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("iteration-statement -> for ( declaration_optional ;expression_optional)statement\n");}
#line 4220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2050 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("jump-statement -> goto indentifier\n");}
#line 4226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2051 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("jump-statement -> continue;\n");}
#line 4232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2052 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("jump-statement ->  break;\n");}
#line 4238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2053 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	  		quad_array->emit(_RETURN, 0, 0, 0, 0);
}
#line 4246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2056 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
			char *arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	  		quad_array->emit(RETURN_EXP, 0, arg1, (yyvsp[-1].expAttr).loc, 0);
}
#line 4255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2061 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("expression_optional -> null \n");}
#line 4261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2062 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 4267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2064 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("translation-unit -> external-declaration\n");}
#line 4273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2065 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("translation-unit -> translation-unit external-declaration\n");}
#line 4279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2067 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("external-declaration-> function-definition\n");}
#line 4285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2068 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("external-declaration-> declaration\n");}
#line 4291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2070 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {}
#line 4297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2071 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
	currentSymTable = globalSymTable;
}
#line 4305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2075 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("declaration-list -> declaration\n");}
#line 4311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2076 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {printf("declaration-list ->declaration-list declaration\n");}
#line 4317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2078 "ass4_15CS10061_2.y" /* yacc.c:1646  */
    {
		currentSymTable = tempUseSymTable; // As we are entering the function current should point to symbol table of function
		//current->print_table();
		//printf("Yes\n");
		int i;
		char *t;
		for(i=0;i<=globalSymTable->curr_length;i++){
			if((((globalSymTable->table)[i]).nestedTable) == currentSymTable){
				t = strdup(((globalSymTable->table)[i]).name);
				break;
			}
		}
		quad_array->emit(Function, 0, t, 0,0);
		flag1 = 0;
		flag2 = 0;
		c = 0;
		//printf("Yes\n");
	;
}
#line 4341 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4345 "y.tab.c" /* yacc.c:1646  */
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
#line 2098 "ass4_15CS10061_2.y" /* yacc.c:1906  */


void yyerror(const char *s) {
    printf("Error occured due to : %s\n",s);
}
