/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "3AC.y"
 
    #include <stdio.h> 
    #include <stdlib.h>
    #include <string.h>
    #include "lex.yy.c"
    int flag=0; 
    
    void yyerror(char *str);
    void new_variable();
    int new_line_label();
    
    int variable_count = 0;
    int line_label_count = 0;
    
    char variable[10];
    int else_ref = 0;
    int if_true_ref = 10;  
    int while_ref = 0;
    int while_false_ref = 0;
    FILE *outfile ; 

#line 93 "3AC.tab.c"

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

#include "3AC.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AND = 3,                        /* AND  */
  YYSYMBOL_ASSIGN = 4,                     /* ASSIGN  */
  YYSYMBOL_COLON = 5,                      /* COLON  */
  YYSYMBOL_DIV = 6,                        /* DIV  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_END = 8,                        /* END  */
  YYSYMBOL_EQ = 9,                         /* EQ  */
  YYSYMBOL_GE = 10,                        /* GE  */
  YYSYMBOL_GLOBAL = 11,                    /* GLOBAL  */
  YYSYMBOL_GT = 12,                        /* GT  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_LEFT_PAREN = 14,                /* LEFT_PAREN  */
  YYSYMBOL_LE = 15,                        /* LE  */
  YYSYMBOL_LT = 16,                        /* LT  */
  YYSYMBOL_MINUS = 17,                     /* MINUS  */
  YYSYMBOL_MOD = 18,                       /* MOD  */
  YYSYMBOL_MULT = 19,                      /* MULT  */
  YYSYMBOL_NE = 20,                        /* NE  */
  YYSYMBOL_NOT = 21,                       /* NOT  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_PLUS = 23,                      /* PLUS  */
  YYSYMBOL_PRINT = 24,                     /* PRINT  */
  YYSYMBOL_READ = 25,                      /* READ  */
  YYSYMBOL_RIGHT_PAREN = 26,               /* RIGHT_PAREN  */
  YYSYMBOL_SEMICOLON = 27,                 /* SEMICOLON  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_ID = 29,                        /* ID  */
  YYSYMBOL_INT_CONST = 30,                 /* INT_CONST  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_S = 32,                         /* S  */
  YYSYMBOL_prog = 33,                      /* prog  */
  YYSYMBOL_stmtListO = 34,                 /* stmtListO  */
  YYSYMBOL_stmtList = 35,                  /* stmtList  */
  YYSYMBOL_stmt = 36,                      /* stmt  */
  YYSYMBOL_assignmentStmt = 37,            /* assignmentStmt  */
  YYSYMBOL_readStmt = 38,                  /* readStmt  */
  YYSYMBOL_printStmt = 39,                 /* printStmt  */
  YYSYMBOL_ifStmt = 40,                    /* ifStmt  */
  YYSYMBOL_41_1 = 41,                      /* $@1  */
  YYSYMBOL_elsePart = 42,                  /* elsePart  */
  YYSYMBOL_43_2 = 43,                      /* $@2  */
  YYSYMBOL_whileStmt = 44,                 /* whileStmt  */
  YYSYMBOL_45_3 = 45,                      /* $@3  */
  YYSYMBOL_46_4 = 46,                      /* $@4  */
  YYSYMBOL_47_5 = 47,                      /* $@5  */
  YYSYMBOL_bExp = 48,                      /* bExp  */
  YYSYMBOL_relOP = 49,                     /* relOP  */
  YYSYMBOL_exp = 50                        /* exp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   110

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  79

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    48,    48,    50,    52,    53,    55,    56,    58,    59,
      60,    61,    62,    64,    66,    71,    73,    73,    83,    83,
      91,    96,   101,   106,    96,   117,   122,   127,   132,   137,
     143,   144,   145,   146,   147,   148,   150,   155,   160,   165,
     170,   175,   180,   185,   190,   191
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AND", "ASSIGN",
  "COLON", "DIV", "ELSE", "END", "EQ", "GE", "GLOBAL", "GT", "IF",
  "LEFT_PAREN", "LE", "LT", "MINUS", "MOD", "MULT", "NE", "NOT", "OR",
  "PLUS", "PRINT", "READ", "RIGHT_PAREN", "SEMICOLON", "WHILE", "ID",
  "INT_CONST", "$accept", "S", "prog", "stmtListO", "stmtList", "stmt",
  "assignmentStmt", "readStmt", "printStmt", "ifStmt", "$@1", "elsePart",
  "$@2", "whileStmt", "$@3", "$@4", "$@5", "bExp", "relOP", "exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-56)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -6,    77,     8,   -56,    70,   -19,   -17,   -56,     9,     6,
      -7,   -56,   -56,   -56,   -56,   -56,   -56,   -56,    70,    80,
      70,    80,   -56,   -56,    15,    56,   -56,   -56,    70,    80,
     -56,    77,    -1,    26,    80,    89,   -56,    89,    70,    70,
      17,    80,   -56,   -56,   -56,   -56,   -56,    80,    80,    80,
     -56,    80,    80,    15,    63,   -56,   -56,   -56,    41,   -56,
     -56,    77,   -56,    89,   -56,   -56,    89,    63,    21,    -3,
      77,   -56,    31,    -7,    77,   -56,    32,    -7,   -56
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     0,     2,     0,     0,     0,    21,     0,     0,
       4,     7,     8,     9,    10,    11,    12,     1,     0,     0,
       0,     0,    44,    45,    16,     0,    15,    14,     0,     0,
       3,     0,     0,     0,     0,    41,    27,    42,     0,     0,
       0,     0,    30,    33,    34,    31,    32,     0,     0,     0,
      35,     0,     0,    22,    13,     6,    28,    43,     0,    26,
      25,     0,    39,    37,    40,    38,    36,    29,     0,    20,
       0,    18,     0,    23,     0,    17,     0,    19,    24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,   -56,   -56,   -55,    19,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -11,   -56,   -18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     9,    10,    11,    12,    13,    14,    15,
      40,    72,    74,    16,    28,    68,    76,    24,    52,    25
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      33,    35,    38,    37,    71,     1,    69,    32,    17,    36,
      26,    54,    27,    29,    30,    73,    58,    53,    38,    77,
      31,    39,    61,    62,    31,    56,    70,    59,    60,    63,
      64,    65,    41,    66,    67,    42,    43,    39,    44,    75,
      78,    45,    46,    47,    48,    49,    50,    41,     0,    51,
      55,     0,    57,     0,     0,     0,     0,     0,    47,    48,
      49,     0,    41,     0,    51,    42,    43,    57,    44,    41,
       0,    45,    46,    47,    48,    49,    50,     0,     0,    51,
      47,    48,    49,     0,    18,     0,    51,    19,     0,     0,
       4,    20,     0,    21,    34,    41,     0,    19,     0,    22,
      23,     5,     6,    21,     0,     7,     8,    48,    49,    22,
      23
};

static const yytype_int8 yycheck[] =
{
      18,    19,     3,    21,     7,    11,    61,    18,     0,    20,
      29,    29,    29,     4,     8,    70,    34,    28,     3,    74,
      27,    22,     5,    41,    27,    26,     5,    38,    39,    47,
      48,    49,     6,    51,    52,     9,    10,    22,    12,     8,
       8,    15,    16,    17,    18,    19,    20,     6,    -1,    23,
      31,    -1,    26,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    -1,     6,    -1,    23,     9,    10,    26,    12,     6,
      -1,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      17,    18,    19,    -1,    14,    -1,    23,    17,    -1,    -1,
      13,    21,    -1,    23,    14,     6,    -1,    17,    -1,    29,
      30,    24,    25,    23,    -1,    28,    29,    18,    19,    29,
      30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    32,    33,    13,    24,    25,    28,    29,    34,
      35,    36,    37,    38,    39,    40,    44,     0,    14,    17,
      21,    23,    29,    30,    48,    50,    29,    29,    45,     4,
       8,    27,    48,    50,    14,    50,    48,    50,     3,    22,
      41,     6,     9,    10,    12,    15,    16,    17,    18,    19,
      20,    23,    49,    48,    50,    36,    26,    26,    50,    48,
      48,     5,    50,    50,    50,    50,    50,    50,    46,    35,
       5,     7,    42,    35,    43,     8,    47,    35,     8
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    34,    34,    35,    35,    36,    36,
      36,    36,    36,    37,    38,    39,    41,    40,    43,    42,
      42,    45,    46,    47,    44,    48,    48,    48,    48,    48,
      49,    49,    49,    49,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     3,     2,     2,     0,     7,     0,     3,
       0,     0,     0,     0,     8,     3,     3,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     2,     2,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* S: prog  */
#line 48 "3AC.y"
                 {}
#line 1181 "3AC.tab.c"
    break;

  case 3: /* prog: GLOBAL stmtListO END  */
#line 50 "3AC.y"
                                 { fprintf(outfile, " exit\n"); }
#line 1187 "3AC.tab.c"
    break;

  case 4: /* stmtListO: stmtList  */
#line 52 "3AC.y"
                     {}
#line 1193 "3AC.tab.c"
    break;

  case 5: /* stmtListO: %empty  */
#line 53 "3AC.y"
              {}
#line 1199 "3AC.tab.c"
    break;

  case 6: /* stmtList: stmtList SEMICOLON stmt  */
#line 55 "3AC.y"
                                    {}
#line 1205 "3AC.tab.c"
    break;

  case 7: /* stmtList: stmt  */
#line 56 "3AC.y"
                   {}
#line 1211 "3AC.tab.c"
    break;

  case 8: /* stmt: assignmentStmt  */
#line 58 "3AC.y"
                           {}
#line 1217 "3AC.tab.c"
    break;

  case 9: /* stmt: readStmt  */
#line 59 "3AC.y"
                       {}
#line 1223 "3AC.tab.c"
    break;

  case 10: /* stmt: printStmt  */
#line 60 "3AC.y"
                        {}
#line 1229 "3AC.tab.c"
    break;

  case 11: /* stmt: ifStmt  */
#line 61 "3AC.y"
                     {}
#line 1235 "3AC.tab.c"
    break;

  case 12: /* stmt: whileStmt  */
#line 62 "3AC.y"
                        {}
#line 1241 "3AC.tab.c"
    break;

  case 13: /* assignmentStmt: ID ASSIGN exp  */
#line 64 "3AC.y"
                              { fprintf(outfile, " %s = %s\n", (yyvsp[-2].val), (yyvsp[0].val)); }
#line 1247 "3AC.tab.c"
    break;

  case 14: /* readStmt: READ ID  */
#line 66 "3AC.y"
                    { 
                new_variable();
                fprintf(outfile, " %s = Read %s\n", variable, (yyvsp[0].val)); 
            }
#line 1256 "3AC.tab.c"
    break;

  case 15: /* printStmt: PRINT ID  */
#line 71 "3AC.y"
                     { fprintf(outfile, " print %s\n", (yyvsp[0].val)); }
#line 1262 "3AC.tab.c"
    break;

  case 16: /* $@1: %empty  */
#line 73 "3AC.y"
                    {
  
              new_variable();
              else_ref = new_line_label();
              fprintf(outfile, " %s = %s\n", variable, (yyvsp[0].val));
              fprintf(outfile, " If ! (%s) goto L%d\n", variable, else_ref);
              
            }
#line 1275 "3AC.tab.c"
    break;

  case 18: /* $@2: %empty  */
#line 83 "3AC.y"
                 { 
  
              if_true_ref = new_line_label();
              fprintf(outfile, " goto L%d\n", if_true_ref);
              fprintf(outfile, " L%d : ", else_ref);
              else_ref--;
               
            }
#line 1288 "3AC.tab.c"
    break;

  case 19: /* elsePart: ELSE $@2 stmtList  */
#line 90 "3AC.y"
                       { fprintf(outfile, " L%d : ", if_true_ref); }
#line 1294 "3AC.tab.c"
    break;

  case 20: /* elsePart: %empty  */
#line 91 "3AC.y"
              { 
                fprintf(outfile, " L%d : ", else_ref); 
                else_ref--;
            }
#line 1303 "3AC.tab.c"
    break;

  case 21: /* $@3: %empty  */
#line 96 "3AC.y"
                  {
              
              while_ref = new_line_label();
              fprintf(outfile, " L%d : ", while_ref);
  
            }
#line 1314 "3AC.tab.c"
    break;

  case 22: /* $@4: %empty  */
#line 101 "3AC.y"
                   {
              
              while_false_ref = new_line_label();
              fprintf(outfile, " If ! (%s) goto L%d\n", (yyvsp[0].val), while_false_ref); 
              
            }
#line 1325 "3AC.tab.c"
    break;

  case 23: /* $@5: %empty  */
#line 106 "3AC.y"
                             {
              
              fprintf(outfile, " goto L%d\n", while_ref); 
              fprintf(outfile, " L%d : ", while_false_ref);
              while_false_ref-=2;
              while_ref-=2;
              
            }
#line 1338 "3AC.tab.c"
    break;

  case 25: /* bExp: bExp OR bExp  */
#line 117 "3AC.y"
                         {
                new_variable();
                fprintf(outfile, " %s = %s or %s\n", variable, (yyvsp[-2].val), (yyvsp[0].val));
                strcpy((yyval.val), variable);
            }
#line 1348 "3AC.tab.c"
    break;

  case 26: /* bExp: bExp AND bExp  */
#line 122 "3AC.y"
                            {
                new_variable();
                fprintf(outfile, " %s = %s and %s\n", variable, (yyvsp[-2].val), (yyvsp[0].val));
                strcpy((yyval.val), variable);
            }
#line 1358 "3AC.tab.c"
    break;

  case 27: /* bExp: NOT bExp  */
#line 127 "3AC.y"
                       {
                new_variable();
                fprintf(outfile, " %s = !%s\n", variable, (yyvsp[0].val));
                strcpy((yyval.val), variable);
            }
#line 1368 "3AC.tab.c"
    break;

  case 28: /* bExp: LEFT_PAREN bExp RIGHT_PAREN  */
#line 132 "3AC.y"
                                          {
                new_variable();
                fprintf(outfile, " %s = %s\n", variable, (yyvsp[-1].val));
                strcpy((yyval.val), variable);
            }
#line 1378 "3AC.tab.c"
    break;

  case 29: /* bExp: exp relOP exp  */
#line 137 "3AC.y"
                            {
                new_variable();
                fprintf(outfile, " %s = %s %s %s\n", variable, (yyvsp[-2].val), (yyvsp[-1].val), (yyvsp[0].val));
                strcpy((yyval.val), variable);
            }
#line 1388 "3AC.tab.c"
    break;

  case 30: /* relOP: EQ  */
#line 143 "3AC.y"
               { strcpy((yyval.val), "=="); }
#line 1394 "3AC.tab.c"
    break;

  case 31: /* relOP: LE  */
#line 144 "3AC.y"
                 { strcpy((yyval.val), "<="); }
#line 1400 "3AC.tab.c"
    break;

  case 32: /* relOP: LT  */
#line 145 "3AC.y"
                 { strcpy((yyval.val), "<"); }
#line 1406 "3AC.tab.c"
    break;

  case 33: /* relOP: GE  */
#line 146 "3AC.y"
                 { strcpy((yyval.val), ">="); }
#line 1412 "3AC.tab.c"
    break;

  case 34: /* relOP: GT  */
#line 147 "3AC.y"
                 { strcpy((yyval.val), ">"); }
#line 1418 "3AC.tab.c"
    break;

  case 35: /* relOP: NE  */
#line 148 "3AC.y"
                 { strcpy((yyval.val), "!="); }
#line 1424 "3AC.tab.c"
    break;

  case 36: /* exp: exp PLUS exp  */
#line 150 "3AC.y"
                         {
                new_variable();
                fprintf(outfile, " %s = %s + %s\n", variable, (yyvsp[-2].val), (yyvsp[0].val));
                strcpy((yyval.val), variable);
            }
#line 1434 "3AC.tab.c"
    break;

  case 37: /* exp: exp MINUS exp  */
#line 155 "3AC.y"
                            {
                new_variable();
                fprintf(outfile, " %s = %s - %s\n", variable, (yyvsp[-2].val), (yyvsp[0].val));
                strcpy((yyval.val), variable);
            }
#line 1444 "3AC.tab.c"
    break;

  case 38: /* exp: exp MULT exp  */
#line 160 "3AC.y"
                           {
                new_variable();
                fprintf(outfile, " %s = %s * %s\n", variable, (yyvsp[-2].val), (yyvsp[0].val));
                strcpy((yyval.val), variable);
            }
#line 1454 "3AC.tab.c"
    break;

  case 39: /* exp: exp DIV exp  */
#line 165 "3AC.y"
                          {
                new_variable();
                fprintf(outfile, " %s = %s / %s\n", variable, (yyvsp[-2].val), (yyvsp[0].val));
                strcpy((yyval.val), variable);
            }
#line 1464 "3AC.tab.c"
    break;

  case 40: /* exp: exp MOD exp  */
#line 170 "3AC.y"
                          {
                new_variable();
                fprintf(outfile, " %s = %s %% %s\n", variable, (yyvsp[-2].val), (yyvsp[0].val));
                strcpy((yyval.val), variable);
            }
#line 1474 "3AC.tab.c"
    break;

  case 41: /* exp: MINUS exp  */
#line 175 "3AC.y"
                        {
                new_variable();
                fprintf(outfile, " %s = -%s\n", variable, (yyvsp[0].val));
                strcpy((yyval.val), variable);
            }
#line 1484 "3AC.tab.c"
    break;

  case 42: /* exp: PLUS exp  */
#line 180 "3AC.y"
                       {
                new_variable();
                fprintf(outfile, " %s = +%s\n", variable, (yyvsp[0].val));
                strcpy((yyval.val), variable);
            }
#line 1494 "3AC.tab.c"
    break;

  case 43: /* exp: LEFT_PAREN exp RIGHT_PAREN  */
#line 185 "3AC.y"
                                         {
                new_variable();
                fprintf(outfile, " %s = %s\n", variable, (yyvsp[-1].val));
                strcpy((yyval.val), variable);
            }
#line 1504 "3AC.tab.c"
    break;

  case 44: /* exp: ID  */
#line 190 "3AC.y"
                 {}
#line 1510 "3AC.tab.c"
    break;

  case 45: /* exp: INT_CONST  */
#line 191 "3AC.y"
                        {}
#line 1516 "3AC.tab.c"
    break;


#line 1520 "3AC.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 192 "3AC.y"



int main(int argc, char* argv[])
{
    extern FILE *yyin;
    yyin = fopen(argv[1], "r");

    if (yyin == NULL)
    {
        printf("Could not open input file\n");
        return -1;
    }

    outfile = fopen("out.txt", "w");
    fprintf(outfile, "Three Address Code:\n------------------------------------------\n");
    yyparse();
    if (flag == 0)
    {
        printf("Program parsed Successfully\n");
    }
}

void yyerror(char *str)
{
    printf("\nError at Line: %d -- %s\n", yylineno, str);
    flag = 1;
}

void new_variable()
{
    char res[10];
    sprintf(res, "T%d", variable_count++);
    strcpy(variable, res);
}

int new_line_label()
{
    int res = line_label_count++;
    return res;
}
