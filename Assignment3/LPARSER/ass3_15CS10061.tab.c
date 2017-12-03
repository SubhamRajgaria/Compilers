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
#line 1 "ass3_15CS10061.y" /* yacc.c:339  */

#include <stdio.h>
extern int yylex(void);
void yyerror(char *s);

#line 72 "ass3_15CS10061.tab.c" /* yacc.c:339  */

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
    SPECIAL = 333,
    UNKNOWN = 334
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 200 "ass3_15CS10061.tab.c" /* yacc.c:358  */

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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   477

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  268

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

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
       2,    83,     2,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    81,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,    91,    92,    93,    94,    95,    98,    99,
     100,   101,   102,   103,   104,   105,   107,   108,   110,   111,
     113,   114,   115,   116,   118,   119,   120,   121,   123,   125,
     126,   127,   128,   130,   131,   132,   134,   135,   136,   138,
     139,   140,   141,   142,   144,   145,   146,   149,   150,   152,
     153,   156,   157,   159,   160,   162,   163,   165,   166,   168,
     169,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   183,   184,   186,   188,   190,   191,   193,   194,
     196,   197,   199,   200,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   214,   215,   217,   218,   220,
     222,   223,   224,   225,   226,   228,   229,   231,   233,   234,
     236,   237,   240,   241,   243,   244,   246,   247,   249,   250,
     252,   253,   255,   257,   258,   260,   261,   263,   264,   265,
     266,   267,   268,   270,   271,   272,   274,   276,   277,   279,
     280,   282,   283,   285,   287,   288,   289,   291,   292,   293,
     294,   296,   297,   298,   299,   301,   302,   304,   305,   307,
     308,   310,   312,   313,   315,   316
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
  "OR_EQUAL", "COMMA", "HASH", "SPECIAL", "UNKNOWN", "'^'", "'|'", "'?'",
  "'='", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "type_specifier",
  "pointer_opt", "assignment_expression_opt", "declarator",
  "direct_declarator", "identifier_list_opt", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_row_list", "initializer_row",
  "designation_opt", "designation", "designation_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "expression_opt", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
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
      94,   124,    63,    61
};
# endif

#define YYPACT_NINF -101

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-101)))

#define YYTABLE_NINF -164

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     396,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,   339,  -101,   357,  -101,  -101,  -101,   -59,
    -101,  -101,   -16,    45,  -101,  -101,  -101,  -101,  -101,  -101,
      87,   395,  -101,   396,    -7,   396,  -101,   -63,     1,   414,
     375,  -101,  -101,  -101,  -101,  -101,   414,    80,   414,   414,
    -101,  -101,  -101,  -101,  -101,    -6,   394,   414,  -101,    40,
      78,    74,    61,    70,    -3,     7,   -18,    20,   -51,  -101,
    -101,  -101,   209,  -101,  -101,  -101,  -101,    99,  -101,   172,
      85,   103,    58,  -101,    64,  -101,   -11,   414,   118,   -24,
      72,   395,  -101,   -26,  -101,  -101,  -101,   414,   414,   119,
     126,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,   414,  -101,  -101,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,    90,   414,    91,
      93,   252,   123,   131,   128,   414,   130,   137,    97,    89,
    -101,  -101,  -101,  -101,   135,   209,  -101,  -101,  -101,  -101,
    -101,   109,  -101,  -101,  -101,  -101,   396,   147,  -101,   414,
    -101,   142,  -101,  -101,    80,    80,  -101,  -101,  -101,   -17,
     141,   102,  -101,  -101,  -101,  -101,  -101,  -101,  -101,    40,
      40,    78,    78,    74,    74,    74,    74,    61,    61,    70,
      -3,     7,   -18,    20,    10,  -101,   116,  -101,   252,   157,
     293,   120,   414,   122,   414,   414,   252,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,    72,   395,  -101,  -101,   414,   414,
     252,  -101,   153,   414,   124,  -101,     2,  -101,     3,     6,
    -101,  -101,  -101,  -101,  -101,   414,   136,   414,   252,   252,
     252,     8,   414,   139,   180,  -101,  -101,   140,   166,   414,
     252,  -101,   252,   170,  -101,  -101,   252,  -101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    85,    90,    86,    88,    89,    87,    92,    93,    84,
      94,    91,   160,    96,    76,     0,   157,   159,    75,    78,
      80,    77,     0,    82,     1,   158,    96,   100,    96,    95,
      99,     0,   164,    79,     0,   162,    81,    82,     0,    97,
     106,     2,     3,     4,     5,     6,     0,   121,     0,     0,
      24,    25,    26,    27,     8,    20,    28,     0,    29,    33,
      36,    39,    44,    47,    49,    51,    53,    55,    57,    59,
     114,    83,   138,   161,   165,   101,    98,     0,   112,    96,
       0,     0,   107,   108,   105,    72,     0,     0,     0,     0,
     116,     0,   120,     0,   123,    21,    22,     0,    16,     0,
       0,    13,    14,    15,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    61,     0,    28,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   155,     0,     0,     0,   155,     0,     0,     2,   156,
     141,   142,   127,   128,     0,   137,   139,   129,   130,   131,
     132,     0,   102,   110,   104,   103,     0,     0,     7,     0,
      74,     0,   126,   115,   121,   121,   118,   122,   124,     0,
       0,    17,    18,    11,    12,    60,    30,    31,    32,    34,
      35,    37,    38,    40,    41,    43,    42,    45,    46,    48,
      50,    52,    54,    56,     0,   153,     0,   152,   155,     0,
     155,     0,     0,     0,     0,     0,   155,   136,   140,   143,
     109,   113,    73,   125,   117,     0,     9,    10,     0,     0,
     155,   135,     0,   155,     0,   151,     0,   154,     0,     0,
     133,   119,    19,    58,   134,     0,     0,   155,   155,   155,
     155,     0,   155,     0,   144,   146,   147,     0,     0,   155,
     155,   148,   155,     0,   145,   150,   155,   149
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -101,  -101,  -101,   -27,  -101,   -43,    15,    19,
     -79,     0,    75,    76,    77,   101,    86,  -101,   -85,   -30,
    -101,   -46,    71,   -20,     4,  -101,  -101,   185,    -8,  -101,
    -101,    -5,  -101,  -101,  -101,  -101,    81,  -101,   -84,  -101,
      67,    69,  -101,  -101,   149,   -99,  -101,   212,  -101,  -101,
     106,  -101,  -101,  -101,  -101,  -100,  -101,   242,  -101,  -101,
    -101
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,    55,   180,   181,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    85,
     115,   149,   171,    12,    33,    18,    19,    20,    14,    22,
      77,    37,    30,    80,    81,    82,    83,    84,    71,    89,
      90,    91,    92,    93,    94,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,    15,    16,    17,    34,
      35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,    70,   170,    32,    13,    21,    87,   176,    23,    76,
     135,    27,    88,   173,   117,    74,   226,    26,    28,    13,
      31,    95,    96,    38,   168,    21,    97,    29,    98,    72,
     116,   136,    99,   100,   101,   102,    75,   248,   249,   131,
     174,   250,   209,   257,    79,   213,   193,   194,   195,   196,
       1,   179,   150,   170,     2,     3,     4,   177,     5,   169,
     116,    70,     6,   133,     7,   169,     8,     9,   182,    10,
      11,    21,   103,   229,   163,   186,   187,   188,   169,   169,
     134,  -163,   169,   118,   169,   185,   169,   132,   119,   120,
     204,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   231,
     234,   116,    87,   125,   126,   127,   128,   240,    88,    39,
     164,    40,   121,   122,   123,   124,   129,   130,    31,   197,
     198,   244,   162,   246,   166,   150,   189,   190,   165,   222,
     167,   241,   191,   192,   243,   172,   183,   253,   175,   254,
     255,   256,   258,   184,   205,   207,   208,   210,   211,   263,
     216,   264,   212,   265,   214,   169,   236,   267,   238,   239,
      79,   215,   217,   219,   221,   223,   227,     1,   228,   230,
     232,     2,     3,     4,   235,     5,   237,   245,   247,     6,
     233,     7,   260,     8,     9,    70,    10,    11,   242,   251,
     252,   262,   116,   259,   261,   266,   199,  -111,   200,   206,
     201,    36,   137,   138,     1,   139,   140,   141,     2,     3,
       4,   203,     5,   142,   143,   144,     6,   145,     7,   146,
       8,     9,   147,    10,    11,   202,   148,    42,    43,    44,
      45,   224,   178,    46,   225,    72,    73,   220,  -111,    48,
      49,    50,    51,    52,    53,   137,   138,    25,   139,   140,
     141,   218,     0,     0,     0,     0,   142,   143,   144,     0,
     145,     0,   146,  -155,     0,   147,     0,     0,     0,   148,
      42,    43,    44,    45,     0,     0,    46,     0,    72,     0,
       0,     0,    48,    49,    50,    51,    52,    53,     1,     0,
       0,     0,     2,     3,     4,     0,     5,     0,     0,     0,
       6,     0,     7,     0,     8,     9,     0,    10,    11,     0,
      41,    42,    43,    44,    45,     0,     0,    46,     0,     0,
       0,     0,     0,    48,    49,    50,    51,    52,    53,   -79,
       0,     0,     0,     0,     1,     0,     0,     0,     2,     3,
       4,     0,     5,     0,     0,     0,     6,    24,     7,     0,
       8,     9,     1,    10,    11,     0,     2,     3,     4,     0,
       5,     0,     0,     0,     6,     0,     7,     0,     8,     9,
       1,    10,    11,     0,     2,     3,     4,     0,     5,     0,
       0,     0,     6,     0,     7,     0,     8,     9,     0,    10,
      11,     1,    78,     0,     0,     2,     3,     4,     0,     5,
       0,     0,     0,     6,     0,     7,     0,     8,     9,     0,
      10,    11,    41,    42,    43,    44,    45,     0,     0,    46,
       0,    47,     0,     0,     0,    48,    49,    50,    51,    52,
      53,    41,    42,    43,    44,    45,     0,     0,    46,     0,
       0,     0,     0,     0,    48,    49,    50,    51,    52,    53,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       0,     0,     0,     0,     0,     0,     0,   114
};

static const yytype_int16 yycheck[] =
{
      46,    31,    87,    23,     0,    13,    32,    91,    13,    39,
      61,    27,    38,    37,    57,    35,    33,    76,    34,    15,
      83,    48,    49,    28,    35,    33,    32,    43,    34,    36,
      57,    82,    38,    39,    40,    41,    35,    35,    35,    42,
      64,    35,   141,    35,    40,   145,   125,   126,   127,   128,
       5,    97,    72,   138,     9,    10,    11,    83,    13,    76,
      87,    91,    17,    81,    19,    76,    21,    22,    98,    24,
      25,    79,    78,    63,    79,   118,   119,   120,    76,    76,
      60,    36,    76,    43,    76,   115,    76,    80,    48,    49,
     136,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   208,
     210,   138,    32,    52,    53,    54,    55,   216,    38,    32,
      35,    34,    44,    45,    50,    51,    56,    57,    83,   129,
     130,   230,    33,   233,    76,   155,   121,   122,    35,   169,
      76,   225,   123,   124,   229,    27,    27,   247,    76,   248,
     249,   250,   252,    27,    64,    64,    63,    34,    27,   259,
      63,   260,    34,   262,    34,    76,   212,   266,   214,   215,
     166,    34,    37,    64,    27,    33,    35,     5,    76,    63,
      23,     9,    10,    11,    64,    13,    64,    34,    64,    17,
     210,    19,    12,    21,    22,   225,    24,    25,   228,   245,
      64,    35,   229,    64,    64,    35,   131,    35,   132,   138,
     133,    26,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   135,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   134,    27,    28,    29,    30,
      31,   174,    93,    34,   175,    36,    34,   166,    76,    40,
      41,    42,    43,    44,    45,     3,     4,    15,     6,     7,
       8,   155,    -1,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    -1,    20,    64,    -1,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,     5,    -1,
      -1,    -1,     9,    10,    11,    -1,    13,    -1,    -1,    -1,
      17,    -1,    19,    -1,    21,    22,    -1,    24,    25,    -1,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,     0,
      -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,     9,    10,
      11,    -1,    13,    -1,    -1,    -1,    17,     0,    19,    -1,
      21,    22,     5,    24,    25,    -1,     9,    10,    11,    -1,
      13,    -1,    -1,    -1,    17,    -1,    19,    -1,    21,    22,
       5,    24,    25,    -1,     9,    10,    11,    -1,    13,    -1,
      -1,    -1,    17,    -1,    19,    -1,    21,    22,    -1,    24,
      25,     5,    27,    -1,    -1,     9,    10,    11,    -1,    13,
      -1,    -1,    -1,    17,    -1,    19,    -1,    21,    22,    -1,
      24,    25,    27,    28,    29,    30,    31,    -1,    -1,    34,
      -1,    36,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     9,    10,    11,    13,    17,    19,    21,    22,
      24,    25,   107,   108,   112,   140,   141,   142,   109,   110,
     111,   112,   113,   115,     0,   141,    76,    27,    34,    43,
     116,    83,   107,   108,   143,   144,   111,   115,   115,    32,
      34,    27,    28,    29,    30,    31,    34,    36,    40,    41,
      42,    43,    44,    45,    85,    86,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   122,    36,   131,   107,    35,   103,   114,    27,   108,
     117,   118,   119,   120,   121,   103,   105,    32,    38,   123,
     124,   125,   126,   127,   128,    89,    89,    32,    34,    38,
      39,    40,    41,    78,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    83,   104,    89,    91,    43,    48,
      49,    44,    45,    50,    51,    52,    53,    54,    55,    56,
      57,    42,    80,    81,    60,    61,    82,     3,     4,     6,
       7,     8,    14,    15,    16,    18,    20,    23,    27,   105,
     107,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,    33,   115,    35,    35,    76,    76,    35,    76,
     102,   106,    27,    37,    64,    76,   122,    83,   128,   105,
      87,    88,   103,    27,    27,   103,    91,    91,    91,    92,
      92,    93,    93,    94,    94,    94,    94,    95,    95,    96,
      97,    98,    99,   100,   105,    64,   106,    64,    63,   129,
      34,    27,    34,   139,    34,    34,    63,    37,   134,    64,
     120,    27,   103,    33,   124,   125,    33,    35,    76,    63,
      63,   129,    23,   107,   139,    64,   105,    64,   105,   105,
     129,   122,   103,   102,   129,    34,   139,    64,    35,    35,
      35,   105,    64,   139,   129,   129,   129,    35,   139,    64,
      12,    64,    35,   139,   129,   129,    35,   129
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    85,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    87,    87,    88,    88,
      89,    89,    89,    89,    90,    90,    90,    90,    91,    92,
      92,    92,    92,    93,    93,    93,    94,    94,    94,    95,
      95,    95,    95,    95,    96,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   105,   105,   106,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   114,   114,   115,
     116,   116,   116,   116,   116,   117,   117,   118,   119,   119,
     120,   120,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   127,   127,   128,   128,   129,   129,   129,
     129,   129,   129,   130,   130,   130,   131,   132,   132,   133,
     133,   134,   134,   135,   136,   136,   136,   137,   137,   137,
     137,   138,   138,   138,   138,   139,   139,   140,   140,   141,
     141,   142,   143,   143,   144,   144
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     2,     0,     1,     1,     3,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     1,     2,     1,     0,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     0,     1,     2,
       1,     3,     4,     4,     4,     1,     0,     1,     1,     3,
       2,     1,     1,     3,     1,     3,     1,     3,     2,     4,
       1,     0,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     3,     1,     0,     1,
       2,     1,     1,     2,     5,     7,     5,     5,     7,     9,
       8,     3,     2,     2,     3,     0,     1,     1,     2,     1,
       1,     4,     1,     0,     1,     2
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
#line 90 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("It is an identifier\n");}
#line 1548 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 91 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("It is a constant\n");}
#line 1554 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 92 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("It is a constant\n");}
#line 1560 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 93 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("It is a constant\n");}
#line 1566 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 94 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("It is a string literal\n");}
#line 1572 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 95 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("It is an expression\n ");}
#line 1578 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 98 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression -> primary_expression\n");}
#line 1584 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 99 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression -> postfix_expression[expression]\n");}
#line 1590 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 100 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression -> postfix_expression(expression)\n");}
#line 1596 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 101 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression.identifier\n");}
#line 1602 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 102 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression->identifier\n");}
#line 1608 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 103 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression++\n");}
#line 1614 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 104 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression--\n");}
#line 1620 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 105 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression.'\n");}
#line 1626 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 107 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("null\n");}
#line 1632 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 108 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("argument_optional->argument_expression_list\n");}
#line 1638 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 110 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("argument_expression_list-> assignment_expression\n");}
#line 1644 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 111 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("argument_expression_list->argument_expression_list   assignment_expression\n");}
#line 1650 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 113 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_expression-> postfix_expression\n");}
#line 1656 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 114 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_expression-> ++unary_expression\n");}
#line 1662 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 115 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_expression-> -unary_expression\n");}
#line 1668 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 116 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_expression-> unary_operator cast_expression\n");}
#line 1674 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 118 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_operator -> & \n");}
#line 1680 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 119 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_operator -> * \n");}
#line 1686 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 120 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_operator -> + \n");}
#line 1692 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 121 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_operator -> - \n");}
#line 1698 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 123 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_operator -> & \n");}
#line 1704 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 125 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("multiplicative-expression -> cast-expression\n");}
#line 1710 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 126 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("multiplicative-expression ->multiplicative-expression * cast-expression\n");}
#line 1716 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 127 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("multiplicative-expression ->multiplicative-expression / cast-expression\n");}
#line 1722 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 128 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("multiplicative-expression ->multiplicative-expression mod cast-expression\n");}
#line 1728 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("additive_expression-> multiplicative_expression\n");}
#line 1734 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 131 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("additive_expression-> additive-expression + multiplicative_expression\n");}
#line 1740 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 132 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("additive_expression-> additive-expression - multiplicative_expression\n");}
#line 1746 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 134 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("shift_expression -> additive_expression\n");}
#line 1752 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 135 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("shift_expression -> shift_expression << additive_expression\n");}
#line 1758 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 136 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("shift_expression -> shift_expression >> additive_expression\n");}
#line 1764 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 138 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("relational_expression -> shift_expression\n");}
#line 1770 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 139 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("relational_expression -> relational-expression < shift_expression\n");}
#line 1776 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 140 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("relational_expression -> relational-expression > shift_expression\n");}
#line 1782 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 141 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("relational_expression -> relational-expression >= shift_expression\n");}
#line 1788 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 142 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("relational_expression -> relational-expression <= shift_expression\n");}
#line 1794 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 144 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("equality_expression -> relational_expression\n");}
#line 1800 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 145 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("equality_expression -> equality_expression == relational_expression\n");}
#line 1806 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 146 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("equality_expression -> equality_expression != relational_expression\n");}
#line 1812 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 149 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("AND-expression -> equality_expression\n");}
#line 1818 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 150 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("AND-expression ->AND-expression & equality_expression\n");}
#line 1824 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 152 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("exclusive_or_expression -> AND-expression\n");}
#line 1830 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 153 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("exclusive_or_expression -> exclusive_or_expression ^ AND-expression\n");}
#line 1836 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 156 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("inclusive_or_expression -> exclusive_or_expression\n");}
#line 1842 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 157 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n");}
#line 1848 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 159 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("logical-and-expression -> inclusive_or_expression\n");}
#line 1854 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 160 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("logical-and-expression ->logical-and-expression && inclusive_or_expression\n");}
#line 1860 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 162 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("logical-or-expression ->logical-and-expression\n");}
#line 1866 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 163 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("logical-or-expression -> logical-or-expression || logical-and-expression\n");}
#line 1872 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 165 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("conditional-expression -> logical-or-expression\n");}
#line 1878 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 166 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("conditional-expression -> logical-or-expression? expression : conditional_expression\n");}
#line 1884 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 168 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment_expression_opt -> conditional-expression\n");}
#line 1890 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 169 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment_expression -> unary_expression assignment_operator assignment-expression\n");}
#line 1896 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 171 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> =\n");}
#line 1902 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 172 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> *=\n");}
#line 1908 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 173 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> /=\n");}
#line 1914 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 174 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> mod \n");}
#line 1920 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 175 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> +=\n");}
#line 1926 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 176 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> -=\n");}
#line 1932 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 177 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> <<=\n");}
#line 1938 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 178 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> >>=\n");}
#line 1944 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 179 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> &=\n");}
#line 1950 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 180 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> ^=\n");}
#line 1956 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 181 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> |=\n");}
#line 1962 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 183 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression -> assignment-expression\n");}
#line 1968 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 184 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression -> expression assignment-expression\n");}
#line 1974 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 186 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("constant-expression -> conditional_expression\n");}
#line 1980 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 188 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration -> declaration-specifiers init-declarator-list-optional\n");}
#line 1986 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 190 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("\ndeclaration_specs => type_spec\n");}
#line 1992 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 191 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration-specifiers -> type-specifier declaration_specifiers_optional\n"); }
#line 1998 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 193 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("init-declarator-list-optional -> init-declarator-list\n");}
#line 2004 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 194 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("init-declarator-list-optional -> empty\n");}
#line 2010 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 196 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("init-declarator-list -> init-declarator\n");}
#line 2016 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 197 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("init-declarator-list ->init-declarator-list init-declarator\n");}
#line 2022 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 199 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("init-declarator -> declarator\n");}
#line 2028 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 200 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("init-declarator -> declarator=initializer\n");}
#line 2034 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 202 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> void\n");}
#line 2040 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 203 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> char\n");}
#line 2046 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 204 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> short\n");}
#line 2052 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 205 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> int\n");}
#line 2058 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 206 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> long\n");}
#line 2064 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 207 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> float\n");}
#line 2070 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 208 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> double\n");}
#line 2076 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 209 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> Matrix\n");}
#line 2082 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 210 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> signed\n");}
#line 2088 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 211 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> unsigned\n");}
#line 2094 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 212 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> Bool\n");}
#line 2100 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 214 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("pointer-optional -> pointer\n");}
#line 2106 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 215 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("pointer-optional -> empty\n");}
#line 2112 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 217 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assgn_expr_opt => empty\n");}
#line 2118 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 218 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assgn_expr_opt => assgn_expr\n");}
#line 2124 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 220 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("decalrator -> pointer_opt direct_declarator\n");}
#line 2130 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 222 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("direct_declarator -> identifier\n");}
#line 2136 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 223 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("direct_declarator -> (declarator)\n");}
#line 2142 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 224 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct-declarator[assignment-expression-optional]\n");}
#line 2148 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 225 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct-declarator(parameter-type-list)\n");}
#line 2154 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 226 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct-declarator(identifier-list-optional)\n");}
#line 2160 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 228 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("identifier_list_optional -> identifier_list\n");}
#line 2166 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 229 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("identifier_list_optional -> empty\n");}
#line 2172 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 231 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("parameter_type_list-> parameter-list\n");}
#line 2178 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 233 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("parameter_list -> parameter_declaration\n");}
#line 2184 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 234 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("parameter_list -> parameter-list parameter_declaration\n");}
#line 2190 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 236 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("parameter_declaration -> declaration-specifiers declarator\n");}
#line 2196 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 237 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("parameter_declaration -> declaration-specifiers\n");}
#line 2202 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 240 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("identifier-list -> identifier\n");}
#line 2208 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 241 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("identifier-list ->identifier-list identifier\n");}
#line 2214 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 243 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("initializer -> assignment-expression\n");}
#line 2220 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 244 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("initializer -> initializer-row-list\n");}
#line 2226 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 246 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("initializer_row_list-> initializer_row\n");}
#line 2232 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 247 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("initializer_row_list -> initializer_row_list;initializer-row\n");}
#line 2238 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 249 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("initializer-row -> designation-optional initializer\n");}
#line 2244 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 250 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("initializer-row ->initializer-row, designation-optional initializer\n");}
#line 2250 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 252 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designation-optional -> designation\n");}
#line 2256 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 253 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designation-optional -> empty\n");}
#line 2262 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 255 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designation -> designation-list\n");}
#line 2268 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 257 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designation-list -> designator\n");}
#line 2274 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 258 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designation-list -> designation-list designator\n");}
#line 2280 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 260 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designator -> [constant-expression\n]");}
#line 2286 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 261 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designator -> .identifier\n");}
#line 2292 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 263 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("statement -> labeled statement\n");}
#line 2298 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 264 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("statement -> compound statement\n");}
#line 2304 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 265 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("statement -> expression statement\n");}
#line 2310 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 266 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("statement -> selection statement\n");}
#line 2316 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 267 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("statement -> iteration statement\n");}
#line 2322 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 268 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("statement -> jump statement\n");}
#line 2328 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 270 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("labeled-statement -> identifier:statement\n");}
#line 2334 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 271 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("labeled-statement ->case constant-expression:statement\n");}
#line 2340 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 272 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("labeled-statement ->default :statement\n");}
#line 2346 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 274 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("compound-statement -> {block-item-list-optional}\n");}
#line 2352 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 276 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("block-item-list-optional -> block-item-list\n");}
#line 2358 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 277 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("block-item-list-optional -> empty\n");}
#line 2364 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 279 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("block-item-list -> block-item\n");}
#line 2370 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 280 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("block-item-list ->block-item-list block-item\n");}
#line 2376 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 282 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("block-item -> declaration\n");}
#line 2382 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 283 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("block-item -> statement\n");}
#line 2388 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 285 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression-statement-> expression-optional\n");}
#line 2394 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 287 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression-statement-> if(expression)statement\n");}
#line 2400 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 288 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression-statement-> if(expression)statement else statement\n");}
#line 2406 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 289 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression-statement-> switch(expression)statement\n");}
#line 2412 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 291 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("iteration-statement-> while(expression)statement\n");}
#line 2418 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 292 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("iteration-statement-> do statement while(expression);\n");}
#line 2424 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 293 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("iteration-statement -> for ( expression_optional ;expression_optional;expression_optional)statement\n");}
#line 2430 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 294 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("iteration-statement -> for ( declaration_optional ;expression_optional)statement\n");}
#line 2436 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 296 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("jump-statement -> goto indentifier\n");}
#line 2442 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 297 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("jump-statement -> continue;\n");}
#line 2448 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 298 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("jump-statement ->  break;\n");}
#line 2454 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 299 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("jump-statement -> return expression-optional;\n");}
#line 2460 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 301 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression_optional -> null \n");}
#line 2466 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 302 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf(" expression-optional -> expression\n");}
#line 2472 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 304 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("translation-unit -> external-declaration\n");}
#line 2478 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 305 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("translation-unit -> translation-unit external-declaration\n");}
#line 2484 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 307 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("external-declaration-> function-definition\n");}
#line 2490 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 308 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("external-declaration-> declaration\n");}
#line 2496 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 310 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("function-definition -> decalration-specifiers declarator declaration-list-optional compound-statement\n");}
#line 2502 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 312 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration-list-optional -> declaration-list\n");}
#line 2508 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 313 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration-list-optional -> empty\n");}
#line 2514 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 315 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration-list -> declaration\n");}
#line 2520 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 316 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration-list ->declaration-list declaration\n");}
#line 2526 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;


#line 2530 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
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
#line 318 "ass3_15CS10061.y" /* yacc.c:1906  */


void yyerror(char *s) {
    printf("Error occured due to : %s\n",yytext);
}
