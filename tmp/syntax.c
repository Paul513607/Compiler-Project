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
#line 1 "../syntax.y"

    #include <stdbool.h>
	#include <stdio.h>
	#include <stdlib.h>
    #include "../pls-libs/plsLangBuiltIns.h"

    extern int yylex (void);
    extern int yyerror (char const *);

#line 80 "syntax.c"

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
#ifndef YY_YY_SYNTAX_H_INCLUDED
# define YY_YY_SYNTAX_H_INCLUDED
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
    print = 258,
    Integer = 259,
    Float = 260,
    Character = 261,
    Bool = 262,
    String = 263,
    Const = 264,
    GEQ = 265,
    LEQ = 266,
    AND = 267,
    OR = 268,
    EQEQ = 269,
    LS = 270,
    GE = 271,
    PLUS = 272,
    MINUS = 273,
    PROD = 274,
    DIV = 275,
    EQUAL = 276,
    IF = 277,
    WHILE = 278,
    FOR = 279,
    ELSE = 280,
    ELIF = 281,
    FUN = 282,
    RETURN = 283,
    DEFINE_TYPE = 284,
    String_Value = 285,
    Character_Value = 286,
    EVAL = 287,
    exit_command = 288,
    number = 289,
    number_r = 290,
    IDENTIFIER = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "../syntax.y"

	double num; 
	char string[1000]; 
	int type_id; 
	struct var* strct;
	struct parameter* funParam;

#line 177 "syntax.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_H_INCLUDED  */



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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   594

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

#define YYUNDEFTOK  2
#define YYMAXUTOK   291


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      39,    40,     2,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    76,    77,    80,    81,    82,    83,    84,
      85,    86,    87,    90,    91,    94,    95,    96,    97,    98,
     101,   102,   104,   106,   108,   109,   113,   114,   115,   116,
     117,   118,   120,   121,   122,   123,   124,   125,   126,   130,
     131,   132,   133,   134,   135,   136,   139,   140,   143,   144,
     147,   148,   149,   150,   151,   152,   155,   158,   159,   162,
     165,   166,   169,   170,   173,   174,   175,   176,   181,   184,
     186,   188,   189,   192,   196,   197
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "print", "Integer", "Float", "Character",
  "Bool", "String", "Const", "GEQ", "LEQ", "AND", "OR", "EQEQ", "LS", "GE",
  "PLUS", "MINUS", "PROD", "DIV", "EQUAL", "IF", "WHILE", "FOR", "ELSE",
  "ELIF", "FUN", "RETURN", "DEFINE_TYPE", "String_Value",
  "Character_Value", "EVAL", "exit_command", "number", "number_r",
  "IDENTIFIER", "';'", "','", "'('", "')'", "'{'", "'}'", "'['", "']'",
  "$accept", "program", "lines", "line", "ELEMENTS", "DATA_TYPE",
  "assignment", "exp", "term", "fun_call_list", "more_call_param", "stat",
  "ELSE_", "ELIF_S", "ELIF_", "smtm", "smtm_types", "smtm_type",
  "FUNCTION", "lista_param", "more_params", "paramentru", "smtm_fun", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    59,    44,    40,
      41,   123,   125,    91,    93
};
# endif

#define YYPACT_NINF (-126)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     287,   -21,  -126,  -126,  -126,  -126,  -126,   122,   -28,   -22,
     -17,    -3,   -12,    10,   -15,    41,   287,  -126,   -11,    35,
    -126,  -126,    43,  -126,  -126,  -126,     3,    44,   186,  -126,
      46,    44,    44,    50,   122,    44,  -126,    44,    44,  -126,
    -126,    52,   -14,  -126,    44,    44,    44,  -126,   314,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
    -126,    64,   325,   356,    66,    57,    58,   367,   568,    49,
      61,    44,    44,   440,   568,    71,    63,   223,  -126,    78,
      78,  -126,   105,   288,    78,    78,   102,   102,    20,    20,
      44,    72,    72,    44,    82,    83,    97,   117,   122,   568,
     258,  -126,  -126,    44,  -126,   568,   101,    51,  -126,   451,
     107,   122,  -126,    44,   103,   106,   104,  -126,  -126,   568,
      44,   -20,  -126,   119,   120,   479,  -126,   145,  -126,    72,
     121,  -126,    51,  -126,    44,  -126,  -126,   568,  -126,   115,
     122,   490,    44,  -126,  -126,  -126,  -126,  -126,    44,  -126,
    -126,   518,   185,  -126,  -126,  -126,   269,   398,   123,    44,
     222,   117,    72,   140,   529,    44,  -126,    44,   128,   557,
     409,  -126,   129,    72,  -126,  -126
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     0,     0,
       9,    10,    45,    44,    42,    43,    39,     0,     0,    26,
       0,     0,     0,     0,    14,     0,     6,     0,     0,     1,
       4,     0,    20,     5,     0,    47,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,    48,     0,    46,     0,    27,    37,
      36,    32,    33,    38,    34,    35,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    21,
       0,     8,    41,     0,    40,    22,     0,    50,    54,     0,
       0,    14,    11,     0,     0,     0,    69,    71,    23,    49,
       0,    39,    61,     0,     0,     0,    67,     0,    62,     0,
       0,    52,    53,    57,     0,    12,    13,    25,    73,     0,
       0,     0,     0,    64,    65,    60,    63,    56,     0,    51,
      58,     0,     0,    68,    72,    66,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,    59,     0,     0,     0,
       0,    75,     0,     0,    74,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,   146,    54,     5,     4,    -1,  -126,  -126,
    -126,     8,    31,  -126,    40,   -89,    21,  -125,  -126,  -126,
    -126,    34,  -126
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    65,   123,   124,   125,    29,    75,
      76,   126,   131,   132,   133,   107,   127,   128,    21,   115,
     116,   117,   153
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      28,    37,   146,   108,    19,    18,    37,    71,    20,    22,
      23,    31,    30,    24,    25,    26,    41,    32,    27,    45,
      19,    18,    33,   142,    20,    42,    48,    35,    38,    72,
      62,    63,    51,    52,    67,   146,    68,    69,    34,    66,
     147,    39,    45,    73,    74,    77,    46,    36,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      99,   100,    43,   166,    47,    23,   129,   130,    24,    25,
      26,    44,    61,    27,   175,    90,    64,    93,    70,   105,
      51,    52,   109,    97,    95,    56,    57,    58,    59,    94,
      98,   103,   119,   114,   120,     2,     3,     4,     5,     6,
       7,   102,   137,   106,    51,    52,    66,    51,   110,   141,
     111,    58,    59,     8,     9,    10,     2,     3,     4,     5,
       6,    47,    23,   151,   112,    24,    25,   121,   113,   138,
      27,   156,   140,   122,   135,   114,   139,   157,   120,     2,
       3,     4,     5,     6,     7,    42,   152,   143,   164,   163,
     148,   167,    40,   149,   169,   136,   170,     8,     9,    10,
     171,   174,   150,   160,   154,    47,    23,     0,     0,    24,
      25,   121,     0,     0,    27,     0,     0,   145,   120,     2,
       3,     4,     5,     6,     7,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,     8,     9,    10,
       0,     0,     0,   159,     0,    47,    23,     0,     0,    24,
      25,   121,     0,    60,    27,   120,     2,     3,     4,     5,
       6,     7,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,     8,     9,    10,     0,     0,     0,
     165,     0,    47,    23,     0,     0,    24,    25,   121,     0,
       0,    27,     0,     0,     0,     0,     0,   104,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
       1,     2,     3,     4,     5,     6,     7,     0,    49,    50,
      51,    52,   118,    54,    55,    56,    57,    58,    59,     8,
       9,    10,     0,   161,     0,     0,    11,     0,     0,    12,
      13,     0,     0,    14,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   173,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,     0,     0,     0,     0,     0,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,     0,     0,     0,     0,     0,   144,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   155,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
       0,     0,     0,     0,     0,   158,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,     0,
       0,     0,     0,     0,   172
};

static const yytype_int16 yycheck[] =
{
       1,    21,   127,    92,     0,     0,    21,    21,     0,    30,
      31,    39,     7,    34,    35,    36,    27,    39,    39,    39,
      16,    16,    39,    43,    16,    36,    27,    39,    43,    43,
      31,    32,    12,    13,    35,   160,    37,    38,    41,    34,
     129,     0,    39,    44,    45,    46,    43,    37,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      71,    72,    37,   162,    30,    31,    25,    26,    34,    35,
      36,    38,    36,    39,   173,    21,    36,    21,    36,    90,
      12,    13,    93,    44,    36,    17,    18,    19,    20,    42,
      39,    38,   103,    98,     3,     4,     5,     6,     7,     8,
       9,    40,   113,    41,    12,    13,   111,    12,    36,   120,
      37,    19,    20,    22,    23,    24,     4,     5,     6,     7,
       8,    30,    31,   134,    37,    34,    35,    36,    21,    36,
      39,   142,    38,    42,    37,   140,    40,   148,     3,     4,
       5,     6,     7,     8,     9,    36,    41,    37,   159,    36,
      39,    21,    16,   132,   165,   111,   167,    22,    23,    24,
      42,    42,   132,   152,   140,    30,    31,    -1,    -1,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    42,     3,     4,
       5,     6,     7,     8,     9,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    22,    23,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,    -1,    -1,    34,
      35,    36,    -1,    37,    39,     3,     4,     5,     6,     7,
       8,     9,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    22,    23,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,    -1,    -1,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    44,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       3,     4,     5,     6,     7,     8,     9,    -1,    10,    11,
      12,    13,    44,    15,    16,    17,    18,    19,    20,    22,
      23,    24,    -1,    44,    -1,    -1,    29,    -1,    -1,    32,
      33,    -1,    -1,    36,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    22,    23,
      24,    29,    32,    33,    36,    46,    47,    48,    50,    51,
      56,    63,    30,    31,    34,    35,    36,    39,    52,    53,
      50,    39,    39,    39,    41,    39,    37,    21,    43,     0,
      48,    27,    36,    37,    38,    39,    43,    30,    52,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      37,    36,    52,    52,    36,    49,    50,    52,    52,    52,
      36,    21,    43,    52,    52,    54,    55,    52,    40,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      21,    40,    40,    21,    42,    36,    40,    44,    39,    52,
      52,    37,    40,    38,    44,    52,    41,    60,    60,    52,
      36,    37,    37,    21,    50,    64,    65,    66,    44,    52,
       3,    36,    42,    50,    51,    52,    56,    61,    62,    25,
      26,    57,    58,    59,    37,    37,    49,    52,    36,    40,
      38,    52,    43,    37,    37,    42,    62,    60,    39,    57,
      59,    52,    41,    67,    66,    37,    52,    52,    37,    28,
      61,    44,    40,    36,    52,    28,    60,    21,    37,    52,
      52,    42,    37,    40,    42,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    48,    49,    49,    50,    50,    50,    50,    50,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      53,    53,    53,    53,    53,    53,    54,    54,    55,    55,
      56,    56,    56,    56,    56,    56,    57,    58,    58,    59,
      60,    60,    61,    61,    62,    62,    62,    62,    63,    64,
      64,    65,    65,    66,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     3,     5,     1,
       1,     5,     6,     4,     0,     1,     1,     1,     1,     1,
       2,     4,     5,     5,     3,     6,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       4,     4,     1,     1,     1,     1,     1,     0,     1,     3,
       5,     7,     6,     6,     5,    13,     2,     1,     2,     5,
       3,     2,     1,     2,     2,     2,     3,     1,     7,     1,
       0,     1,     3,     2,     6,     5
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
#line 71 "../syntax.y"
                { 
		print_simbol_table(variables, totalVar);
		printf("Program corect sintactic\n\n"); 
	}
#line 1552 "syntax.c"
    break;

  case 3:
#line 76 "../syntax.y"
                                                        {;}
#line 1558 "syntax.c"
    break;

  case 4:
#line 77 "../syntax.y"
                                                        {;}
#line 1564 "syntax.c"
    break;

  case 5:
#line 80 "../syntax.y"
                                                                                        {;}
#line 1570 "syntax.c"
    break;

  case 6:
#line 81 "../syntax.y"
                                                                                                {exit(EXIT_SUCCESS);}
#line 1576 "syntax.c"
    break;

  case 7:
#line 82 "../syntax.y"
                                                                                                {printValue((yyvsp[-1].strct));}
#line 1582 "syntax.c"
    break;

  case 8:
#line 83 "../syntax.y"
                                                                                {printStr((yyvsp[-3].string)); printValue((yyvsp[-1].strct));}
#line 1588 "syntax.c"
    break;

  case 9:
#line 84 "../syntax.y"
                                                                                                        {;}
#line 1594 "syntax.c"
    break;

  case 10:
#line 85 "../syntax.y"
                                                                                                        {;}
#line 1600 "syntax.c"
    break;

  case 11:
#line 86 "../syntax.y"
                                                                                {Eval_function((yyvsp[-2].strct));}
#line 1606 "syntax.c"
    break;

  case 12:
#line 87 "../syntax.y"
                                                                {pushStructVariable((yyvsp[-1].string));}
#line 1612 "syntax.c"
    break;

  case 13:
#line 90 "../syntax.y"
                                                {;}
#line 1618 "syntax.c"
    break;

  case 14:
#line 91 "../syntax.y"
                                                                                                {;}
#line 1624 "syntax.c"
    break;

  case 15:
#line 94 "../syntax.y"
                                 {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1630 "syntax.c"
    break;

  case 16:
#line 95 "../syntax.y"
                                                 {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1636 "syntax.c"
    break;

  case 17:
#line 96 "../syntax.y"
                                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1642 "syntax.c"
    break;

  case 18:
#line 97 "../syntax.y"
                                                 {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1648 "syntax.c"
    break;

  case 19:
#line 98 "../syntax.y"
                                                 {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1654 "syntax.c"
    break;

  case 20:
#line 101 "../syntax.y"
                                                                                {pushEmptyVariable((yyvsp[0].string), (yyvsp[-1].type_id));}
#line 1660 "syntax.c"
    break;

  case 21:
#line 102 "../syntax.y"
                                                                                {pushVariable((yyvsp[-2].string), (yyvsp[-3].type_id), (yyvsp[0].strct));}
#line 1666 "syntax.c"
    break;

  case 22:
#line 104 "../syntax.y"
                                                                        {pushVariableConst((yyvsp[-2].string), (yyvsp[-3].type_id), (yyvsp[0].strct));}
#line 1672 "syntax.c"
    break;

  case 23:
#line 106 "../syntax.y"
                                                                                {pushArray((yyvsp[-3].string), (yyvsp[-4].type_id), (yyvsp[-1].strct));}
#line 1678 "syntax.c"
    break;

  case 24:
#line 108 "../syntax.y"
                                                                                        {updateValue((yyvsp[-2].string), (yyvsp[0].strct));}
#line 1684 "syntax.c"
    break;

  case 25:
#line 109 "../syntax.y"
                                                                                {updateArrValue((yyvsp[-5].string), (yyvsp[-3].strct), (yyvsp[0].strct));}
#line 1690 "syntax.c"
    break;

  case 26:
#line 113 "../syntax.y"
                                        {(yyval.strct) = (yyvsp[0].strct);}
#line 1696 "syntax.c"
    break;

  case 27:
#line 114 "../syntax.y"
                                                {(yyval.strct) = (yyvsp[-1].strct);}
#line 1702 "syntax.c"
    break;

  case 28:
#line 115 "../syntax.y"
                                    {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), PLUS);}
#line 1708 "syntax.c"
    break;

  case 29:
#line 116 "../syntax.y"
                                    {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), MINUS);}
#line 1714 "syntax.c"
    break;

  case 30:
#line 117 "../syntax.y"
                                    {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), PROD);}
#line 1720 "syntax.c"
    break;

  case 31:
#line 118 "../syntax.y"
                                        {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), DIV);}
#line 1726 "syntax.c"
    break;

  case 32:
#line 120 "../syntax.y"
                                                {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), AND);}
#line 1732 "syntax.c"
    break;

  case 33:
#line 121 "../syntax.y"
                                                {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), OR);}
#line 1738 "syntax.c"
    break;

  case 34:
#line 122 "../syntax.y"
                                                        {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), LS) ;}
#line 1744 "syntax.c"
    break;

  case 35:
#line 123 "../syntax.y"
                                                        {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), GE);}
#line 1750 "syntax.c"
    break;

  case 36:
#line 124 "../syntax.y"
                                                        {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), LEQ);}
#line 1756 "syntax.c"
    break;

  case 37:
#line 125 "../syntax.y"
                                                        {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), GEQ);}
#line 1762 "syntax.c"
    break;

  case 38:
#line 126 "../syntax.y"
                                                        {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), EQEQ);}
#line 1768 "syntax.c"
    break;

  case 39:
#line 130 "../syntax.y"
                                                                {(yyval.strct) = temporaryPointVar((yyvsp[0].string));}
#line 1774 "syntax.c"
    break;

  case 40:
#line 131 "../syntax.y"
                                                                {(yyval.strct) = temporaryPointArr((yyvsp[-3].string), (yyvsp[-1].strct));}
#line 1780 "syntax.c"
    break;

  case 41:
#line 132 "../syntax.y"
                                                        {(yyval.strct) = temporaryPointFun((yyvsp[-3].string), (yyvsp[-1].funParam));}
#line 1786 "syntax.c"
    break;

  case 42:
#line 133 "../syntax.y"
                                                                {(yyval.strct) = temporaryPointNum((yyvsp[0].num), Integer);}
#line 1792 "syntax.c"
    break;

  case 43:
#line 134 "../syntax.y"
                                                                                {(yyval.strct) = temporaryPointNum((yyvsp[0].num), Float);}
#line 1798 "syntax.c"
    break;

  case 44:
#line 135 "../syntax.y"
                                                                        {(yyval.strct) = temporaryPointStr((yyvsp[0].string), Character);}
#line 1804 "syntax.c"
    break;

  case 45:
#line 136 "../syntax.y"
                                                                        {(yyval.strct) = temporaryPointStr((yyvsp[0].string), String);}
#line 1810 "syntax.c"
    break;

  case 46:
#line 139 "../syntax.y"
                                                        {(yyval.funParam) = (yyvsp[0].funParam);}
#line 1816 "syntax.c"
    break;

  case 47:
#line 140 "../syntax.y"
                                                                                        {(yyval.funParam) = initializeParam(0);}
#line 1822 "syntax.c"
    break;

  case 48:
#line 143 "../syntax.y"
                                                                {(yyval.funParam) = initializeParam((yyvsp[0].strct)->type);}
#line 1828 "syntax.c"
    break;

  case 49:
#line 144 "../syntax.y"
                                                                {pushParam((yyval.funParam), (yyvsp[0].strct)->type);}
#line 1834 "syntax.c"
    break;

  case 50:
#line 147 "../syntax.y"
                                                        {;}
#line 1840 "syntax.c"
    break;

  case 51:
#line 148 "../syntax.y"
                                                        {;}
#line 1846 "syntax.c"
    break;

  case 52:
#line 149 "../syntax.y"
                                                        {;}
#line 1852 "syntax.c"
    break;

  case 53:
#line 150 "../syntax.y"
                                                        {;}
#line 1858 "syntax.c"
    break;

  case 54:
#line 151 "../syntax.y"
                                                                {;}
#line 1864 "syntax.c"
    break;

  case 55:
#line 152 "../syntax.y"
                                                                                         {;}
#line 1870 "syntax.c"
    break;

  case 56:
#line 155 "../syntax.y"
                    {;}
#line 1876 "syntax.c"
    break;

  case 59:
#line 162 "../syntax.y"
                                {;}
#line 1882 "syntax.c"
    break;

  case 60:
#line 165 "../syntax.y"
                            {;}
#line 1888 "syntax.c"
    break;

  case 61:
#line 166 "../syntax.y"
                                                {;}
#line 1894 "syntax.c"
    break;

  case 62:
#line 169 "../syntax.y"
                                {;}
#line 1900 "syntax.c"
    break;

  case 64:
#line 173 "../syntax.y"
                                {;}
#line 1906 "syntax.c"
    break;

  case 65:
#line 174 "../syntax.y"
                                        {;}
#line 1912 "syntax.c"
    break;

  case 66:
#line 175 "../syntax.y"
                                        { printValue((yyvsp[-1].strct));}
#line 1918 "syntax.c"
    break;

  case 67:
#line 176 "../syntax.y"
                                                {;}
#line 1924 "syntax.c"
    break;

  case 68:
#line 182 "../syntax.y"
                {pushFunction((yyvsp[-4].string), (yyvsp[-6].type_id), (yyvsp[-2].funParam));}
#line 1930 "syntax.c"
    break;

  case 69:
#line 185 "../syntax.y"
                {(yyval.funParam) = (yyvsp[0].funParam);}
#line 1936 "syntax.c"
    break;

  case 70:
#line 186 "../syntax.y"
                                {(yyval.funParam) = initializeParam(0);}
#line 1942 "syntax.c"
    break;

  case 71:
#line 188 "../syntax.y"
                         {(yyval.funParam) = initializeParam((yyvsp[0].type_id));}
#line 1948 "syntax.c"
    break;

  case 72:
#line 189 "../syntax.y"
                                                      {pushParam((yyval.funParam), (yyvsp[0].type_id));}
#line 1954 "syntax.c"
    break;

  case 73:
#line 192 "../syntax.y"
                                   {(yyval.type_id) = (yyvsp[-1].type_id);}
#line 1960 "syntax.c"
    break;

  case 74:
#line 196 "../syntax.y"
                                                   {;}
#line 1966 "syntax.c"
    break;

  case 75:
#line 197 "../syntax.y"
                                                  {;}
#line 1972 "syntax.c"
    break;


#line 1976 "syntax.c"

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
#line 199 "../syntax.y"


extern FILE * yyin;
extern int yylineno;

extern int yyparse (void);

int yyerror (char const * pError) {
    fprintf(stderr, "Error : %s at line %d\n", pError, yylineno);
    return 0;
}
/* 
int main (void) {

	for (int i = 0; i < 100; i++) {
		variables[i].var_type = TYPE_NORMAL;
		variables[i].isInitilalized[0] = 0;
	}

    yyin = fopen("input", "r");
	yyparse();
	//print_simbol_table(variables, 100);
} */


/**
 ***************************************************
 *                                                 *
 *                BACKEND FUNCTIONs                * 
 *                                                 *
 *************************************************** 
 */


void pushStructVariable(char*id)
{
	int i = getVariableIndex(id);

	if (i != -1) {
		printf( "The variable %s was already declared here\n", id);
		exit(0);
	}

	struct var *v = variables + totalVar;
	
	sprintf(v->id, "%s", id);
	v->type = 0;

	totalVar++;
}

void pushFunction(char* id, int retType, struct parameter* p) {
	int i = getVariableIndex(id);

	if (i != -1) {
		printf("Name for function %s was already taken.\n" , id);
		exit(0);
	}

	struct var *v = variables + totalVar;
	
	sprintf(v->id, "%s", id);
	v->var_type = TYPE_FUNCTION;
	v->type = retType;
	v->parameterNum = p->paramNum;
	for (int i = 0; i < p->paramNum; i++) {
		v->parameterTypes[i] = p->parameterTypes[i];
	}

	free(p);
	totalVar++;
}

void pushParam(struct parameter* p, int type) {
	p->parameterTypes[p->paramNum++] = type;	
}

struct parameter* initializeParam(int type) {
	struct parameter *p = (struct parameter*)malloc(sizeof(struct parameter));
	if (type == 0) {
		p->paramNum = 0;
		return p;
	}

	p->paramNum = 1;
	p->parameterTypes[0] = type;

	return p;
}

void Eval_function(struct var* x)
{
  if(x->type == Integer)
  		printf("%d\n" ,(int)x->array[0]);
	
  else
  {
	  	printf("Eval function must have an integer type parameter.\n");
		exit(0);
  }
   
}

void print_simbol_table(struct var* v,int n)
{
	FILE *fd;
	fd = fopen("symbol_table.txt", "w");
	if(fd == NULL)
	{
		char buffer[100];
		sprintf(buffer, "Nu pot deschide fisierul symbol_table.txt.");
		yyerror(buffer);
		exit(0);
	}
 	
 	for(int i=0;i<n;i++)
	{
	    if(v[i].var_type != TYPE_ARRAY && v[i].var_type != TYPE_FUNCTION)
		{
			fprintf(fd,"nume : %s  ",v[i].id);
			switch (v[i].type) {
			case Integer:
				fprintf(fd, "tip = Integer valoare = %d  ", (int)v[i].array[0]);
				break;
			case Character:
				fprintf(fd, "tip = Character valoare = '%c' ", (char)v[i].array[0]);
				break;
			case Float:
				fprintf(fd, "tip = Float valoare = %f ", (float)v[i].array[0]);
				break;
			case String:
				fprintf(fd, "tip = String valoare = %s", (char*)v[i].arrayStr[0]);
				break;
			case Bool:
				fprintf(fd, "tip = Bool valoare = %d ", (int)v[i].array[0]);
				break;
			case 0:
				fprintf(fd, "tip = User Defined Type\n");
				break;
			default:
				break;
			}
			if(v[i].type!=0)
				if(v[i].cnst)
					fprintf(fd, "constant \n");
				else
					fprintf(fd, "not constant \n");
		}
		else if(v[i].var_type != TYPE_FUNCTION)
		{
			fprintf(fd,"nume : %s  ",v[i].id);
			switch (v[i].type) {
			case Integer:
				fprintf(fd, "tip = Integer Array ");
				for(int j=0;j<v[i].arraySize;j++)
				{
				 	fprintf(fd,"%s[%d] = %d  ", v[i].id, j, (int)v[i].array[j]);
				}
				break;
			case Character:
				fprintf(fd, "tip = Chraracter Array ");
				for(int j=0;j<v[i].arraySize;j++)
				{
				 	fprintf(fd,"%s[%d] = %c  ", v[i].id, j, (char)v[i].array[j]);
				}
				break;
			case Float:
				fprintf(fd, "tip = Float Array ");
				for(int j=0;j<v[i].arraySize;j++)
				{
				 	fprintf(fd,"%s[%d] = %f  ", v[i].id, j, (float)v[i].array[j]);
				}
				break;
			case String:
				fprintf(fd, "tip = String Array");
				for(int j=0;j<v[i].arraySize;j++)
				{
					fprintf(fd," %s[%d] = \"%s\".", v[i].id, j, (char*)v[i].arrayStr[j]);
				}
				break;
			case Bool:
				fprintf(fd, "tip = Bool Array ");
				for(int j=0;j<v[i].arraySize;j++)
				{
				 	fprintf(fd,"%s[%d] = %d  ", v[i].id, j, (int)v[i].array[j]);
				}
				break;
			default:
				break;
			}
			fprintf(fd,"\n");
		}

	}
	fprintf(fd,"\n");
    for(int i=0;i<n;i++)
	{
		if(v[i].var_type == TYPE_FUNCTION)
		{
            fprintf(fd, "Function : ");
			fprintf(fd, "%s %s", defToDataType(v[i].type), v[i].id);
			int nr = v[i].parameterNum;
			if (nr != 0) 
			{   
				fprintf(fd,  " (");
				for (int j = 0; j < nr-1 ; j++)
				{
					fprintf(fd, "%s, ", defToDataType(v[i].parameterTypes[j]));
				}
				fprintf(fd, "%s", defToDataType(v[i].parameterTypes[nr-1]));
				fprintf(fd,  ") ");
			}
			else
			{
			 fprintf(fd, "();");
			}

			fprintf(fd, "\n");
			
		}
	}
}

struct var* temporaryPointNum(double val, int type) {
	struct var * v = initializeVar();

	v->array[0] = val;
	v->type = type;

	return v;
}

struct var* temporaryPointStr(void* val, int type) {
	struct var *v = initializeVar();

	v->type = type;

	if (type == String) {
		sprintf(v->arrayStr[0], "%s", (char*)val);
	} else {
		v->array[0] = ((char*)val)[0];
	}

	return v;
}

struct var* temporaryPointFun(char* id, struct parameter* pr) {
	int i = getVariableIndex(id);

	if (i == -1) {
		printf(  "Function %s was not declared in this scope.\n", id);
		exit(0);
	}

	struct var* v = variables + i;

	if (v->var_type != TYPE_FUNCTION) {
		printf(  "%s should be a function, not a variable.\n"  , v->id);
		exit(0);
	}

	if (v->parameterNum != pr->paramNum) {
		printf(  "The number of variables should match for function %s.\n"  , v->id);
		exit(0);
	}

	int n = v->parameterNum;

	int *funParams = v->parameterTypes;
	int *callParams = pr->parameterTypes;

	for (int i = 0; i < n; i++) {
		if (funParams[i] != callParams[i]) {
			printf(  "%s  parameters should match function definition.\n"  , v->id);
			printf(  "Parameter  %d  is  %s  but in definition is  %s .\n"  , i + 1, defToDataType(callParams[i]), defToDataType(funParams[i]));
			exit(0);
		}
	}

	v = initializeVar();
	v->type = Integer;
	v->array[0] = 0;

	return v;
}

struct var* temporaryPointVar(char* id) {
	int i = getVariableIndex(id);

	if (i == -1) {
		printf(  "%s  was not declared in this scope.\n", id);
		exit(0);
	}
	
	struct var* v = variables + i;
	
	if (v->var_type == TYPE_NORMAL && v->isInitilalized[0] == 0) {
		printf(  "%s was not initialzied. The default value will be used. Line %d.\n"  , id, yylineno);
	}

	if (v->var_type == TYPE_FUNCTION) {
		v->array[0] = 0;
	}

	return v;
}

struct var* temporaryPointArr(char* id, struct var* node) {
	int i = getVariableIndex(id);

	if (i == -1) {
		printf(  "%s  was not declared in this scope.\n", id);
		exit(0);
	}

	struct var *v = variables + i;

	if (v->var_type != TYPE_ARRAY) {
		printf(  "Varialbe  %s  is not an array type.\n"  , v->id);
		exit(0);
	}

	if (node->type == String) {
		printf( "This array type cannot be accessed with a string expression.\n"  );
		exit(0);
	}

	int n = (int)node->array[0];

	if (n < 0) {
		printf(  "Array index should be more than 0 but it's  %d .\n"  , n);
		exit(0);
	}

	if (n >= v->arraySize) {
		printf(  "Array size exceded for variable  %s  from expression:  %d , where maximum index is  %d .\n"  , id, n, v->arraySize - 1);
		exit(0);
	}

	struct var *exp = initializeVar();

	exp->type = v->type;

	if (v->var_type == TYPE_ARRAY && v->isInitilalized[n] == 0) {
		printf(  "%s[%d] was not initialzied. The default value will be used. Line %d.\n"  , id, n, yylineno);
	}

	if (v->type == String) {
		sprintf(exp->arrayStr[0], "%s", v->arrayStr[n]);
	} else if (v->type == Bool) {
		exp->array[0] = v->array[n] != 0;
	} else {
		exp->array[0] = v->array[n];
	}

	return exp;
}

void freeVar(struct var* v) {
	if (strlen(v->id) == 0) {
		free(v);
	}
}

int getVariableIndex(char* varName) {
	for (int i = 0; i < totalVar; i++) {
		if (strcmp(varName, variables[i].id) == 0) {
			return i;
		}
	}

	return -1;
} 

void updateValue(char* id, struct var* exp) {
	int i = getVariableIndex(id);

	if (i == -1) {
		printf(  "%s  was not declared in this scope.\n", id);
		exit(0);
	} 

	struct var *vr = variables + i;
	
	if (vr->var_type == TYPE_FUNCTION) {
		printf( "Function  %s  cannot be changed.\n"  , vr->id);
		exit(0);
	}

	if (vr->var_type == TYPE_ARRAY && exp->var_type != TYPE_ARRAY) {
		printf(  "Variable  %s  is an array type but the expression is not.\n"  , vr->id);
		exit(0);
	}

	if (vr->var_type != TYPE_ARRAY && exp->var_type == TYPE_ARRAY) {
		printf(  "Variable  %s  is a normal type but expression is an array.\n"  , vr->id);
		exit(0);
	}
	
	if (vr->type == String && exp->type != String || vr->type != String && exp->type == String) {
		printf(  "Data types should match.\n"  );
		exit(0);
	}
	
	if(vr->cnst)
	{
		printf(  "Constat variable  %s  cannot be modified.\n", id);
		exit(0);
	} 

	if (vr->var_type == TYPE_ARRAY && exp->var_type == TYPE_ARRAY) {

		int n = vr->arraySize;
		int m = exp->arraySize;

		for (int i = 0; i < n && i < m; i++) {
			if (vr->type == String) {
				sprintf(vr->arrayStr[i], "%s", exp->arrayStr[i]);
			} else if (vr->type == Bool) {
				vr->array[i] = exp->array[i] != 0;
			} else {
				vr->array[i] = exp->array[i];
			}
		}

		return;
	}

	vr->isInitilalized[0] = 1;
	if (vr->type == String) {
		sprintf(vr->arrayStr[0], "%s", exp->arrayStr[0]);
	} else if (vr->type == Bool) {
		vr->array[0] = exp->array[0] != 0;
	} else {
		vr->array[0] = exp->array[0];
	}

}

void updateArrValue(char* id, struct var* exp_1, struct var* exp_2) {
	int i = getVariableIndex(id);

	if (i == -1) {
		printf(  "%s was not declared in this scope.\n" , id);
		exit(0);
	}

	struct var *v = variables + i;

	if (v->var_type == TYPE_FUNCTION) {
		printf("Invalid expression for function %s.\n", v->id);
		exit(0);
	}

	if (exp_1->type == String) {
		printf("This array type cannot be accessed with a string expression.\n" );
		exit(0);
	}

	int n = (int)exp_1->array[0];

	if (n < 0) {
		printf( "Array index should be more than 0 but it's %d .\n", n);
		exit(0);
	}

	if (n >= v->arraySize) {
		printf("Array size exceded for %s: %d, where maximum index is %d.\n" , id, n, v->arraySize - 1);
		exit(0);
	}

	if (v->type == String && exp_2->type != String || v->type != String && exp_2->type == String) {
		printf("Data type should match for variable %s [%d].\n", id, n);
		exit(0);
	}

	v->isInitilalized[n] = 1;

	if (v->type == String) {
		sprintf(v->arrayStr[n], "%s", exp_2->arrayStr[0]);
	} else if (v->type == Bool) {
		v->array[n] = exp_2->array[0] != 0;
	} else {
		v->array[n] = exp_2->array[0];
	}
}

void pushEmptyVariable(char* id, int type) {
	int i = getVariableIndex(id);

	if (i != -1) {
		printf("The variable %s was already declared here\n", id);
		exit(0);
	}

	struct var *v = variables + totalVar;
	
	sprintf(v->id, "%s", id);
	v->type = type;

	if (type == String) {
		sprintf(v->arrayStr[0], "%s", "");
	} else {
		v->array[0] = 0;
	}

	totalVar++;
}

void pushVariable(char* id, int type, struct var* exp) {
	int i = getVariableIndex(id);

	if (i != -1) {
        printf("The variable %s was already declared here\n", id);

		exit(0);
	}

	struct var *v = variables + totalVar;
	
	sprintf(v->id, "%s", id);
	v->type = type;
	v->isInitilalized[0] = 1;
	if (type == String) {
		sprintf(v->arrayStr[0], "%s", exp->arrayStr[0]);
	} else if (type == Bool) {
		v->array[0] = exp->array[0] != 0;
	} else {
		v->array[0] = exp->array[0];
	}

	freeVar(exp);
	totalVar++;
}

void pushArray(char* id, int type, struct var* exp) {
	int i = getVariableIndex(id);

	if (i != -1) {
        printf("The variable %s was already declared here\n", id);
		exit(0);
	}

	if (exp->type == String) {
		printf("Array types cannot be declared with string expressions.\n" );
		exit(0);
	}

	int n = (int)exp->array[0];

	if (n <= 0) {
		printf( "The array size should be at least 1.\n"  );
		exit(0);
	}

	struct var *v = variables + totalVar;

	if (v->type == String && exp->type != String || v->type != String && exp->type == String) {
		printf( "Data types should match.\n"  );
		exit(0);
	}

	sprintf(v->id, "%s", id);
	v->type = type;
	v->var_type = TYPE_ARRAY;
	v->arraySize = n;

	totalVar++;
}

void pushVariableConst(char* id, int type, struct var* exp) {
	int i = getVariableIndex(id);

	if (i != -1) {
		printf("The variable %s was already declared here\n", id);
		exit(0);
	}

	struct var *v = variables + totalVar;
	
	sprintf(v->id, "%s", id);
	v->type = type;

	if (type == String) {
		sprintf(v->arrayStr[0], "%s", exp->arrayStr[0]);
	} else if (type == Bool) {
		v->array[0] = exp->array[0] != 0;
	} else {
		v->array[0] = exp->array[0];
	}
    v->cnst=1;
	v->isInitilalized[0] = 1;
	freeVar(exp);
	totalVar++;
}

struct var* comp(struct var* a, struct var* b, int op_type) {
	
	struct var* v = initializeVar();
	double c;

	int n;

	switch (op_type) {
	case PLUS:;
		if (a->type == String && b->type == String) {
			v->type = String;
			strcpy(v->arrayStr[0], "");
			strcat(v->arrayStr[0], a->arrayStr[0]);
			strcat(v->arrayStr[0], b->arrayStr[0]);
			break;
		}

		if (a->type != String && b->type == String) {
			v->type = String;
			strcpy(v->arrayStr[0], "");
			sprintf(v->arrayStr[0], "%f", (float)a->array[0]);
			strcat(v->arrayStr[0], b->arrayStr[0]);
			break;
		}

		if (a->type == String && b->type != String) {
			v->type = String;
			strcpy(v->arrayStr[0], "");

			strcat(v->arrayStr[0], a->arrayStr[0]);
			char bfr[10];
			sprintf(bfr, "%f", (float)b->array[0]);
			strcat(v->arrayStr[0], bfr);
			break;
		}

		if (a->type == Character) {
			v->type = Character;
			v->array[0] = (int)(a->array[0] + b->array[0]);
			break;
		}

		c = a->array[0] + b->array[0];

		if (c == (int)c) {
			v->type = Integer;
			v->array[0] = (int)c;
		} else {
			v->type = Float;
			v->array[0] = c;
		}
		break;
	case MINUS:;

		if (a->type == Character) {
			v->type = Character;
			v->array[0] = (int)(a->array[0] - b->array[0]);
			break;
		}

		c = a->array[0] - b->array[0];

		if (c == (int)c) {
			v->type = Integer;
			v->array[0] = (int)c;
		} else {
			v->type = Float;
			v->array[0] = c;
		}
		break;
	case PROD:;
		c = a->array[0] * b->array[0];

		if (c == (int)c) {
			v->type = Integer;
			v->array[0] = (int)c;
		} else {
			v->type = Float;
			v->array[0] = c;
		}
		break;
	case DIV:;
	    double c = a->array[0] / b->array[0];
		if (c == (int)c) 
			v->type = Integer;
		else
			v->type = Float;
		if (b->array[0] == 0) {
			printf( "Division with 0 is not possible.\n");
			exit(0);
		}

	    c = a->array[0] / b->array[0];

		if (c == (int)c) { 
			v->type = Integer;
			v->array[0] = (int)c;
		} else {
			v->type = Float;
			v->array[0] = c;
		}
		break;
	case LS:;
		if (a->type == String && b->type == String) {
			n = strcmp(a->arrayStr[0], b->arrayStr[0]);
			v->array[0] = n == -1;
		} else {
			v->array[0] = (int)(a->array[0] < b->array[0]);
		}
		v->type = Integer;
		break;
	case LEQ:;
		if (a->type == String && b->type == String) {
			n = strcmp(a->arrayStr[0], b->arrayStr[0]);
			v->array[0] = n == -1 || n == 0;
		} else {
			v->array[0] = (int)(a->array[0] <= b->array[0]);
		}
		v->type = Integer;
		break;
	case GE:;
		if (a->type == String && b->type == String) {
			n = strcmp(a->arrayStr[0], b->arrayStr[0]);
			v->array[0] = n == 1;
		} else {
			v->array[0] = (int)(a->array[0] > b->array[0]);
		}
		v->type = Integer;
		break;
	case GEQ:;
		if (a->type == String && b->type == String) {
			n = strcmp(a->arrayStr[0], b->arrayStr[0]);
			v->array[0] = n == 1 || n == 0;
		} else {
			v->array[0] = (int)(a->array[0] >= b->array[0]);
		}
		v->type = Integer;
		break;
	case EQEQ:;
		if (a->type == String && b->type == String) {
			n = strcmp(a->arrayStr[0], b->arrayStr[0]);
			v->array[0] = n == 0;
		} else {
			v->array[0] = (int)(a->array[0] == b->array[0]);
		}
		v->type = Integer;
		break;
	}

	freeVar(a);
	freeVar(b);
	return v;
}

void printStr(const char * str){
	global_expr_counter++;
	char index = (char) global_expr_counter + '0';
	printf("%s = ", str);
	char expr[1024];
	strcpy(expr, "node ast-maker.js \"");
	strcat(expr, str);
	strcat(expr, "\" \"");
	int len = strlen(expr);
	expr[len] = index;
	expr[len + 1] = '\0';
	strcat(expr, "\"");
	system(expr);
}

void printValue(struct var* node) {
	int type = node->type;
	int n;

	switch (type) {
	case Integer:
		if (node->var_type == TYPE_ARRAY) {
			n = node->arraySize;
			printf("{");
			for (int i = 0; i < n - 1; i++) {
				printf("%d, ", (int)node->array[i]);
			}
			printf("%d", (int)node->array[n - 1]);
			printf("}\n");
			break;
		}
		if (node->var_type == TYPE_NORMAL)
			printf("%d\n", (int)node->array[0]);
		break;
	case Character:
		if (node->var_type == TYPE_ARRAY) {
			n = node->arraySize;
			printf("{");
			for (int i = 0; i < n - 1; i++) {
				printf("'%c', ", (char)node->array[i]);
			}
			printf("'%c'", (char)node->array[n - 1]);
			printf("}\n");
			break;
		}
		if (node->var_type == TYPE_NORMAL)
			printf("'%c'\n", (char)node->array[0]);
		break;
	case Float:
		if (node->var_type == TYPE_ARRAY) {
			n = node->arraySize;
			printf("{");
			for (int i = 0; i < n - 1; i++) {
				printf("%f, ", (float)node->array[i]);
			}
			printf("%f", (float)node->array[n - 1]);
			printf("}\n");
			break;
		}
		if (node->var_type == TYPE_NORMAL)
			printf("%f\n", (float)node->array[0]);
		break;
	case String:
		if (node->var_type == TYPE_ARRAY) {
			n = node->arraySize;
			printf("{");
			for (int i = 0; i < n - 1; i++) {
				printf("\"%s\", ", node->arrayStr[i]);
			}
			printf("\"%s\"", node->arrayStr[n - 1]);
			printf("}\n");
			break;
		}
		if (node->var_type == TYPE_NORMAL)
			printf("\"%s\"\n", node->arrayStr[0]);
		break;
	case Bool:
		if (node->var_type == TYPE_ARRAY) {
			n = node->arraySize;
			printf("{");
			for (int i = 0; i < n - 1; i++) {
				printf("\"%d\", ", (int)node->array[i]);
			}
			printf("\"%d\"", (int)node->array[n - 1]);
			printf("}\n");
			break;
		}
		if (node->var_type == TYPE_NORMAL)
			printf("%d\n", (int)node->array[0]);
		break;
	default:
		break;
	}

	if (node->var_type == TYPE_FUNCTION) {
		printf("%s %s", defToDataType(node->type), node->id);
		n = node->parameterNum;
		if (n != 0) {
			printf(" -> {");
			for (int i = 0; i < n - 1; i++) {
				printf("%s, ", defToDataType(node->parameterTypes[i]));
			}
			printf("%s}", defToDataType(node->parameterTypes[n - 1]));
		}

		printf("\n");
	}

}

struct var* initializeVar() {
	struct var* v = (struct var*)malloc(sizeof(struct var));

	sprintf(v->id, "%s", "");
	sprintf(v->arrayStr[0], "%s", "");

	v->array[0] = 0;
	v->var_type = TYPE_NORMAL;
	v->type = 0;

	return v;
}

char* defToDataType(int n) {
	switch (n) {
	case Bool:
		return "Bool";
		break;
	case Character:
		return "Char";
		break;
	case Integer:
		return "Integer";
		break;
	case Float:
		return "Float";
		break;
	case String:
		return "String";
		break;
	}
	return "";
}
