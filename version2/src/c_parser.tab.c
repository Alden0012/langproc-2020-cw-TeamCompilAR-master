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

#line 67 "version2/src/c_parser.tab.c" /* yacc.c:339  */

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
   by #include "c_parser.tab.h".  */
#ifndef YY_YY_VERSION2_SRC_C_PARSER_TAB_H_INCLUDED
# define YY_YY_VERSION2_SRC_C_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "version2/src/c_parser.y" /* yacc.c:355  */

  int yylex(void);
  void yyerror(const char *);
  #include <string>
  #include <iostream>
  #include <vector>
  #include "../include/ast_header.hpp"
  extern Root *Prog_Root;

#line 107 "version2/src/c_parser.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    FCONSTANT = 262,
    CCONSTANT = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPE_NAME = 285,
    TYPEDEF = 286,
    EXTERN = 287,
    STATIC = 288,
    AUTO = 289,
    REGISTER = 290,
    CHAR = 291,
    SHORT = 292,
    INT = 293,
    LONG = 294,
    SIGNED = 295,
    UNSIGNED = 296,
    FLOAT = 297,
    DOUBLE = 298,
    CONST = 299,
    VOLATILE = 300,
    VOID = 301,
    STRUCT = 302,
    UNION = 303,
    ENUM = 304,
    ELLIPSIS = 305,
    CASE = 306,
    DEFAULT = 307,
    IF = 308,
    ELSE = 309,
    SWITCH = 310,
    WHILE = 311,
    DO = 312,
    FOR = 313,
    GOTO = 314,
    CONTINUE = 315,
    BREAK = 316,
    RETURN = 317
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "version2/src/c_parser.y" /* yacc.c:355  */

	std::string *s;
	char c;
	float f;
	NodePtr ast_node;
	std::vector<Declaration *> *DeclList;
	std::vector<Expression *> *ExprList;
	std::vector<Statement *> *StatementList; 
	int n;


#line 194 "version2/src/c_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_VERSION2_SRC_C_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 211 "version2/src/c_parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1384

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  228
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  408

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    76,    69,     2,
      63,    64,    70,    71,    68,    72,    67,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    84,
      77,    83,    78,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    80,    86,    73,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    54,    55,    56,    57,    58,    61,    62,
      63,    64,    65,    66,    67,    68,    72,    73,    77,    78,
      79,    80,    81,    82,    83,    84,    88,    89,    90,    91,
      92,    93,    97,    98,   102,   103,   104,   105,   109,   110,
     111,   115,   116,   117,   121,   122,   123,   124,   125,   129,
     130,   131,   135,   136,   140,   141,   145,   146,   150,   151,
     155,   156,   160,   161,   165,   166,   167,   168,   169,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     187,   191,   195,   196,   197,   198,   199,   200,   201,   202,
     206,   207,   208,   209,   210,   211,   215,   216,   220,   221,
     225,   226,   227,   228,   229,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   247,   248,   249,   253,
     254,   258,   259,   263,   267,   268,   269,   270,   274,   275,
     279,   280,   281,   285,   286,   287,   291,   292,   296,   297,
     301,   302,   306,   307,   311,   312,   313,   314,   315,   316,
     317,   321,   322,   323,   324,   328,   329,   334,   335,   339,
     340,   344,   345,   346,   347,   351,   352,   356,   357,   361,
     362,   363,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   379,   380,   381,   385,   386,   390,   391,   392,   393,
     394,   395,   399,   400,   401,   405,   406,   407,   408,   412,
     413,   417,   418,   422,   423,   427,   428,   429,   433,   434,
     435,   436,   437,   438,   442,   443,   444,   445,   446,   449,
     452,   453,   457,   458,   462,   463,   464,   465,   466
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "FCONSTANT", "CCONSTANT", "PTR_OP", "INC_OP",
  "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['",
  "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'",
  "'}'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operators",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "AstRoot", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
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
     315,   316,   317,    40,    41,    91,    93,    46,    44,    38,
      42,    43,    45,   126,    33,    47,    37,    60,    62,    94,
     124,    63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -215

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-215)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1039,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
      12,    87,   167,  -215,    60,  1335,  1335,  -215,    30,  -215,
    1335,  1178,     6,    45,    35,  1039,  -215,  -215,   -26,   118,
      34,  -215,  -215,   167,   135,   160,  -215,   -22,  -215,  1158,
    -215,  -215,    67,  1208,  -215,   337,  -215,    63,  -215,  1178,
    1086,   836,     6,  -215,  -215,   118,    49,   -16,  -215,  -215,
    -215,  -215,   144,   589,  -215,   155,    79,    45,    87,  -215,
     589,  -215,  1178,  1208,  1208,  1111,  -215,    47,  1208,   271,
    -215,  -215,   106,  -215,  -215,   169,   192,   980,   117,   140,
     157,   180,   553,   187,   230,   177,   182,   677,   821,   994,
     994,   994,   994,   994,   994,  -215,  -215,  -215,    32,  1007,
    -215,  -215,   146,   170,   234,   194,   232,   186,   189,   190,
     270,    15,  -215,  -215,   205,  -215,  -215,  -215,   409,   481,
    -215,  -215,  -215,  -215,    91,   207,  -215,  -215,  -215,  -215,
      86,   237,   241,  -215,    16,   204,  -215,   994,  -215,  -215,
     236,     5,   994,   118,  -215,   244,   773,   980,  -215,   228,
     589,  -215,  -215,  -215,  -215,  -215,  1131,  -215,  -215,  -215,
     994,    -8,  -215,   231,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,   868,   980,   553,
    -215,   980,  1228,  -215,  -215,   233,  -215,   980,   980,   980,
     258,   661,   235,  -215,  -215,  -215,   240,   252,   103,   253,
    -215,  1007,  -215,  -215,  -215,  -215,  -215,   315,   317,   980,
     994,   994,   994,   994,   994,   994,   994,   994,   994,   994,
     994,   994,   994,   994,   994,   994,   994,   994,   980,  -215,
    -215,   517,  -215,  -215,   155,  -215,  1248,   908,   162,    95,
    -215,   171,  -215,  1314,  -215,   322,   980,  -215,  -215,  -215,
    -215,   175,  -215,    48,  -215,   242,  -215,  -215,    47,  -215,
     994,  -215,    19,  -215,   261,  -215,  -215,   209,   215,  -215,
     264,   265,   266,   268,   708,   749,  -215,  -215,  -215,  -215,
     994,   980,  -215,  -215,  -215,  -215,  -215,  -215,   146,   146,
     170,   170,   234,   234,   234,   234,   194,   194,   232,   186,
     189,   190,   270,   250,  -215,  -215,   273,   274,  -215,   269,
    -215,   171,  1289,   940,  -215,  -215,  -215,   280,   254,  -215,
     427,  -215,  -215,  -215,  -215,  -215,   980,  1007,  -215,   980,
    -215,   980,    79,    79,    79,   980,   749,   980,   952,  -215,
    -215,   994,  -215,  -215,  -215,  -215,   285,  -215,   284,  -215,
     980,  -215,  -215,  -215,   980,   289,   290,   297,  -215,  -215,
     293,   294,   295,    79,   296,  -215,  -215,  -215,    69,  -215,
     298,   301,    79,   292,    79,    79,  -215,    79,   980,   303,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   144,   115,   100,   101,   102,   103,   104,   106,   107,
     108,   111,   112,   109,   110,   140,   141,   105,   119,   120,
       0,     0,   151,   223,     0,    90,    92,   113,     0,   114,
      94,     0,   143,     0,     0,   219,   220,   222,   135,     0,
       0,   155,   153,   152,   144,     0,    82,     0,    96,    98,
      91,    93,   118,     0,    95,     0,   199,     0,   228,     0,
       0,     0,   142,     1,   221,     0,   138,     0,   136,   145,
     156,   154,     0,     0,    83,   144,     0,     0,     0,    89,
       0,   225,     0,     0,   125,     0,   121,     0,   127,     2,
       3,     6,     0,     5,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,   195,     8,    18,    32,
      21,    34,    38,    41,    44,    49,    52,    54,    56,    58,
      60,    62,    64,    80,     0,   201,   186,   187,     0,     0,
     188,   189,   190,   191,   151,    98,   200,   227,   165,   150,
     164,     0,   157,   159,     0,     2,   147,     0,    32,    81,
       0,     0,     0,     0,   133,     0,     2,     0,   181,     0,
       0,    84,   226,    97,    99,   224,     0,   124,   117,   122,
       0,     0,   128,   130,   126,    14,    15,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
      69,     0,     0,    19,    20,     0,   194,     0,     0,     0,
       0,     0,     0,   215,   216,   217,     0,     0,   167,     0,
      26,     8,    27,    28,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   204,
     197,     0,   196,   202,     0,   161,     0,     0,   151,   169,
     163,   170,   148,     0,   149,     0,     0,   146,   134,   139,
     137,     0,   184,     0,    87,     0,   116,   131,     0,   123,
       0,    10,     0,    16,     0,   192,    65,     0,     0,   193,
       0,     0,     0,     0,     0,     0,   214,   218,     7,   168,
       0,     0,    13,    12,    68,    35,    36,    37,    39,    40,
      42,    43,    47,    48,    45,    46,    50,    51,    53,    55,
      57,    59,    61,     0,   198,   177,     0,     0,   173,     0,
     162,   171,     0,     0,   158,   160,   166,     0,     0,    85,
       0,   182,    86,   129,   132,    11,     0,     9,    22,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      66,     0,   178,   172,   174,   179,     0,   175,     0,     9,
       0,   183,   185,    17,     0,     0,     0,   205,   207,   208,
       0,     0,     0,     0,     0,    63,   180,   176,     0,    67,
       0,     0,     0,     0,     0,     0,   211,     0,     0,     0,
      23,    25,   206,   209,   210,   213,   212,    88
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,   281,  -215,  -215,   -56,  -215,   -90,    50,    51,   -11,
      66,   158,   159,   173,   156,   178,  -215,   -55,   -70,  -112,
     -95,  -137,    29,     1,  -215,   326,  -215,   109,  -215,  -215,
     341,   -81,    -3,  -215,   127,  -215,   361,   300,    -6,   -13,
      42,    -5,  -215,  -214,  -215,   164,  -215,  -215,  -188,   200,
     -66,    58,   -53,  -215,   -31,    73,   291,  -202,  -215,  -215,
    -215,  -215,  -215,   401,  -215
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   117,   118,   282,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   201,
     134,   160,    56,    57,    47,    48,    25,    26,    27,    28,
      85,    86,    87,   181,   182,    29,    67,    68,    30,    31,
      32,    33,    43,   151,   152,   153,   154,   219,   260,   261,
     169,   273,   135,   136,   137,    59,   139,   140,   141,   142,
     143,    34,    35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      58,    24,   205,   168,   179,   158,   159,   229,    40,   295,
     168,    49,   216,   217,   174,    38,    41,    42,    81,   220,
     222,   223,   224,   225,   226,   269,    50,    51,   147,    23,
     299,    54,    76,    52,   247,    63,    24,    70,    71,    41,
      77,   227,   326,   277,   145,   172,    78,    88,     1,   210,
       1,   175,   163,   158,   158,   158,   158,   158,   158,    65,
     278,   150,    79,    44,    23,   145,    44,   222,   327,    60,
     164,    61,   272,   163,   183,    62,   279,    88,    88,    88,
     264,   177,    88,   345,   265,   184,   253,   346,   146,   255,
       1,   268,   357,   358,   254,   179,   248,    39,    69,   228,
     168,   158,    88,   284,   275,   218,   158,   159,    21,   301,
      21,   146,   290,   291,   292,    53,   340,    22,   366,    62,
     329,    66,    82,    21,   158,   159,    21,   283,   138,   180,
      45,   286,   162,   144,   341,    15,    16,   398,    41,    42,
     305,   306,   307,   344,    46,   259,   285,    46,   165,   256,
      21,   257,    83,   323,   381,   399,   258,    22,   256,   304,
     257,    22,    84,    75,    55,   330,   256,   146,   257,   202,
      88,   337,   203,    22,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,    84,    84,    84,   204,   368,    84,   253,   206,
      72,   158,   159,   207,    15,    16,    15,    16,   237,   238,
     359,    15,    16,   259,   185,   186,   230,    84,    73,    74,
     208,   231,   232,    21,   158,   159,   312,   313,   314,   315,
      22,   360,    22,   212,   332,   374,   333,    22,   170,   171,
     294,   233,   234,   209,   158,   372,   235,   236,   241,   242,
     211,   259,    41,    42,   375,   243,   376,   150,   338,   339,
     380,   213,   382,   384,   150,   183,   214,   197,   244,   266,
     245,   239,   240,   348,   349,   272,   373,   158,   159,   350,
     351,   185,   186,   308,   309,    84,   310,   311,   246,   249,
      80,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   262,   267,   372,   389,   158,   385,   316,   317,   263,
     271,   288,   274,   280,   293,   289,   298,   300,   302,   296,
     303,   377,   378,   379,   297,   336,   342,   347,   352,   353,
     354,   355,   361,   150,   197,   364,   198,   362,   363,   370,
      89,    90,    91,    92,    93,    94,   369,    95,    96,   386,
     387,   392,   396,   199,   200,   390,   391,   393,   394,   395,
     397,   402,   400,   404,   405,   401,   406,     2,     3,     4,
       5,     6,     7,     8,     9,    10,   403,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   407,    97,    98,
      99,   221,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   318,   321,   319,   173,   343,   109,   110,   111,   112,
     113,   114,    89,    90,    91,    92,    93,    94,   320,    95,
      96,   115,    55,   116,   176,   322,   161,   335,   388,   251,
     166,    90,    91,    92,    93,    94,    64,    95,    96,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   331,
      97,    98,    99,   270,   100,   101,   102,   103,   104,   105,
     106,   107,   108,     0,     0,     0,     0,     0,   109,   110,
     111,   112,   113,   114,    89,    90,    91,    92,    93,    94,
     108,    95,    96,   115,    55,   250,   109,   110,   111,   112,
     113,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,     0,     0,
      89,    90,    91,    92,    93,    94,     0,    95,    96,     0,
       0,     0,    97,    98,    99,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,     0,     0,     0,     0,
     109,   110,   111,   112,   113,   114,    89,    90,    91,    92,
      93,    94,     0,    95,    96,   115,    55,   252,    97,    98,
      99,     0,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     0,     0,     0,     0,     0,   109,   110,   111,   112,
     113,   114,   166,    90,    91,    92,    93,    94,     0,    95,
      96,   115,    55,   324,    97,    98,    99,     0,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     0,     0,     0,
       0,     0,   109,   110,   111,   112,   113,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   108,     0,     0,     0,     0,     0,   109,   110,
     111,   112,   113,   114,   166,    90,    91,    92,    93,    94,
       0,    95,    96,     0,   167,     0,     0,     0,     0,     0,
     166,    90,    91,    92,    93,    94,     0,    95,    96,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   166,    90,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,     0,   108,     0,     0,     0,     0,     0,
     109,   110,   111,   112,   113,   114,     0,     0,     0,     0,
     108,     0,     0,     0,     0,   115,   109,   110,   111,   112,
     113,   114,   166,    90,    91,    92,    93,    94,     0,    95,
      96,   215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,     0,     0,     0,     0,     0,   109,   110,   111,
     112,   113,   114,   185,   186,     0,     0,     0,     0,     0,
       0,     0,   356,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   108,     0,     0,     0,     0,     0,   109,   110,
     111,   112,   113,   114,   166,    90,    91,    92,    93,    94,
       0,    95,    96,   115,     0,     0,   197,     0,   198,   155,
      90,    91,    92,    93,    94,     0,    95,    96,     0,     0,
       0,     2,     0,     0,     0,     0,   200,     8,     9,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   166,    90,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,     0,   108,     0,     0,     0,     0,     0,
     109,   110,   111,   112,   113,   114,     0,     0,     0,   108,
       0,     0,   156,     0,     0,   109,   157,   111,   112,   113,
     114,   155,    90,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,   281,     0,     0,     0,     0,   109,   110,   111,
     112,   113,   114,   155,    90,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,   166,    90,    91,    92,    93,
      94,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,   108,     0,     0,   328,     0,     0,   109,   157,   111,
     112,   113,   114,   166,    90,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,   155,    90,    91,
      92,    93,    94,   108,    95,    96,   367,     0,     0,   109,
     157,   111,   112,   113,   114,   108,   383,     0,     0,     0,
       0,   109,   110,   111,   112,   113,   114,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,     0,     0,     0,
       0,     0,     1,   108,     0,     0,     0,     0,     0,   109,
     110,   111,   112,   113,   114,     0,     0,   108,     0,     0,
       0,     0,     0,   109,   157,   111,   112,   113,   114,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   148,
     200,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     8,     9,    10,
     149,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     2,     0,     0,     0,     0,     0,     8,     9,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,   178,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     2,     3,
       4,     5,     6,     7,     8,     9,    10,   276,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,   287,     0,     0,     0,     0,     0,     0,     2,     0,
       0,    80,     0,    55,     8,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     2,     0,
       0,     0,     0,    55,     8,     9,    10,     0,    11,    12,
      13,    14,     0,     0,    17,    18,    19,    20,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,   325,   257,     0,     0,     0,     0,    22,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,   365,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   334,     2,     3,     4,     5,     6,
       7,     8,     9,    10,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
      31,     0,    97,    73,    85,    61,    61,   119,    21,   211,
      80,    24,   107,   108,    80,     3,    22,    22,    49,   109,
     110,   111,   112,   113,   114,   162,    25,    26,    59,     0,
     218,    30,    45,     3,    19,     0,    35,    43,    43,    45,
      45,     9,   256,   180,    57,    76,    68,    53,     3,   102,
       3,    82,    68,   109,   110,   111,   112,   113,   114,    85,
      68,    60,    84,     3,    35,    78,     3,   157,   256,    63,
      86,    65,   167,    68,    87,    33,    84,    83,    84,    85,
      64,    84,    88,    64,    68,    88,   139,    68,    59,     3,
       3,    86,   294,   295,     3,   176,    81,    85,    64,    67,
     170,   157,   108,   198,   170,   108,   162,   162,    63,   221,
      63,    82,   207,   208,   209,    85,    68,    70,   332,    77,
     257,     3,    49,    63,   180,   180,    63,   197,    55,    82,
      70,   201,    83,    70,    86,    44,    45,    68,   144,   144,
     230,   231,   232,   280,    84,   150,   199,    84,     4,    63,
      63,    65,    85,   248,   356,    86,    70,    70,    63,   229,
      65,    70,    53,     3,    85,     3,    63,   138,    65,    63,
     176,   266,     3,    70,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,    83,    84,    85,     3,   333,    88,   251,    82,
      65,   257,   257,    63,    44,    45,    44,    45,    14,    15,
     300,    44,    45,   218,    10,    11,    70,   108,    83,    84,
      63,    75,    76,    63,   280,   280,   237,   238,   239,   240,
      70,   301,    70,     3,    63,   347,    65,    70,    83,    84,
     211,    71,    72,    63,   300,   340,    12,    13,    16,    17,
      63,   256,   258,   258,   349,    69,   351,   256,    83,    84,
     355,    84,   357,   358,   263,   278,    84,    63,    79,    65,
      80,    77,    78,    64,    65,   370,   346,   333,   333,    64,
      65,    10,    11,   233,   234,   176,   235,   236,    18,    84,
      83,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    64,    66,   398,   374,   361,   361,   241,   242,    68,
      66,   202,    84,    82,    56,    82,    64,    64,     3,    84,
       3,   352,   353,   354,    84,     3,    84,    66,    64,    64,
      64,    63,    82,   332,    63,    66,    65,    64,    64,    85,
       3,     4,     5,     6,     7,     8,    66,    10,    11,    64,
      66,    54,   383,    82,    83,    66,    66,    64,    64,    64,
      64,   392,    64,   394,   395,    64,   397,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    84,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    84,    51,    52,
      53,   110,    55,    56,    57,    58,    59,    60,    61,    62,
      63,   243,   246,   244,    78,   278,    69,    70,    71,    72,
      73,    74,     3,     4,     5,     6,     7,     8,   245,    10,
      11,    84,    85,    86,    83,   247,    65,   263,   370,   138,
       3,     4,     5,     6,     7,     8,    35,    10,    11,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,   259,
      51,    52,    53,   163,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,     3,     4,     5,     6,     7,     8,
      63,    10,    11,    84,    85,    86,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    84,    85,    86,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    84,    85,    86,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    85,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    84,    69,    70,    71,    72,
      73,    74,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    84,    -1,    -1,    63,    -1,    65,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    83,    36,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    63,
      -1,    -1,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      72,    73,    74,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    63,    10,    11,    66,    -1,    -1,    69,
      70,    71,    72,    73,    74,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,     3,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     3,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      64,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    86,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    86,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    83,    -1,    85,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    30,    -1,
      -1,    -1,    -1,    85,    36,    37,    38,    -1,    40,    41,
      42,    43,    -1,    -1,    46,    47,    48,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    -1,    -1,    -1,    -1,    70,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    64,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    63,    70,   109,   110,   113,   114,   115,   116,   122,
     125,   126,   127,   128,   148,   149,   150,   151,     3,    85,
     126,   125,   128,   129,     3,    70,    84,   111,   112,   126,
     110,   110,     3,    85,   110,    85,   109,   110,   141,   142,
      63,    65,   127,     0,   150,    85,     3,   123,   124,    64,
     125,   128,    65,    83,    84,     3,   126,   128,    68,    84,
      83,   141,   142,    85,   114,   117,   118,   119,   125,     3,
       4,     5,     6,     7,     8,    10,    11,    51,    52,    53,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    69,
      70,    71,    72,    73,    74,    84,    86,    88,    89,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   107,   139,   140,   141,   142,   143,
     144,   145,   146,   147,    70,   126,   109,   141,     3,    64,
     110,   130,   131,   132,   133,     3,    66,    70,    91,   104,
     108,   123,    83,    68,    86,     4,     3,    85,   105,   137,
      83,    84,   141,   112,   137,   141,   117,   119,    86,   118,
      82,   120,   121,   126,   119,    10,    11,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    63,    65,    82,
      83,   106,    63,     3,     3,   107,    82,    63,    63,    63,
     139,    63,     3,    84,    84,    84,   107,   107,   119,   134,
      93,    88,    93,    93,    93,    93,    93,     9,    67,   106,
      70,    75,    76,    71,    72,    12,    13,    14,    15,    77,
      78,    16,    17,    69,    79,    80,    18,    19,    81,    84,
      86,   143,    86,   139,     3,     3,    63,    65,    70,   128,
     135,   136,    64,    68,    64,    68,    65,    66,    86,   108,
     124,    66,   107,   138,    84,   137,    86,   108,    68,    84,
      82,    64,    90,   105,   107,   139,   105,     3,   114,    82,
     107,   107,   107,    56,   109,   144,    84,    84,    64,   135,
      64,   106,     3,     3,   105,    93,    93,    93,    94,    94,
      95,    95,    96,    96,    96,    96,    97,    97,    98,    99,
     100,   101,   102,   107,    86,    64,   130,   135,    66,   108,
       3,   136,    63,    65,    50,   132,     3,   107,    83,    84,
      68,    86,    84,   121,   108,    64,    68,    66,    64,    65,
      64,    65,    64,    64,    64,    63,    84,   144,   144,    93,
     105,    82,    64,    64,    66,    64,   130,    66,   108,    66,
      85,    86,   107,   105,   106,   107,   107,   141,   141,   141,
     107,   144,   107,    64,   107,   104,    64,    66,   138,   105,
      66,    66,    54,    64,    64,    64,   141,    64,    68,    86,
      64,    64,   141,    84,   141,   141,   141,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    93,    93,    94,    94,    94,    94,    95,    95,
      95,    96,    96,    96,    97,    97,    97,    97,    97,    98,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   105,   105,   105,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     107,   108,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   110,   110,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   113,   113,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   116,
     116,   117,   117,   118,   119,   119,   119,   119,   120,   120,
     121,   121,   121,   122,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   132,   132,   133,   133,   134,   134,   135,
     135,   135,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   137,   137,   137,   138,   138,   139,   139,   139,   139,
     139,   139,   140,   140,   140,   141,   141,   141,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   145,   146,   146,
     146,   146,   146,   146,   147,   147,   147,   147,   147,   148,
     149,   149,   150,   150,   151,   151,   151,   151,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     1,     3,     1,     2,
       2,     1,     4,     7,     4,     7,     2,     2,     2,     2,
       2,     2,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     4,     6,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     4,     6,     6,     5,    10,     3,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     2,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     3,     2,     1,     1,     3,     1,     2,     1,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     2,     3,     3,     4,     1,
       2,     1,     2,     1,     2,     5,     7,     5,     5,     7,
       7,     6,     7,     7,     3,     2,     2,     2,     3,     1,
       1,     2,     1,     1,     4,     3,     4,     3,     2
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
#line 53 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Variable(*(yyvsp[0].s));}
#line 1796 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 54 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new IntConst((yyvsp[0].n));}
#line 1802 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 55 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new CharConst((yyvsp[0].c));}
#line 1808 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 56 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new FloatConst((yyvsp[0].f));}
#line 1814 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 57 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new StringConst(*(yyvsp[0].s));}
#line 1820 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 58 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = (yyvsp[-1].ast_node);}
#line 1826 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 62 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new ArrayIndex();dynamic_cast<ArrayIndex *>(yyval.ast_node)->name = *(yyvsp[-3].s);dynamic_cast<ArrayIndex *>(yyval.ast_node)->index = dynamic_cast<Expression *>(yyvsp[-1].ast_node);}
#line 1832 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new FunctionCall(*(yyvsp[-2].s));}
#line 1838 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 64 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new FunctionCall(*(yyvsp[-3].s),dynamic_cast<ExprListPtr> (yyvsp[-1].ExprList));}
#line 1844 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 67 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new IncOp(*(yyvsp[-1].s));}
#line 1850 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 68 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new DecOp(*(yyvsp[-1].s));}
#line 1856 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 72 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ExprList) = new std::vector<Expression *>(); (yyval.ExprList)->push_back(dynamic_cast<Expression *>(yyvsp[0].ast_node));}
#line 1862 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 73 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ExprList)->push_back(dynamic_cast<Expression *>(yyvsp[0].ast_node));}
#line 1868 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 78 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new IncOp(*(yyvsp[0].s));}
#line 1874 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 79 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new DecOp(*(yyvsp[0].s));}
#line 1880 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 80 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = (yyvsp[0].ast_node);}
#line 1886 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 81 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new SizeOf(*(yyvsp[-1].s));}
#line 1892 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 82 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new SizeOf(*(yyvsp[-4].s));dynamic_cast<SizeOf *>(yyval.ast_node)->Index = 1;}
#line 1898 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 83 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new SizeOf(dynamic_cast<Type *>(yyvsp[-1].ast_node));}
#line 1904 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 84 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new SizeOf(dynamic_cast<Type *>(yyvsp[-4].ast_node)); dynamic_cast<SizeOf *>(yyval.ast_node)->elements = dynamic_cast<Expression *>(yyvsp[-2].ast_node);}
#line 1910 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 88 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new UnaryOp(dynamic_cast<Expression *>(yyvsp[0].ast_node),"&");}
#line 1916 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 89 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new UnaryOp(dynamic_cast<Expression *>(yyvsp[0].ast_node),"*");}
#line 1922 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 90 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new UnaryOp(dynamic_cast<Expression *>(yyvsp[0].ast_node),"+");}
#line 1928 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 91 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new UnaryOp(dynamic_cast<Expression *>(yyvsp[0].ast_node),"-");}
#line 1934 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 92 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new UnaryOp(dynamic_cast<Expression *>(yyvsp[0].ast_node),"~");}
#line 1940 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 93 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new UnaryOp(dynamic_cast<Expression *>(yyvsp[0].ast_node),"!");}
#line 1946 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 98 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = (yyvsp[0].ast_node);}
#line 1952 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 103 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new MultiplicativeOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"*");}
#line 1958 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 104 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new MultiplicativeOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"/");}
#line 1964 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 105 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new MultiplicativeOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"%");}
#line 1970 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 110 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new AdditiveOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"+");}
#line 1976 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 111 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new AdditiveOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"-");}
#line 1982 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 116 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new ShiftOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"<<");}
#line 1988 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new ShiftOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),">>");}
#line 1994 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 122 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new RelationalOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"<");}
#line 2000 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 123 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new RelationalOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),">");}
#line 2006 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 124 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new RelationalOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"<=");}
#line 2012 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 125 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new RelationalOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),">=");}
#line 2018 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 130 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new RelationalOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"==");}
#line 2024 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 131 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new RelationalOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"!=");}
#line 2030 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 136 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new BitwiseOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"&");}
#line 2036 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 141 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new BitwiseOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"^");}
#line 2042 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 146 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new BitwiseOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"|");}
#line 2048 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 151 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new LogicalOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"&&");}
#line 2054 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 156 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new LogicalOp(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node),"||");}
#line 2060 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 161 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new TernaryOp(dynamic_cast<Expression *>(yyvsp[-4].ast_node),dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Expression *>(yyvsp[0].ast_node));}
#line 2066 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 166 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new AssignmentExpr(*(yyvsp[-2].s),(yyvsp[-1].c),dynamic_cast<Expression *> (yyvsp[0].ast_node));}
#line 2072 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 167 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new AssignmentExpr(dynamic_cast<Expression *>(yyvsp[-2].ast_node),(yyvsp[-1].c),dynamic_cast<Expression *> (yyvsp[0].ast_node));}
#line 2078 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 168 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new AssignmentExpr(*(yyvsp[-5].s),(yyvsp[-1].c),dynamic_cast<Expression *> (yyvsp[0].ast_node),dynamic_cast<Expression *>(yyvsp[-3].ast_node));}
#line 2084 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 173 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.c) = '=';}
#line 2090 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 174 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.c) = '*';}
#line 2096 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 175 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.c) = '/';}
#line 2102 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 176 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.c) = '%';}
#line 2108 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 177 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.c) = '+';}
#line 2114 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 178 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.c) = '-';}
#line 2120 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 179 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.c) = '<';}
#line 2126 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 180 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.c) = '>';}
#line 2132 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 181 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.c) = '&';}
#line 2138 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 182 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.c) = '^';}
#line 2144 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 183 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.c) = '|';}
#line 2150 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 196 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Declaration(*(yyvsp[-1].s));dynamic_cast<Declaration *>(yyval.ast_node)->type = dynamic_cast<Type *>(yyvsp[-2].ast_node);}
#line 2156 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 197 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Declaration(*(yyvsp[-1].s));dynamic_cast<Declaration *>(yyval.ast_node)->type = dynamic_cast<Type *>(yyvsp[-3].ast_node);dynamic_cast<Declaration *>(yyval.ast_node)->type->pointer = 1;}
#line 2162 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 198 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Declaration(*(yyvsp[-4].s));dynamic_cast<Declaration *>(yyval.ast_node)->type = dynamic_cast<Type *>(yyvsp[-5].ast_node);dynamic_cast<Declaration *>(yyval.ast_node)->type->array = 1;dynamic_cast<Declaration *>(yyval.ast_node)->type->arrSize = (yyvsp[-2].n);dynamic_cast<Declaration *>(yyval.ast_node)->ArraySize = (yyvsp[-2].n);}
#line 2168 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 199 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Declaration(*(yyvsp[-3].s));dynamic_cast<Declaration *>(yyval.ast_node)->type = dynamic_cast<Type *>(yyvsp[-5].ast_node);dynamic_cast<Declaration *>(yyval.ast_node)->type->pointer = 1;dynamic_cast<Declaration *>(yyval.ast_node)->initializer = dynamic_cast<Expression *>(yyvsp[-1].ast_node);}
#line 2174 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 200 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Declaration(*(yyvsp[-3].s));dynamic_cast<Declaration *>(yyval.ast_node)->type = dynamic_cast<Type *>(yyvsp[-4].ast_node);dynamic_cast<Declaration *>(yyval.ast_node)->initializer = dynamic_cast<Expression *>(yyvsp[-1].ast_node);}
#line 2180 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 201 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Declaration(*(yyvsp[-8].s));dynamic_cast<Declaration *>(yyval.ast_node)->type = dynamic_cast<Type *>(yyvsp[-9].ast_node);dynamic_cast<Declaration *>(yyval.ast_node)->type->array = 1;dynamic_cast<Declaration *>(yyval.ast_node)->type->arrSize = (yyvsp[-6].n);dynamic_cast<Declaration *>(yyval.ast_node)->ArraySize = (yyvsp[-6].n);dynamic_cast<Declaration *>(yyval.ast_node)->initList = dynamic_cast<ExprListPtr>(yyvsp[-2].ExprList);}
#line 2186 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 202 "version2/src/c_parser.y" /* yacc.c:1646  */
    {}
#line 2192 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 215 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.DeclList) = new std::vector<Declaration *>; dynamic_cast<DeclListPtr>(yyval.DeclList)->push_back(dynamic_cast<Declaration *>(yyvsp[0].ast_node));}
#line 2198 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 216 "version2/src/c_parser.y" /* yacc.c:1646  */
    {dynamic_cast<DeclListPtr>(yyval.DeclList)->push_back(dynamic_cast<Declaration *>(yyvsp[0].ast_node));}
#line 2204 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 220 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = (yyvsp[0].ast_node);}
#line 2210 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 233 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Type("void");}
#line 2216 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 234 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Type("char");}
#line 2222 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 236 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Type("int");}
#line 2228 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 237 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Type("float");}
#line 2234 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 238 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Type("double");}
#line 2240 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 239 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Type("signed");}
#line 2246 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 240 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Type("unsigned");}
#line 2252 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 307 "version2/src/c_parser.y" /* yacc.c:1646  */
    {{(yyval.ast_node) = (yyvsp[0].ast_node);}}
#line 2258 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 311 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Declaration(*((yyvsp[0].s)));}
#line 2264 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 312 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = (yyvsp[-1].ast_node);}
#line 2270 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 315 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new FunctionDecl(dynamic_cast<Declaration *>(yyvsp[-3].ast_node));dynamic_cast<FunctionDecl *>(yyval.ast_node)->ParamScope = (dynamic_cast<Scope *>(yyvsp[-1].ast_node));}
#line 2276 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 316 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = dynamic_cast<FunctionDecl *>(yyvsp[-3].ast_node);}
#line 2282 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 317 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new FunctionDecl(dynamic_cast<Declaration *>(yyvsp[-2].ast_node));}
#line 2288 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 334 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = (yyvsp[0].ast_node);}
#line 2294 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 339 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Scope(); dynamic_cast<Scope *>(yyval.ast_node)->MergeDecl(dynamic_cast<Declaration *>(yyvsp[0].ast_node));}
#line 2300 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 340 "version2/src/c_parser.y" /* yacc.c:1646  */
    {dynamic_cast<Scope *>(yyval.ast_node)->MergeDecl(dynamic_cast<Declaration *>(yyvsp[0].ast_node));}
#line 2306 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 344 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Declaration(*((yyvsp[0].s)));dynamic_cast<Declaration *>(yyval.ast_node)->type = dynamic_cast<Type *>(yyvsp[-1].ast_node);}
#line 2312 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 345 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Declaration(*((yyvsp[0].s)));dynamic_cast<Declaration *>(yyval.ast_node)->type = dynamic_cast<Type *>(yyvsp[-2].ast_node);dynamic_cast<Declaration *>(yyval.ast_node)->type->pointer = 1;}
#line 2318 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 385 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ExprList) = new std::vector<Expression *>; dynamic_cast<ExprListPtr>(yyval.ExprList)->push_back(dynamic_cast<Expression *>(yyvsp[0].ast_node));}
#line 2324 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 386 "version2/src/c_parser.y" /* yacc.c:1646  */
    {dynamic_cast<ExprListPtr>(yyval.ExprList)->push_back(dynamic_cast<Expression *>(yyvsp[0].ast_node));}
#line 2330 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 391 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new CompoundStatement(dynamic_cast<Scope *> (yyvsp[0].ast_node));}
#line 2336 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 400 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new CaseStatement(dynamic_cast<Expression *> (yyvsp[-1].ast_node));}
#line 2342 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 401 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new CaseStatement();}
#line 2348 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 405 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) =  new Scope();}
#line 2354 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 406 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Scope();dynamic_cast<Scope *>(yyval.ast_node)->Statements = dynamic_cast<StatementListPtr>(yyvsp[-1].StatementList);}
#line 2360 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 407 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Scope();dynamic_cast<Scope *>(yyval.ast_node)->Declarations = dynamic_cast<DeclListPtr>(yyvsp[-1].DeclList);}
#line 2366 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 408 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Scope();dynamic_cast<Scope *>(yyval.ast_node)->Declarations = dynamic_cast<DeclListPtr>(yyvsp[-2].DeclList);dynamic_cast<Scope *>(yyval.ast_node)->Statements = dynamic_cast<StatementListPtr>(yyvsp[-1].StatementList);}
#line 2372 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 412 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.DeclList) = new std::vector<Declaration *>; dynamic_cast<DeclListPtr>(yyval.DeclList)->push_back(dynamic_cast<Declaration *>(yyvsp[0].ast_node));}
#line 2378 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 413 "version2/src/c_parser.y" /* yacc.c:1646  */
    {dynamic_cast<DeclListPtr>(yyval.DeclList)->push_back(dynamic_cast<Declaration *>(yyvsp[0].ast_node));}
#line 2384 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 417 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.StatementList) = new std::vector<Statement *>; dynamic_cast<StatementListPtr>(yyval.StatementList)->push_back(dynamic_cast<Statement *>(yyvsp[0].ast_node));}
#line 2390 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 418 "version2/src/c_parser.y" /* yacc.c:1646  */
    {dynamic_cast<StatementListPtr>(yyval.StatementList)->push_back(dynamic_cast<Statement *>(yyvsp[0].ast_node));}
#line 2396 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 423 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new ExprStatement(dynamic_cast<Expression *>(yyvsp[-1].ast_node));}
#line 2402 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 427 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new IfElseStatement(dynamic_cast<Expression *>(yyvsp[-2].ast_node), dynamic_cast<Scope *>(yyvsp[0].ast_node));}
#line 2408 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 428 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new IfElseStatement(dynamic_cast<Expression *>(yyvsp[-4].ast_node), dynamic_cast<Scope *>(yyvsp[-2].ast_node),dynamic_cast<Scope *>(yyvsp[0].ast_node));}
#line 2414 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 429 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new SwitchStatement(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Scope *>(yyvsp[0].ast_node)); }
#line 2420 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 433 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new WhileStatement(dynamic_cast<Expression *>(yyvsp[-2].ast_node),dynamic_cast<Scope *>(yyvsp[0].ast_node));}
#line 2426 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 435 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new ForStatement(dynamic_cast<Declaration *> (yyvsp[-4].ast_node), dynamic_cast<Statement *> (yyvsp[-2].ast_node), dynamic_cast<Scope *> (yyvsp[0].ast_node));}
#line 2432 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 436 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new ForStatement(dynamic_cast<Statement *> (yyvsp[-3].ast_node), dynamic_cast<Statement *> (yyvsp[-2].ast_node), dynamic_cast<Scope *> (yyvsp[0].ast_node));}
#line 2438 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 437 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new ForStatement(dynamic_cast<Statement *> (yyvsp[-4].ast_node), dynamic_cast<Statement *> (yyvsp[-3].ast_node),dynamic_cast<Expression *> (yyvsp[-2].ast_node), dynamic_cast<Scope *> (yyvsp[0].ast_node));}
#line 2444 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 438 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new ForStatement(dynamic_cast<Declaration *> (yyvsp[-4].ast_node), dynamic_cast<Statement *> (yyvsp[-3].ast_node), dynamic_cast<Expression *> (yyvsp[-2].ast_node),dynamic_cast<Scope *> (yyvsp[0].ast_node));}
#line 2450 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 443 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new ContinueStatement();}
#line 2456 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 444 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new BreakStatement();}
#line 2462 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 446 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new ReturnStatement(dynamic_cast<Expression *>(yyvsp[-1].ast_node));}
#line 2468 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 449 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Root(dynamic_cast<GlobalScope *>(yyvsp[0].ast_node)); Prog_Root = dynamic_cast<Root *>(yyval.ast_node);}
#line 2474 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 452 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new GlobalScope(); (dynamic_cast<GlobalScope *>(yyval.ast_node))->mergeNode((yyvsp[0].ast_node)); }
#line 2480 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 453 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(dynamic_cast<GlobalScope *>(yyval.ast_node))->mergeNode((yyvsp[0].ast_node));}
#line 2486 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 457 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = (yyvsp[0].ast_node);}
#line 2492 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 458 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = (yyvsp[0].ast_node);}
#line 2498 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 463 "version2/src/c_parser.y" /* yacc.c:1646  */
    { (yyval.ast_node) = new Function(dynamic_cast<FunctionDecl *>(yyvsp[-1].ast_node),dynamic_cast<Type *>(yyvsp[-2].ast_node),dynamic_cast<Scope *>(yyvsp[0].ast_node));}
#line 2504 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 464 "version2/src/c_parser.y" /* yacc.c:1646  */
    {(yyval.ast_node) = new Function(dynamic_cast<FunctionDecl *>(yyvsp[-1].ast_node),dynamic_cast<Type *>(yyvsp[-3].ast_node),dynamic_cast<Scope *>(yyvsp[0].ast_node));dynamic_cast<Function *>(yyval.ast_node)->retPointer = 1;}
#line 2510 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2514 "version2/src/c_parser.tab.c" /* yacc.c:1646  */
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
#line 469 "version2/src/c_parser.y" /* yacc.c:1906  */


Root *Prog_Root;
Root *parseAST(){
	Prog_Root = 0;
	yyparse();
	return Prog_Root;
}
