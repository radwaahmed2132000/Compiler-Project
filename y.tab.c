/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cl.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unordered_map>
#include <string>
#include "cl.h"

/* prototypes */
nodeType *opr(int oper, int nops, ...);
nodeType *id(const char* id);

nodeType *con(int iValue);
nodeType *con(float fValue);
nodeType *con(bool bValue);
nodeType *con(char cValue);
nodeType *con(char* sValue);
nodeType *sw(nodeType* var, nodeType* case_list_head);
nodeType *cs(nodeType* self, nodeType* next);
nodeType *br();

nodeType *for_loop(nodeType* init_statement, nodeType* loop_condition, nodeType* post_loop_statement, nodeType* loop_body);
nodeType *while_loop(nodeType* loop_condition, nodeType* loop_body);
nodeType *do_while_loop(nodeType* loop_condition, nodeType* loop_body);

void set_break_parent(nodeType* case_list, nodeType* parent_switch);

nodeType* fn(nodeTypeTag* name, nodeTypeTag* return_type, nodeType* statements);
nodeType* fn_call(nodeTypeTag* name);

void freeNode(nodeType *p);
Value ex(nodeType *p);
void declare_id(const char* id, DATA_TYPES type, bool isConst);
int yylex(void);

void yyerror(char *s);                 
std::unordered_map<std::string, entry> sym; /* symbol table */

#line 109 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    INTEGER = 259,
    REAL = 260,
    BOOLEAN = 261,
    CHARACTER = 262,
    STR = 263,
    WHILE = 264,
    IF = 265,
    PRINT = 266,
    DO = 267,
    FOR = 268,
    SWITCH = 269,
    CASE = 270,
    DEFAULT = 271,
    CASE_LIST = 272,
    BREAK = 273,
    ENUM = 274,
    FN = 275,
    RETURN = 276,
    CONST = 277,
    INT = 278,
    FLOAT = 279,
    BOOL = 280,
    CHAR = 281,
    STRING = 282,
    IFX = 283,
    ELSE = 284,
    PA = 285,
    SA = 286,
    MA = 287,
    DA = 288,
    RA = 289,
    LSA = 290,
    RSA = 291,
    ANDA = 292,
    EORA = 293,
    IORA = 294,
    OR = 295,
    AND = 296,
    EQ = 297,
    NE = 298,
    GE = 299,
    LE = 300,
    LS = 301,
    RS = 302,
    UPLUS = 303,
    UMINUS = 304,
    PP = 305,
    MM = 306
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INTEGER 259
#define REAL 260
#define BOOLEAN 261
#define CHARACTER 262
#define STR 263
#define WHILE 264
#define IF 265
#define PRINT 266
#define DO 267
#define FOR 268
#define SWITCH 269
#define CASE 270
#define DEFAULT 271
#define CASE_LIST 272
#define BREAK 273
#define ENUM 274
#define FN 275
#define RETURN 276
#define CONST 277
#define INT 278
#define FLOAT 279
#define BOOL 280
#define CHAR 281
#define STRING 282
#define IFX 283
#define ELSE 284
#define PA 285
#define SA 286
#define MA 287
#define DA 288
#define RA 289
#define LSA 290
#define RSA 291
#define ANDA 292
#define EORA 293
#define IORA 294
#define OR 295
#define AND 296
#define EQ 297
#define NE 298
#define GE 299
#define LE 300
#define LS 301
#define RS 302
#define UPLUS 303
#define UMINUS 304
#define PP 305
#define MM 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 40 "cl.y"

    int iValue;                 /* integer value */
    float fValue;               /* double value */
    bool bValue;                /* boolean value */
    char cValue;                /* char value */
    char* sValue;               /* string value */
    char* id;                   /* identifier name */
    nodeType *nPtr;             /* node pointer */

#line 273 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   697

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

#define YYUNDEFTOK  2
#define YYMAXUTOK   306


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,     2,     2,    58,    45,     2,
      66,    67,    56,    54,    71,    55,     2,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,    65,
      51,    30,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,    43,    69,    62,     2,     2,     2,
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
      25,    26,    27,    28,    29,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    46,    47,    48,
      49,    52,    53,    59,    60,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    80,    85,    89,    93,    94,    98,    99,
     100,   101,   102,   103,   104,   108,   112,   113,   119,   125,
     126,   127,   128,   129,   133,   137,   138,   139,   143,   144,
     148,   149,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   199,   206,   207,   208,   212,
     219,   220,   221,   225,   226,   230,   231,   232,   235,   243
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER", "REAL",
  "BOOLEAN", "CHARACTER", "STR", "WHILE", "IF", "PRINT", "DO", "FOR",
  "SWITCH", "CASE", "DEFAULT", "CASE_LIST", "BREAK", "ENUM", "FN",
  "RETURN", "CONST", "INT", "FLOAT", "BOOL", "CHAR", "STRING", "IFX",
  "ELSE", "'='", "PA", "SA", "MA", "DA", "RA", "LSA", "RSA", "ANDA",
  "EORA", "IORA", "OR", "AND", "'|'", "'^'", "'&'", "EQ", "NE", "GE", "LE",
  "'>'", "'<'", "LS", "RS", "'+'", "'-'", "'*'", "'/'", "'%'", "UPLUS",
  "UMINUS", "'!'", "'~'", "PP", "MM", "';'", "'('", "')'", "'{'", "'}'",
  "':'", "','", "$accept", "program", "var_decl", "var_defn", "stmt",
  "return_statement", "case", "case_list", "stmt_list", "expr",
  "function_call", "expr_list", "enum_decl", "identifier_list",
  "function_return_type", "function_parameter_list", "function_defn",
  "function_decl", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
      61,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   124,    94,    38,   297,   298,   299,   300,
      62,    60,   301,   302,    43,    45,    42,    47,    37,   303,
     304,    33,   126,   305,   306,    59,    40,    41,   123,   125,
      58,    44
};
# endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      90,    84,  -110,  -110,  -110,  -110,  -110,   -61,   -58,   213,
      90,   -48,   -47,   -40,    24,    41,   213,    44,   213,   213,
     213,   213,  -110,   213,    90,    51,   -20,  -110,  -110,  -110,
      90,   386,  -110,  -110,  -110,    -4,  -110,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   250,   411,    46,    44,    59,  -110,    16,    19,   436,
      83,    58,  -110,     1,     1,     1,     1,   251,   173,  -110,
     213,  -110,  -110,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,  -110,  -110,  -110,  -110,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   -21,   278,   305,
    -110,    23,   213,    25,    87,    44,  -110,  -110,  -110,   461,
     534,   556,   577,   597,   616,   633,   633,    85,    85,    85,
      85,   107,   107,   -35,   -35,     1,     1,     1,  -110,   213,
      90,    90,   213,   486,    -9,  -110,   -45,  -110,   -18,  -110,
     511,  -110,    62,   332,   213,   102,    37,    -9,  -110,    60,
     123,   124,    44,    90,    63,   359,    64,    90,  -110,   -12,
    -110,  -110,  -110,    61,  -110,  -110,  -110,    90,    90,  -110,
    -110,  -110,    90,  -110,  -110,   193,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    37,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,    18,    30,    23,
       2,     0,    74,    20,    21,     0,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,    37,     0,     0,     0,     0,    12,     0,     0,     0,
       0,     0,    19,    51,    52,    53,    54,     0,     0,     1,
       0,    17,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,    50,    11,    22,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    77,     0,     0,     0,
      13,     0,     0,     0,    82,    87,    24,    73,    16,     0,
      68,    67,    56,    57,    55,    72,    71,    69,    70,    66,
      65,    58,    59,    60,    61,    62,    63,    64,    75,     0,
       0,     0,     0,     0,     0,    81,     0,    86,     0,     5,
      76,    14,     8,     0,     0,     0,     0,     0,    10,     0,
       0,    84,     0,     0,     0,     0,     0,     0,    28,     0,
      79,    80,    83,    89,    85,     9,    15,     0,     0,    26,
      27,    29,     0,     7,    25,     0,    88
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -110,  -110,    -2,     0,   -10,  -110,  -109,  -110,   -23,    -7,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    27,    28,    29,   158,   169,    30,    31,
      32,   107,    33,   146,   173,   148,    34,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      53,    68,    52,   155,   156,    49,   155,   156,    50,    59,
      70,    63,    64,    65,    66,    61,    67,    62,    54,    55,
      72,    88,    89,    90,   159,    56,   160,    57,    91,    92,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   108,   109,    58,    71,   138,    60,   168,   161,
     139,    69,    61,   162,   112,   111,   157,   180,    72,   157,
     181,    94,   113,   119,    91,    92,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   114,   115,    36,    36,    70,   142,
     145,   163,   144,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,   143,   166,   167,    13,    14,
      15,    16,    17,   147,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   170,   171,   172,   176,   182,
     151,   152,   150,     0,   178,   153,     0,    84,    85,    86,
      87,    88,    89,    90,    18,    19,     0,   165,    91,    92,
      48,    20,    21,   175,     0,    22,    23,   179,    24,   185,
     174,    86,    87,    88,    89,    90,     0,   183,   184,     0,
      91,    92,     0,     0,     0,    72,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,    51,     2,     3,     4,
       5,     6,     0,     0,     0,     0,     0,    18,    19,     0,
       0,     0,     0,     0,    20,    21,     0,     0,    22,    23,
       0,    24,   118,     0,     0,     0,     0,    18,    19,     0,
       0,     0,     0,     0,    20,    21,     0,     0,    22,    23,
       0,    24,   186,     0,     0,     0,     0,    18,    19,     0,
       0,     0,     0,     0,    20,    21,     0,     0,     0,    23,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     0,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,     0,     0,    91,    92,    48,     0,   117,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,     0,     0,     0,
       0,    91,    92,     0,     0,   140,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,     0,     0,     0,    91,    92,
       0,     0,   141,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     0,     0,     0,     0,    91,    92,     0,     0,   164,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,     0,
       0,     0,    91,    92,     0,     0,   177,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,     0,     0,     0,    91,
      92,    93,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,     0,     0,    91,    92,   110,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,     0,     0,     0,    91,
      92,   116,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,     0,     0,    91,    92,   149,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,     0,     0,     0,    91,
      92,   154,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,     0,     0,    91,    92,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,     0,     0,    91,    92,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,     0,     0,     0,    91,
      92,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,     0,     0,     0,     0,
      91,    92,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,     0,     0,     0,     0,
      91,    92,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,     0,     0,     0,    91,
      92,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     0,     0,     0,     0,    91,    92
};

static const yytype_int16 yycheck[] =
{
      10,    24,     9,    15,    16,    66,    15,    16,    66,    16,
      30,    18,    19,    20,    21,    17,    23,    17,    66,    66,
      30,    56,    57,    58,    69,    65,    71,     3,    63,    64,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     3,    65,    67,     3,   157,    67,
      71,     0,    54,    71,    54,     9,    68,    69,    68,    68,
     169,    65,     3,    70,    63,    64,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    68,    66,     3,     3,    30,    66,
       3,    29,    67,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   112,     4,    70,    18,    19,
      20,    21,    22,   115,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    65,     3,     3,    65,    68,
     140,   141,   139,    -1,    70,   142,    -1,    52,    53,    54,
      55,    56,    57,    58,    54,    55,    -1,   154,    63,    64,
      66,    61,    62,   163,    -1,    65,    66,   167,    68,   182,
     162,    54,    55,    56,    57,    58,    -1,   177,   178,    -1,
      63,    64,    -1,    -1,    -1,   185,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    18,    19,    20,    21,    22,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    18,    19,    20,    21,    22,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    66,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    63,    64,    66,    -1,    67,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    67,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    67,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    67,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    67,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      64,    65,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    63,    64,    65,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      64,    65,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    63,    64,    65,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      64,    65,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    63,    64,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      64,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      63,    64,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      63,    64,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      64,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    63,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    18,    19,    20,    21,    22,    54,    55,
      61,    62,    65,    66,    68,    73,    74,    75,    76,    77,
      80,    81,    82,    84,    88,    89,     3,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    66,    66,
      66,     3,    81,    76,    66,    66,    65,     3,     3,    81,
       3,    74,    75,    81,    81,    81,    81,    81,    80,     0,
      30,    65,    76,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    63,    64,    65,    65,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    83,    81,    81,
      65,     9,    75,     3,    68,    66,    65,    67,    69,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    67,    71,
      67,    67,    66,    81,    67,     3,    85,    74,    87,    65,
      81,    76,    76,    81,    65,    15,    16,    68,    78,    69,
      71,    67,    71,    29,    67,    81,     4,    70,    78,    79,
      65,     3,     3,    86,    74,    76,    65,    67,    70,    76,
      69,    78,    68,    76,    76,    80,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    72,    73,    73,    74,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    78,    78,    78,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    83,    83,    83,    84,
      85,    85,    85,    86,    86,    87,    87,    87,    88,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     4,     1,     8,     5,     7,
       5,     2,     2,     3,     5,     7,     3,     2,     1,     2,
       1,     1,     2,     1,     3,     4,     3,     3,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     4,     3,     1,     0,     6,
       3,     1,     0,     1,     0,     3,     1,     0,     9,     6
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 79 "cl.y"
                  { semantic_analysis((yyvsp[0].nPtr)); ex((yyvsp[0].nPtr)); freeNode((yyvsp[0].nPtr)); exit(0); }
#line 1676 "y.tab.c"
    break;

  case 4:
#line 85 "cl.y"
                                    { (yyval.nPtr) = id((yyvsp[0].id)); }
#line 1682 "y.tab.c"
    break;

  case 5:
#line 89 "cl.y"
                                     { (yyval.nPtr) = opr('=', 2, (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 1688 "y.tab.c"
    break;

  case 6:
#line 93 "cl.y"
                                                  { (yyval.nPtr) = opr(';', 0); }
#line 1694 "y.tab.c"
    break;

  case 7:
#line 94 "cl.y"
                                                  { 
                (yyval.nPtr) = for_loop((yyvsp[-5].nPtr), (yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); 
                set_break_parent((yyvsp[0].nPtr), (yyval.nPtr));
        }
#line 1703 "y.tab.c"
    break;

  case 8:
#line 98 "cl.y"
                                                  { (yyval.nPtr) = opr(IF, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1709 "y.tab.c"
    break;

  case 9:
#line 99 "cl.y"
                                                  { (yyval.nPtr) = opr(IF, 3, (yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1715 "y.tab.c"
    break;

  case 10:
#line 100 "cl.y"
                                                  { (yyval.nPtr) = sw(id((yyvsp[-2].id)), (yyvsp[0].nPtr)); set_break_parent((yyvsp[0].nPtr), (yyval.nPtr)); }
#line 1721 "y.tab.c"
    break;

  case 11:
#line 101 "cl.y"
                                                  { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1727 "y.tab.c"
    break;

  case 12:
#line 102 "cl.y"
                                                  { (yyval.nPtr) = br(); }
#line 1733 "y.tab.c"
    break;

  case 13:
#line 103 "cl.y"
                                                  { (yyval.nPtr) = opr(PRINT, 1, (yyvsp[-1].nPtr)); }
#line 1739 "y.tab.c"
    break;

  case 14:
#line 104 "cl.y"
                                                  { 
                (yyval.nPtr) = while_loop((yyvsp[-2].nPtr), (yyvsp[0].nPtr)); 
                set_break_parent((yyvsp[0].nPtr), (yyval.nPtr));
        }
#line 1748 "y.tab.c"
    break;

  case 15:
#line 108 "cl.y"
                                                  { 
                (yyval.nPtr) = do_while_loop((yyvsp[-2].nPtr), (yyvsp[-5].nPtr)); 
                set_break_parent((yyvsp[-5].nPtr), (yyval.nPtr));
        }
#line 1757 "y.tab.c"
    break;

  case 16:
#line 112 "cl.y"
                                                  { (yyval.nPtr) = (yyvsp[-1].nPtr); /* Start a new scope here */ }
#line 1763 "y.tab.c"
    break;

  case 17:
#line 113 "cl.y"
                                                  { 
            /* Handle declaration logic here */
            auto id_name = std::get<idNodeType>((yyvsp[-1].nPtr)->un);
            declare_id(id_name.id.c_str(),INT_TYPE,false);
            /*printf("Variable declaration parsed successfully\n"); */
            }
#line 1774 "y.tab.c"
    break;

  case 18:
#line 119 "cl.y"
                                                  { 
            auto opr_1 = std::get<oprNodeType>((yyvsp[0].nPtr)->un).op[0];
            auto id_name = std::get<idNodeType>(opr_1->un);
            declare_id(id_name.id.c_str(),INT_TYPE,false);
            (yyval.nPtr) = (yyvsp[0].nPtr);
         }
#line 1785 "y.tab.c"
    break;

  case 19:
#line 125 "cl.y"
                                                  { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1791 "y.tab.c"
    break;

  case 23:
#line 129 "cl.y"
                                                  { printf("Return statement\n"); }
#line 1797 "y.tab.c"
    break;

  case 25:
#line 137 "cl.y"
                                { (yyval.nPtr) = opr(CASE, 2, con((yyvsp[-2].iValue)), (yyvsp[0].nPtr)); }
#line 1803 "y.tab.c"
    break;

  case 26:
#line 138 "cl.y"
                                { (yyval.nPtr) = opr(DEFAULT, 1, (yyvsp[0].nPtr)); }
#line 1809 "y.tab.c"
    break;

  case 27:
#line 139 "cl.y"
                                { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1815 "y.tab.c"
    break;

  case 28:
#line 143 "cl.y"
                                  { (yyval.nPtr) = cs((yyvsp[0].nPtr), NULL); }
#line 1821 "y.tab.c"
    break;

  case 29:
#line 144 "cl.y"
                                  { (yyval.nPtr) = cs((yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1827 "y.tab.c"
    break;

  case 30:
#line 148 "cl.y"
                                { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1833 "y.tab.c"
    break;

  case 31:
#line 149 "cl.y"
                                { (yyval.nPtr) = opr(';', 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1839 "y.tab.c"
    break;

  case 32:
#line 153 "cl.y"
                                        { (yyval.nPtr) = con((yyvsp[0].iValue)); }
#line 1845 "y.tab.c"
    break;

  case 33:
#line 154 "cl.y"
                                        { (yyval.nPtr) = con((yyvsp[0].fValue)); }
#line 1851 "y.tab.c"
    break;

  case 34:
#line 155 "cl.y"
                                        { (yyval.nPtr) = con((yyvsp[0].bValue)); }
#line 1857 "y.tab.c"
    break;

  case 35:
#line 156 "cl.y"
                                        { (yyval.nPtr) = con((yyvsp[0].cValue)); }
#line 1863 "y.tab.c"
    break;

  case 36:
#line 157 "cl.y"
                                        { (yyval.nPtr) = con((yyvsp[0].sValue));  }
#line 1869 "y.tab.c"
    break;

  case 37:
#line 158 "cl.y"
                                        { (yyval.nPtr) = id((yyvsp[0].id)); }
#line 1875 "y.tab.c"
    break;

  case 38:
#line 159 "cl.y"
                                        { (yyval.nPtr) = opr('=', 2, id((yyvsp[-2].id)), (yyvsp[0].nPtr)); }
#line 1881 "y.tab.c"
    break;

  case 39:
#line 160 "cl.y"
                                        { (yyval.nPtr) = opr('=', 2, id((yyvsp[-2].id)), opr('+', 2, (yyvsp[-2].id), (yyvsp[0].nPtr))); }
#line 1887 "y.tab.c"
    break;

  case 40:
#line 161 "cl.y"
                                        { (yyval.nPtr) = opr('=', 2, id((yyvsp[-2].id)), opr('-', 2, (yyvsp[-2].id), (yyvsp[0].nPtr))); }
#line 1893 "y.tab.c"
    break;

  case 41:
#line 162 "cl.y"
                                        { (yyval.nPtr) = opr('=', 2, id((yyvsp[-2].id)), opr('*', 2, (yyvsp[-2].id), (yyvsp[0].nPtr))); }
#line 1899 "y.tab.c"
    break;

  case 42:
#line 163 "cl.y"
                                        { (yyval.nPtr) = opr('=', 2, id((yyvsp[-2].id)), opr('/', 2, (yyvsp[-2].id), (yyvsp[0].nPtr))); }
#line 1905 "y.tab.c"
    break;

  case 43:
#line 164 "cl.y"
                                        { (yyval.nPtr) = opr('=', 2, id((yyvsp[-2].id)), opr('%', 2, (yyvsp[-2].id), (yyvsp[0].nPtr))); }
#line 1911 "y.tab.c"
    break;

  case 44:
#line 165 "cl.y"
                                        { (yyval.nPtr) = opr('=', 2, id((yyvsp[-2].id)), opr(LS,  2, (yyvsp[-2].id), (yyvsp[0].nPtr))); }
#line 1917 "y.tab.c"
    break;

  case 45:
#line 166 "cl.y"
                                        { (yyval.nPtr) = opr('=', 2, id((yyvsp[-2].id)), opr(RS,  2, (yyvsp[-2].id), (yyvsp[0].nPtr))); }
#line 1923 "y.tab.c"
    break;

  case 46:
#line 167 "cl.y"
                                        { (yyval.nPtr) = opr('=', 2, id((yyvsp[-2].id)), opr('&', 2, (yyvsp[-2].id), (yyvsp[0].nPtr))); }
#line 1929 "y.tab.c"
    break;

  case 47:
#line 168 "cl.y"
                                        { (yyval.nPtr) = opr('=', 2, id((yyvsp[-2].id)), opr('^', 2, (yyvsp[-2].id), (yyvsp[0].nPtr))); }
#line 1935 "y.tab.c"
    break;

  case 48:
#line 169 "cl.y"
                                        { (yyval.nPtr) = opr('=', 2, id((yyvsp[-2].id)), opr('"', 2, (yyvsp[-2].id), (yyvsp[0].nPtr))); }
#line 1941 "y.tab.c"
    break;

  case 49:
#line 170 "cl.y"
                                        { (yyval.nPtr) = opr(PP, 1, (yyvsp[-1].nPtr)); }
#line 1947 "y.tab.c"
    break;

  case 50:
#line 171 "cl.y"
                                        { (yyval.nPtr) = opr(MM, 1, (yyvsp[-1].nPtr)); }
#line 1953 "y.tab.c"
    break;

  case 51:
#line 172 "cl.y"
                                        { (yyval.nPtr) = opr(UPLUS, 1, (yyvsp[0].nPtr)); }
#line 1959 "y.tab.c"
    break;

  case 52:
#line 173 "cl.y"
                                        { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[0].nPtr)); }
#line 1965 "y.tab.c"
    break;

  case 53:
#line 174 "cl.y"
                                        { (yyval.nPtr) = opr('!', 1, (yyvsp[0].nPtr)); }
#line 1971 "y.tab.c"
    break;

  case 54:
#line 175 "cl.y"
                                        { (yyval.nPtr) = opr('~', 1, (yyvsp[0].nPtr)); }
#line 1977 "y.tab.c"
    break;

  case 55:
#line 176 "cl.y"
                                        { (yyval.nPtr) = opr('&', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1983 "y.tab.c"
    break;

  case 56:
#line 177 "cl.y"
                                        { (yyval.nPtr) = opr('|', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1989 "y.tab.c"
    break;

  case 57:
#line 178 "cl.y"
                                        { (yyval.nPtr) = opr('^', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1995 "y.tab.c"
    break;

  case 58:
#line 179 "cl.y"
                                        { (yyval.nPtr) = opr(LS, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2001 "y.tab.c"
    break;

  case 59:
#line 180 "cl.y"
                                        { (yyval.nPtr) = opr(RS, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2007 "y.tab.c"
    break;

  case 60:
#line 181 "cl.y"
                                        { (yyval.nPtr) = opr('+', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2013 "y.tab.c"
    break;

  case 61:
#line 182 "cl.y"
                                        { (yyval.nPtr) = opr('-', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2019 "y.tab.c"
    break;

  case 62:
#line 183 "cl.y"
                                        { (yyval.nPtr) = opr('*', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2025 "y.tab.c"
    break;

  case 63:
#line 184 "cl.y"
                                        { (yyval.nPtr) = opr('/', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2031 "y.tab.c"
    break;

  case 64:
#line 185 "cl.y"
                                        { (yyval.nPtr) = opr('%', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2037 "y.tab.c"
    break;

  case 65:
#line 186 "cl.y"
                                        { (yyval.nPtr) = opr('<', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2043 "y.tab.c"
    break;

  case 66:
#line 187 "cl.y"
                                        { (yyval.nPtr) = opr('>', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2049 "y.tab.c"
    break;

  case 67:
#line 188 "cl.y"
                                        { (yyval.nPtr) = opr(AND, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2055 "y.tab.c"
    break;

  case 68:
#line 189 "cl.y"
                                        { (yyval.nPtr) = opr(OR, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2061 "y.tab.c"
    break;

  case 69:
#line 190 "cl.y"
                                        { (yyval.nPtr) = opr(GE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2067 "y.tab.c"
    break;

  case 70:
#line 191 "cl.y"
                                        { (yyval.nPtr) = opr(LE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2073 "y.tab.c"
    break;

  case 71:
#line 192 "cl.y"
                                        { (yyval.nPtr) = opr(NE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2079 "y.tab.c"
    break;

  case 72:
#line 193 "cl.y"
                                        { (yyval.nPtr) = opr(EQ, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2085 "y.tab.c"
    break;

  case 73:
#line 194 "cl.y"
                                        { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 2091 "y.tab.c"
    break;

  case 74:
#line 195 "cl.y"
                                        { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2097 "y.tab.c"
    break;

  case 75:
#line 199 "cl.y"
                                          { 
                     auto fn_name = std::get<idNodeType>(id((yyvsp[-3].id))->un);
                     printf("Function call (%s) parsed successfully\n", fn_name.id.c_str()); 
                     (yyval.nPtr) = fn_call(id((yyvsp[-3].id)));
             }
#line 2107 "y.tab.c"
    break;

  case 79:
#line 212 "cl.y"
                                                     { 
                 auto enum_name = std::get<idNodeType>(id((yyvsp[-4].id))->un);
                 printf("Enum (%s) parsed successfully\n", enum_name.id.c_str()); 
         }
#line 2116 "y.tab.c"
    break;

  case 83:
#line 225 "cl.y"
                                        {  (yyval.nPtr) = id((yyvsp[0].id)); }
#line 2122 "y.tab.c"
    break;

  case 84:
#line 226 "cl.y"
                                        {  (yyval.nPtr) = id("void"); }
#line 2128 "y.tab.c"
    break;

  case 88:
#line 235 "cl.y"
                                                                                                  { 
                     (yyval.nPtr) = fn(id((yyvsp[-7].id)), (yyvsp[-3].nPtr), (yyvsp[-1].nPtr));
                     auto fn_name = std::get<idNodeType>(id((yyvsp[-7].id))->un);
                     printf("Function (%s) parsed successfully\n", fn_name.id.c_str()); 
                     /* Start a function scope here. */
             }
#line 2139 "y.tab.c"
    break;

  case 89:
#line 243 "cl.y"
                                                                                { 
                     (yyval.nPtr) = fn_call(id((yyvsp[-4].id))); // TODO: Create another function for the declaration.
                     auto fn_name = std::get<idNodeType>(id((yyvsp[-4].id))->un);
                     printf("Function Declaration (%s) parsed successfully\n", fn_name.id.c_str()); 
             }
#line 2149 "y.tab.c"
    break;


#line 2153 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 249 "cl.y"


nodeType* fn(nodeTypeTag* name, nodeTypeTag* return_type, nodeType* statements) {
    nodeType *p;

    /* allocate node */
    if ((p = new nodeType()) == NULL)
        yyerror("out of memory");

    p->un = std::variant<NODE_TYPES>(functionNodeType{return_type, name, statements});

    return p;
}

nodeType* fn_call(nodeTypeTag* name) {
    nodeType *p;

    /* allocate node */
    if ((p = new nodeType()) == NULL)
        yyerror("out of memory");

        p->un = std::variant<NODE_TYPES>(functionNodeType{nullptr, name});

    return p;
}

struct set_break_parent_visitor {
        nodeType* parent_switch;

        void operator()(breakNodeType& b) {
               b.parent_switch = parent_switch;
        }
        void operator()(oprNodeType& opr) {
                for(int i = 0; i < opr.op.size(); i++) {
                        set_break_parent(opr.op[i], parent_switch);
                }
        }
        void operator()(caseNodeType& c) {
               set_break_parent(c.self, parent_switch);
               set_break_parent(c.prev, parent_switch);
        }

       // the default case:
       template<typename T> void operator()(T const &) const { } 
};

void set_break_parent(nodeType* node, nodeType* parent_switch) {
        if(node == NULL) return;
        
        std::visit(set_break_parent_visitor{parent_switch}, node->un);
}
nodeType *do_while_loop(nodeType* loop_condition, nodeType* loop_body) {
    nodeType *p;

    /* allocate node */
    if ((p = new nodeType()) == NULL)
        yyerror("out of memory");

        p->un = std::variant<NODE_TYPES>(doWhileNodeType{false, loop_condition, loop_body});

    return p;
}

nodeType *while_loop(nodeType* loop_condition, nodeType* loop_body) {
    nodeType *p;

    /* allocate node */
    if ((p = new nodeType()) == NULL)
        yyerror("out of memory");

        p->un = std::variant<NODE_TYPES>(whileNodeType{false, loop_condition, loop_body});

    return p;
}

nodeType *for_loop(nodeType* init_statement, nodeType* loop_condition, nodeType* post_loop_statement, nodeType* loop_body) {
    nodeType *p;

    /* allocate node */
    if ((p = new nodeType()) == NULL)
        yyerror("out of memory");

        p->un = std::variant<NODE_TYPES>(forNodeType{false, init_statement, loop_condition, post_loop_statement, loop_body});

    return p;
}

nodeType *br() {
    nodeType *p;

    /* allocate node */
    if ((p = new nodeType()) == NULL)
        yyerror("out of memory");

        p->un = std::variant<NODE_TYPES>(breakNodeType{NULL});

    return p;
}

nodeType *cs(nodeType* self, nodeType* prev) {
    nodeType *p;

    /* allocate node */
    if ((p = new nodeType()) == NULL)
        yyerror("out of memory");

        p->un = std::variant<NODE_TYPES>(caseNodeType{});

    auto cs = caseNodeType{};

    std::visit(
        Visitor {
                [&cs, self](oprNodeType&)  { cs.self = self; cs.prev = NULL; },
                [&cs, self, prev](caseNodeType&) { cs.prev = self; cs.self = prev; },
                [](auto) {}
        },
        self->un
    );

    p->un = cs;
    return p;
}

nodeType *sw(nodeType* var, nodeType* case_list_head) {
    nodeType *p;

    /* allocate node */
    if ((p = new nodeType()) == NULL)
        yyerror("out of memory");

    /* copy information */
    
    p->un = std::variant<NODE_TYPES>(switchNodeType{
            0, 0, var, case_list_head
    });

    return p;
}

#define CON_INIT(ptr_name, value)      \
        nodeType* ptr_name;                                     \
        if ((ptr_name = new nodeType()) == NULL)                \
                yyerror("out of memory");                       \
        auto con = conNodeType{value};                               \
        (ptr_name)->un = std::variant<NODE_TYPES>(con);         \
        return ptr_name

nodeType *con(int iValue)   { CON_INIT(p, iValue);   return p; }
nodeType *con(float fValue) { CON_INIT(p, fValue); return p; }
nodeType *con(bool bValue)  { CON_INIT(p, bValue);  return p; }
nodeType *con(char cValue)  { CON_INIT(p, cValue);  return p; }
nodeType *con(char* sValue) { CON_INIT(p, std::string(sValue));  return p; }

// Create an identifier node.
nodeType *id(const char* id) {
    nodeType *p;

    /* allocate node */
    if ((p = new nodeType()) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->un = std::variant<NODE_TYPES>(idNodeType{std::string(id)});

    return p;
}

// Create an operator node with a variable number of inputs (usually 2)
// Note that `oper` is an enum value (or #ifdef), you can find the definintions in `y.tab.h`.
nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
    int i;

    /* allocate node, extending op array */
    if ((p = new nodeType()) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->un = std::variant<NODE_TYPES>(oprNodeType{});
    auto& opr = std::get<oprNodeType>(p->un);
    opr.oper = oper;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        opr.op.push_back(va_arg(ap, nodeType*));
    va_end(ap);
    return p;
}

// De-allocates a node and all of its children (if any).
void freeNode(nodeType *p) {
    int i;

    if (!p) return;
    free (p);
}

void declare_id(const char* id, DATA_TYPES type, bool isConst){
    std::string key = id;
    if(sym.find(key) == sym.end())
    {
        std::string temp = "Declaring a new variable "+key+" !!!\n";
        printf("%s",temp.c_str());
        sym[id].value = Value(0);
        sym[id].type = type;
        sym[id].isConst = isConst;
        /*if (std::holds_alternative<int>(v))*/
    }
}

void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
}

int main(void) {
#if defined(YYDEBUG) && (YYDEBUG != 0)
        yydebug = 1;
#endif
    yyparse();
    return 0;
}
