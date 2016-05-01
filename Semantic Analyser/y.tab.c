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
#line 1 "parse.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "symbol_table.h"
extern FILE *yyin;
extern FILE *yyout;
extern int yylineno;
extern int column;
extern int line;
extern int cnt;
extern char *yytext,tempid[100];
int temp,err=0,err1=0,tchk=3;

install()
{
	symrec *s;
	s = getsym (tempid);
	if (s == 0)
	s = putsym (tempid,temp);
	else
	{
		printf( "\nERROR: Semantic error at Pos : %d : %d : %s is already defined as %s\n",line,cnt,s->name,s->type );
		err1=1;
		exit(0);
	}
}

int context_check()
{
	symrec *s;
	s = getsym(tempid);
	if (s == 0 )
	{
		printf( "\nERROR: Semantic error at Pos : %d : %d : %s is an undeclared identifier\n",line,cnt,tempid);//exit(0);
		err1=1;
		exit(0);
	}
	else
	{
        if(strcmp(s->type,"void")==0)
            return(1);
        if(strcmp(s->type,"int")==0)
            return(3);
        if(strcmp(s->type,"float")==0)
            return(4);
        if(strcmp(s->type,"char")==0)
	        return(2);
	}
}

type_err(int t1,int t2)
{
	if(t2 == 0)
		t2 = tchk;
	if(t1!=t2)
	{
		printf( "\nERROR: Semantic error : Type mismatch!\n\n");
		err1=1;
		exit(0);
	}
	tchk=3;
}


#line 132 "y.tab.c" /* yacc.c:339  */

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
    CONSTANT = 259,
    FLCONSTANT = 260,
    STRING_LITERAL = 261,
    SIZEOF = 262,
    PTR_OP = 263,
    INC_OP = 264,
    DEC_OP = 265,
    LEFT_OP = 266,
    RIGHT_OP = 267,
    LE_OP = 268,
    GE_OP = 269,
    EQ_OP = 270,
    NE_OP = 271,
    AND_OP = 272,
    OR_OP = 273,
    MUL_ASSIGN = 274,
    DIV_ASSIGN = 275,
    MOD_ASSIGN = 276,
    ADD_ASSIGN = 277,
    SUB_ASSIGN = 278,
    LEFT_ASSIGN = 279,
    RIGHT_ASSIGN = 280,
    AND_ASSIGN = 281,
    XOR_ASSIGN = 282,
    OR_ASSIGN = 283,
    TYPE_NAME = 284,
    SINGLE = 285,
    PRINTF = 286,
    SCANF = 287,
    TYPEDEF = 288,
    EXTERN = 289,
    STATIC = 290,
    AUTO = 291,
    REGISTER = 292,
    CHAR = 293,
    SHORT = 294,
    INT = 295,
    LONG = 296,
    SIGNED = 297,
    UNSIGNED = 298,
    FLOAT = 299,
    DOUBLE = 300,
    CONST = 301,
    VOLATILE = 302,
    VOID = 303,
    STRUCT = 304,
    UNION = 305,
    ENUM = 306,
    ELLIPSIS = 307,
    CASE = 308,
    DEFAULT = 309,
    IF = 310,
    ELSE = 311,
    SWITCH = 312,
    WHILE = 313,
    DO = 314,
    FOR = 315,
    GOTO = 316,
    CONTINUE = 317,
    BREAK = 318,
    RETURN = 319,
    LOWER_THAN_ELSE = 320
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define FLCONSTANT 260
#define STRING_LITERAL 261
#define SIZEOF 262
#define PTR_OP 263
#define INC_OP 264
#define DEC_OP 265
#define LEFT_OP 266
#define RIGHT_OP 267
#define LE_OP 268
#define GE_OP 269
#define EQ_OP 270
#define NE_OP 271
#define AND_OP 272
#define OR_OP 273
#define MUL_ASSIGN 274
#define DIV_ASSIGN 275
#define MOD_ASSIGN 276
#define ADD_ASSIGN 277
#define SUB_ASSIGN 278
#define LEFT_ASSIGN 279
#define RIGHT_ASSIGN 280
#define AND_ASSIGN 281
#define XOR_ASSIGN 282
#define OR_ASSIGN 283
#define TYPE_NAME 284
#define SINGLE 285
#define PRINTF 286
#define SCANF 287
#define TYPEDEF 288
#define EXTERN 289
#define STATIC 290
#define AUTO 291
#define REGISTER 292
#define CHAR 293
#define SHORT 294
#define INT 295
#define LONG 296
#define SIGNED 297
#define UNSIGNED 298
#define FLOAT 299
#define DOUBLE 300
#define CONST 301
#define VOLATILE 302
#define VOID 303
#define STRUCT 304
#define UNION 305
#define ENUM 306
#define ELLIPSIS 307
#define CASE 308
#define DEFAULT 309
#define IF 310
#define ELSE 311
#define SWITCH 312
#define WHILE 313
#define DO 314
#define FOR 315
#define GOTO 316
#define CONTINUE 317
#define BREAK 318
#define RETURN 319
#define LOWER_THAN_ELSE 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 313 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1348

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  353

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     2,     2,     2,    79,    72,     2,
      66,    67,    73,    74,    71,    75,    70,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    85,    87,
      80,    86,    81,    84,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,    83,    89,    76,     2,     2,     2,
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
      65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    87,    87,    88,    89,    90,    91,    95,    96,    97,
      98,    99,   100,   101,   102,   106,   107,   111,   112,   113,
     114,   115,   116,   120,   121,   122,   123,   124,   125,   129,
     130,   134,   135,   136,   137,   141,   142,   143,   147,   148,
     149,   153,   154,   155,   156,   157,   161,   162,   163,   167,
     168,   172,   173,   177,   178,   182,   183,   187,   188,   192,
     193,   197,   198,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   216,   217,   221,   225,   226,   230,
     231,   232,   233,   234,   235,   239,   240,   244,   245,   249,
     250,   251,   252,   253,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   272,   273,   274,   278,
     279,   283,   284,   288,   292,   293,   294,   295,   299,   300,
     304,   305,   306,   310,   311,   312,   316,   317,   321,   322,
     326,   327,   331,   332,   336,   337,   338,   339,   340,   341,
     342,   346,   347,   348,   349,   353,   354,   359,   360,   364,
     365,   369,   370,   371,   375,   376,   380,   381,   385,   386,
     387,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     403,   404,   405,   409,   410,   414,   415,   416,   417,   418,
     419,   423,   424,   425,   429,   430,   431,   432,   436,   437,
     441,   442,   446,   447,   451,   453,   454,   458,   459,   460,
     461,   465,   466,   467,   468,   469,   473,   474,   478,   479,
     483,   484,   485,   486,   489
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT", "FLCONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "SINGLE", "PRINTF", "SCANF", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "LOWER_THAN_ELSE",
  "'('", "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'",
  "'='", "';'", "'{'", "'}'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
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
     315,   316,   317,   318,   319,   320,    40,    41,    91,    93,
      46,    44,    38,    42,    43,    45,   126,    33,    47,    37,
      60,    62,    94,   124,    63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -218

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-218)))

#define YYTABLE_NINF -88

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1088,   -61,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,     3,    45,   -17,  -218,     6,  1297,  1297,  -218,
       4,  -218,  1297,   492,   -43,    16,  1037,  -218,  -218,  -218,
     -14,    31,    19,  -218,  -218,   -17,  -218,   -36,  -218,   279,
    -218,  -218,    11,   401,  -218,   339,  -218,     6,  -218,   492,
     967,   766,   -43,  -218,  -218,    31,   -20,    -9,  -218,  -218,
    -218,  -218,    45,  -218,   670,  -218,   492,   401,   401,   520,
    -218,    15,   401,    22,  -218,  -218,  -218,   901,   976,   976,
     988,    34,    59,    75,    80,   653,    92,   101,    95,   114,
     691,   778,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,   129,   332,   988,  -218,    -3,   135,   205,    33,   204,
     139,    70,   140,   212,    -1,  -218,  -218,   -22,  -218,  -218,
    -218,   428,   541,  -218,  -218,  -218,  -218,   146,  -218,  -218,
    -218,  -218,    21,   167,   165,  -218,    35,  -218,  -218,  -218,
    -218,   170,    38,   988,    31,  -218,  -218,   670,  -218,  -218,
    -218,  1173,  -218,  -218,  -218,   988,   -16,  -218,   156,  -218,
     653,   778,  -218,   988,  -218,  -218,   164,   653,   988,   988,
     988,   194,   728,   168,  -218,  -218,  -218,   -10,    63,    81,
     187,   253,  -218,  -218,   853,   988,   255,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,   988,  -218,
     988,   988,   988,   988,   988,   988,   988,   988,   988,   988,
     988,   988,   988,   988,   988,   988,   988,   988,   988,   988,
    -218,  -218,   578,  -218,  -218,  1137,   865,  -218,    54,  -218,
     117,  -218,  1273,  -218,   257,  -218,  -218,  -218,  -218,  -218,
      39,  -218,  -218,    15,  -218,   988,  -218,   195,   653,  -218,
      84,    86,   113,   201,   728,  -218,  -218,  -218,  1197,   134,
    -218,   988,  -218,  -218,   123,  -218,   122,  -218,  -218,  -218,
    -218,  -218,    -3,    -3,   135,   135,   205,   205,   205,   205,
      33,    33,   204,   139,    70,   140,   212,    65,  -218,  -218,
    -218,   203,   208,  -218,   192,   117,  1238,   877,  -218,  -218,
    -218,   616,  -218,  -218,  -218,  -218,  -218,   653,   653,   653,
     988,   889,  -218,  -218,   988,  -218,   988,  -218,  -218,  -218,
    -218,   214,  -218,   202,  -218,  -218,   216,  -218,  -218,   125,
     653,   141,  -218,  -218,  -218,  -218,   653,   196,  -218,   653,
    -218,  -218,  -218
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   134,   105,    89,    90,    91,    92,    93,    95,
      96,    97,    98,   101,   102,    99,   100,   130,   131,    94,
     109,   110,     0,     0,   141,   209,     0,    79,    81,   103,
       0,   104,    83,     0,   133,     0,     0,   206,   208,   214,
     125,     0,     0,   145,   143,   142,    77,     0,    85,     0,
      80,    82,   108,     0,    84,     0,   188,     0,   213,     0,
       0,     0,   132,     1,   207,     0,   128,     0,   126,   135,
     146,   144,     0,    78,     0,   211,     0,     0,   115,     0,
     111,     0,   117,     2,     4,     3,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,   192,   184,
       7,    17,    29,     0,    31,    35,    38,    41,    46,    49,
      51,    53,    55,    57,    59,    61,    74,     0,   190,   175,
     176,     0,     0,   177,   178,   179,   180,    87,   189,   212,
     154,   140,   153,     0,   147,   149,     0,     2,   137,    29,
      76,     0,     0,     0,     0,   123,    86,     0,   170,    88,
     210,     0,   114,   107,   112,     0,     0,   118,   120,   116,
       0,     0,    21,     0,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,   202,   203,   204,     0,     0,   156,
       0,     0,    13,    14,     0,     0,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    63,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   186,     0,   185,   191,     0,     0,   151,   158,   152,
     159,   138,     0,   139,     0,   136,   124,   129,   127,   173,
       0,   106,   121,     0,   113,     0,   181,     0,     0,   183,
       0,     0,     0,     0,     0,   201,   205,     6,     0,   158,
     157,     0,    12,     9,     0,    15,     0,    11,    62,    32,
      33,    34,    36,    37,    39,    40,    44,    45,    42,    43,
      47,    48,    50,    52,    54,    56,    58,     0,    75,   187,
     166,     0,     0,   162,     0,   160,     0,     0,   148,   150,
     155,     0,   171,   119,   122,    22,   182,     0,     0,     0,
       0,     0,    30,    10,     0,     8,     0,   167,   161,   163,
     168,     0,   164,     0,   172,   174,   194,   196,   197,     0,
       0,     0,    16,    60,   169,   165,     0,     0,   199,     0,
     195,   198,   200
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -218,  -218,  -218,  -218,   -50,  -218,   -68,    17,    28,     8,
      25,    61,    64,    60,    67,    62,  -218,   -57,   -73,  -218,
     -47,   -48,    14,     0,  -218,   215,  -218,   136,  -218,  -218,
     213,   -64,   -70,  -218,    41,  -218,   226,   142,   200,   -13,
     -32,    -2,  -218,   -58,  -218,    56,  -218,   128,  -122,  -217,
    -152,  -218,   -54,  -218,    36,     9,   169,  -166,  -218,  -218,
    -218,  -218,   266,  -218
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   110,   111,   274,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   208,
     127,   151,    56,    57,    47,    48,    27,    28,    29,    30,
      79,    80,    81,   166,   167,    31,    67,    68,    32,    33,
      34,    35,    45,   301,   144,   145,   146,   190,   302,   240,
     159,   250,   128,   129,   130,    59,   132,   133,   134,   135,
     136,    36,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,   158,   143,    62,   150,   249,    40,    52,   162,     2,
      42,   149,   169,    49,    25,   164,   264,   227,     2,     2,
     239,   305,    44,    60,     2,    61,    39,    50,    51,    17,
      18,   189,    54,   150,    66,    72,    26,   172,   174,   175,
     149,   181,   176,    71,   137,   209,   217,   218,     2,   229,
      25,    73,   305,   187,   188,   253,    24,     2,    76,   137,
     142,   229,   154,   149,   131,   230,   153,   270,   168,    58,
     210,   254,    23,   138,    65,   211,   212,   266,   234,    24,
     155,    23,    23,   228,   158,    75,    69,   235,    24,   236,
     138,    41,    53,    46,    24,   139,   150,   164,   321,    77,
     165,   189,   243,   149,   183,   247,   244,   170,   150,   154,
     311,    23,   160,   219,   220,   149,   256,   252,    24,   177,
     235,   275,   236,   259,   188,   178,   188,   246,   312,   237,
     267,   260,   261,   262,   229,   278,   229,   191,   192,   193,
     238,   179,   279,   280,   281,   138,   180,   268,   276,   236,
     326,   317,   224,   318,    24,   229,   298,   229,   182,   335,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   234,   150,
     319,   297,   184,   306,   229,   307,   149,   269,   304,    78,
     323,   325,   347,   229,   324,   194,   229,   195,   150,   196,
     268,   185,   236,   322,   316,   149,    62,   314,   349,   213,
     214,   223,   229,    78,    78,    78,   215,   216,    78,   221,
     222,   149,    42,   225,    43,   286,   287,   288,   289,   226,
     282,   283,    74,   238,   241,   142,   242,    78,   158,   245,
     168,   255,   142,   284,   285,    70,   290,   291,   331,   258,
     150,   342,   263,    82,   271,   265,   272,   149,   277,   333,
     310,   329,   315,   336,   337,   338,   269,   320,   142,   343,
     327,   345,   346,   339,   341,   328,   149,    82,    82,    82,
       1,   344,    82,   351,   292,   294,   348,   156,   293,   296,
     161,   152,   350,   295,   313,   352,   248,    78,   309,   257,
     232,    82,    64,     0,     0,     0,   142,    78,     3,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,    83,    84,    85,    86,    87,     0,    88,    89,
     -87,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,    82,     0,     0,     0,    74,   -87,    55,     3,     0,
       0,    82,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    90,    91,    92,     0,    93,    94,    95,    96,
      97,    98,    99,   100,     0,   101,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     0,   207,     0,
       0,     0,     0,     0,     0,     0,   108,    55,   109,     1,
       3,    83,    84,    85,    86,    87,     0,    88,    89,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     3,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    90,    91,    92,     0,    93,    94,    95,    96,    97,
      98,    99,   100,     1,   101,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   108,    55,   231,     0,     0,
       0,     3,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    83,    84,    85,    86,    87,     3,
      88,    89,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    83,    84,    85,    86,    87,     0,    88,    89,     0,
       0,     0,     0,     0,    90,    91,    92,     0,    93,    94,
      95,    96,    97,    98,    99,   100,     0,   101,     0,   163,
       0,     0,     0,   102,   103,   104,   105,   106,   107,   147,
      84,    85,    86,    87,     0,    88,    89,     0,   108,    55,
     233,    90,    91,    92,     0,    93,    94,    95,    96,    97,
      98,    99,   100,     0,   101,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,    83,    84,    85,    86,
      87,     0,    88,    89,     0,   108,    55,   299,     0,     0,
       0,     0,     0,   147,    84,    85,    86,    87,     0,    88,
      89,     0,   101,     0,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,   147,    84,    85,    86,    87,     0,
      88,    89,     0,     0,   157,   334,    90,    91,    92,     0,
      93,    94,    95,    96,    97,    98,    99,   100,     0,   101,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   147,    84,    85,    86,    87,   101,    88,    89,     0,
     108,    55,   102,   103,   104,   105,   106,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,   157,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,   147,
      84,    85,    86,    87,     0,    88,    89,     0,   186,     0,
       0,   147,    84,    85,    86,    87,     0,    88,    89,     0,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     3,     0,     0,
       0,     0,     0,     0,     0,   108,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,   101,     0,     0,   148,     0,     0,   102,   103,
     104,   105,   106,   107,   101,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,   147,    84,    85,    86,
      87,     0,    88,    89,     0,     0,     0,     0,   147,    84,
      85,    86,    87,     0,    88,    89,     0,     0,     0,     0,
     147,    84,    85,    86,    87,     0,    88,    89,     0,     0,
       0,     0,   147,    84,    85,    86,    87,     0,    88,    89,
       0,     0,     0,     0,   147,    84,    85,    86,    87,     0,
      88,    89,     0,     0,     0,     0,     0,     0,     0,   101,
     273,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   101,     0,     0,   303,     0,     0,   102,   103,   104,
     105,   106,   107,   101,     0,     0,   332,     0,     0,   102,
     103,   104,   105,   106,   107,   101,   340,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,   171,     0,     0,
     140,     0,     0,   102,   103,   104,   105,   106,   107,   147,
      84,    85,    86,    87,     0,    88,    89,     0,     0,     0,
       0,   147,    84,    85,    86,    87,     3,    88,    89,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   141,     0,     0,    63,     1,     0,
       2,     0,   173,     0,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,   101,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     3,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     1,
       0,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     3,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,   235,   300,   236,     0,     0,     0,     0,
      24,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     3,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   251,   268,   300,   236,     0,     3,     0,     0,
      24,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,   330,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   308,     3,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
       0,    74,    60,    35,    61,   157,     3,     3,    78,     3,
      23,    61,    82,    26,     0,    79,   182,    18,     3,     3,
     142,   238,    24,    66,     3,    68,    87,    27,    28,    46,
      47,   101,    32,    90,     3,    71,    36,    87,    88,    89,
      90,    95,    90,    45,    57,   113,    13,    14,     3,    71,
      36,    87,   269,   100,   101,    71,    73,     3,    49,    72,
      60,    71,    71,   113,    55,    87,    86,   189,    81,    33,
      73,    87,    66,    59,    88,    78,    79,    87,   132,    73,
      89,    66,    66,    84,   157,    49,    67,    66,    73,    68,
      76,    88,    88,    87,    73,    59,   153,   161,   264,    88,
      85,   171,    67,   153,     3,   153,    71,    85,   165,    71,
      71,    66,    76,    80,    81,   165,   170,   165,    73,    85,
      66,   194,    68,   177,   171,    66,   173,    89,    89,   142,
      67,   178,   179,   180,    71,   208,    71,     8,     9,    10,
     142,    66,   210,   211,   212,   131,    66,    66,   195,    68,
      85,    67,    82,    67,    73,    71,   229,    71,    66,   311,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   232,   236,
      67,   228,    87,    66,    71,    68,   236,   189,   236,    53,
      67,    69,    67,    71,    71,    66,    71,    68,   255,    70,
      66,    87,    68,   271,   258,   255,   238,   255,    67,    74,
      75,    72,    71,    77,    78,    79,    11,    12,    82,    15,
      16,   271,   235,    83,    24,   217,   218,   219,   220,    17,
     213,   214,    86,   235,    67,   235,    71,   101,   311,    69,
     253,    85,   242,   215,   216,    45,   221,   222,   306,    85,
     307,   324,    58,    53,    67,    87,     3,   307,     3,   307,
       3,    69,    67,   317,   318,   319,   268,    66,   268,   326,
      67,    69,    56,   320,   321,    67,   326,    77,    78,    79,
       1,    67,    82,    87,   223,   225,   340,    72,   224,   227,
      77,    65,   346,   226,   253,   349,   154,   161,   242,   171,
     131,   101,    36,    -1,    -1,    -1,   306,   171,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      71,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,   161,    -1,    -1,    -1,    86,    87,    88,    29,    -1,
      -1,   171,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,     1,
      29,     3,     4,     5,     6,     7,    -1,     9,    10,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,     1,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     3,     4,     5,     6,     7,    29,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    66,    -1,    89,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    87,    88,
      89,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    88,    89,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,     3,     4,     5,     6,     7,    66,     9,    10,    -1,
      87,    88,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    88,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    87,    -1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    66,    -1,    -1,    69,    -1,    -1,    72,    73,
      74,    75,    76,    77,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    66,    -1,    -1,    69,    -1,    -1,    72,    73,    74,
      75,    76,    77,    66,    -1,    -1,    69,    -1,    -1,    72,
      73,    74,    75,    76,    77,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    66,    -1,    -1,
       3,    -1,    -1,    72,    73,    74,    75,    76,    77,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    29,     9,    10,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,     0,     1,    -1,
       3,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    66,    67,    68,    -1,    -1,    -1,    -1,
      73,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    66,    67,    68,    -1,    29,    -1,    -1,
      73,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    67,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    29,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    66,    73,   112,   113,   116,   117,   118,
     119,   125,   128,   129,   130,   131,   151,   152,   153,    87,
       3,    88,   129,   128,   131,   132,    87,   114,   115,   129,
     113,   113,     3,    88,   113,    88,   112,   113,   144,   145,
      66,    68,   130,     0,   152,    88,     3,   126,   127,    67,
     128,   131,    71,    87,    86,   144,   145,    88,   117,   120,
     121,   122,   128,     3,     4,     5,     6,     7,     9,    10,
      53,    54,    55,    57,    58,    59,    60,    61,    62,    63,
      64,    66,    72,    73,    74,    75,    76,    77,    87,    89,
      91,    92,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   110,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   129,   112,   144,
       3,    67,   113,   133,   134,   135,   136,     3,    69,    94,
     107,   111,   126,    86,    71,    89,   115,    88,   108,   140,
     144,   120,   122,    89,   121,    85,   123,   124,   129,   122,
      85,    66,    94,    66,    94,    94,   111,    85,    66,    66,
      66,   142,    66,     3,    87,    87,    87,   110,   110,   122,
     137,     8,     9,    10,    66,    68,    70,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    86,   109,    96,
      73,    78,    79,    74,    75,    11,    12,    13,    14,    80,
      81,    15,    16,    72,    82,    83,    17,    18,    84,    71,
      87,    89,   146,    89,   142,    66,    68,   129,   131,   138,
     139,    67,    71,    67,    71,    69,    89,   111,   127,   140,
     141,    89,   111,    71,    87,    85,   142,   137,    85,   142,
     110,   110,   110,    58,   147,    87,    87,    67,    66,   131,
     138,    67,     3,    67,    93,   108,   110,     3,   108,    96,
      96,    96,    97,    97,    98,    98,    99,    99,    99,    99,
     100,   100,   101,   102,   103,   104,   105,   110,   108,    89,
      67,   133,   138,    69,   111,   139,    66,    68,    52,   135,
       3,    71,    89,   124,   111,    67,   142,    67,    67,    67,
      66,   147,    96,    67,    71,    69,    85,    67,    67,    69,
      67,   133,    69,   111,    89,   140,   142,   142,   142,   110,
      67,   110,   108,   107,    67,    69,    56,    67,   142,    67,
     142,    87,   142
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    95,    95,    95,    96,
      96,    97,    97,    97,    97,    98,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   110,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   118,   118,   119,
     119,   120,   120,   121,   122,   122,   122,   122,   123,   123,
     124,   124,   124,   125,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   130,   130,   130,   130,
     130,   131,   131,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   135,   136,   136,   137,   137,   138,   138,
     138,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   140,   140,   141,   141,   142,   142,   142,   142,   142,
     142,   143,   143,   143,   144,   144,   144,   144,   145,   145,
     146,   146,   147,   147,   148,   148,   148,   149,   149,   149,
     149,   150,   150,   150,   150,   150,   151,   151,   152,   152,
     153,   153,   153,   153,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     2,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     3,     2,     2,     2,     3,     1,     2,     1,     1,
       4,     3,     3,     2,     2
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
#line 87 "parse.y" /* yacc.c:1646  */
    {(yyval)=context_check();}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 88 "parse.y" /* yacc.c:1646  */
    {tchk=4;}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 89 "parse.y" /* yacc.c:1646  */
    {}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 91 "parse.y" /* yacc.c:1646  */
    {(yyval)= (yyvsp[-1]);}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 95 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 111 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 129 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 134 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 141 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 147 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 153 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 161 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 167 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 172 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 177 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 182 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 187 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 192 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 197 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 198 "parse.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); type_err((yyvsp[-2]),(yyvsp[0]));}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 216 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 257 "parse.y" /* yacc.c:1646  */
    {temp=1;}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 258 "parse.y" /* yacc.c:1646  */
    {temp=2;}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 259 "parse.y" /* yacc.c:1646  */
    {temp=3;}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 260 "parse.y" /* yacc.c:1646  */
    {temp=3;}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 261 "parse.y" /* yacc.c:1646  */
    {temp=3;}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 262 "parse.y" /* yacc.c:1646  */
    {temp=4;}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 263 "parse.y" /* yacc.c:1646  */
    {temp=4;}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 272 "parse.y" /* yacc.c:1646  */
    {install();}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 274 "parse.y" /* yacc.c:1646  */
    {install();}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 321 "parse.y" /* yacc.c:1646  */
    {context_check();}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 336 "parse.y" /* yacc.c:1646  */
    {install();}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 375 "parse.y" /* yacc.c:1646  */
    {install();}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 376 "parse.y" /* yacc.c:1646  */
    {install();}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 403 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2082 "y.tab.c" /* yacc.c:1646  */
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
#line 490 "parse.y" /* yacc.c:1906  */


yyerror(s)
char *s;
{
	fflush(stdout);err=1;
	printf("Syntax error at Pos : %d : %d\n",line,cnt);
	exit(0);
	//printf("\n%*s\n%*s\n", column, "^", column, s);
}
main(argc,argv)
int argc;
char **argv;
{

	char *fname;
	++argv,--argc;/*skip program name*/
	if(argc>0)
	{
		yyin=fopen(argv[0],"r");
		fname=argv[0];
		strcat(fname,"_program");
		yyout=fopen(fname,"w");
	}
	else
	{
		printf("Please give the c filename as an argument.\n");
	}
	yyparse();
	if(err==0 && err1==0)
	printf("Compilation Successful!\n");
	fname=argv[0];strcat(fname,"_table");
	FILE *sym_tab=fopen(fname,"w");
	symrec *ptr;
	fprintf(sym_tab,"\n\n\t\t\t\tSYMBOL TABLE\n============================================\n\n");
	fprintf(sym_tab,"TYPE\t\t\t    SYMBOL\n\n");
	for(ptr=sym_table;ptr!=(symrec *)0;ptr=(symrec *)ptr->next)
	{
		fprintf(sym_tab,"%s\t\t\t%10s\n",ptr->type,ptr->name);
	}
	fclose(sym_tab);

}
