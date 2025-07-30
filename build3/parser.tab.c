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
#line 1 "src3/parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int yylex(void);
void yyerror(const char *msg);

#line 81 "build3/parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_VOID = 6,                       /* VOID  */
  YYSYMBOL_REFERENCE = 7,                  /* REFERENCE  */
  YYSYMBOL_POINTER = 8,                    /* POINTER  */
  YYSYMBOL_NUMBER = 9,                     /* NUMBER  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_ASSIGNMENT = 11,                /* ASSIGNMENT  */
  YYSYMBOL_ARG = 12,                       /* ARG  */
  YYSYMBOL_SPACE = 13,                     /* SPACE  */
  YYSYMBOL_TAB = 14,                       /* TAB  */
  YYSYMBOL_NEWLINE = 15,                   /* NEWLINE  */
  YYSYMBOL_END_OF_FILE = 16,               /* END_OF_FILE  */
  YYSYMBOL_LEFT_BRACE = 17,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 18,               /* RIGHT_BRACE  */
  YYSYMBOL_LEFT_CURLY = 19,                /* LEFT_CURLY  */
  YYSYMBOL_RIGHT_CURLY = 20,               /* RIGHT_CURLY  */
  YYSYMBOL_LEFT_PAREN = 21,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 22,               /* RIGHT_PAREN  */
  YYSYMBOL_STATIC = 23,                    /* STATIC  */
  YYSYMBOL_CONST = 24,                     /* CONST  */
  YYSYMBOL_UNSIGNED = 25,                  /* UNSIGNED  */
  YYSYMBOL_VOLATILE = 26,                  /* VOLATILE  */
  YYSYMBOL_MUTABLE = 27,                   /* MUTABLE  */
  YYSYMBOL_REGISTER = 28,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 29,                  /* RESTRICT  */
  YYSYMBOL_INLINE = 30,                    /* INLINE  */
  YYSYMBOL_SHIFT_LEFT = 31,                /* SHIFT_LEFT  */
  YYSYMBOL_SHIFT_RIGHT = 32,               /* SHIFT_RIGHT  */
  YYSYMBOL_MODULUS = 33,                   /* MODULUS  */
  YYSYMBOL_EQUALS = 34,                    /* EQUALS  */
  YYSYMBOL_LOGICAL_NOT = 35,               /* LOGICAL_NOT  */
  YYSYMBOL_LOGICAL_AND = 36,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 37,                /* LOGICAL_OR  */
  YYSYMBOL_BIT_AND = 38,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 39,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 40,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 41,                   /* BIT_NOT  */
  YYSYMBOL_ADDITION = 42,                  /* ADDITION  */
  YYSYMBOL_SUBTRACTION = 43,               /* SUBTRACTION  */
  YYSYMBOL_MUTIPLICATION = 44,             /* MUTIPLICATION  */
  YYSYMBOL_DIVISION = 45,                  /* DIVISION  */
  YYSYMBOL_LESS_THAN = 46,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 47,              /* GREATER_THAN  */
  YYSYMBOL_COMMA = 48,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 49,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 50,                     /* COLON  */
  YYSYMBOL_DOUBLE_QUOTE = 51,              /* DOUBLE_QUOTE  */
  YYSYMBOL_SINGLE_QUOTE = 52,              /* SINGLE_QUOTE  */
  YYSYMBOL_QUESTION_MARK = 53,             /* QUESTION_MARK  */
  YYSYMBOL_DOT = 54,                       /* DOT  */
  YYSYMBOL_AT_SYMBOL = 55,                 /* AT_SYMBOL  */
  YYSYMBOL_PRIVATE = 56,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 57,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 58,                    /* PUBLIC  */
  YYSYMBOL_ADDRESS_OF = 59,                /* ADDRESS_OF  */
  YYSYMBOL_SCOPE_RESOLUTION = 60,          /* SCOPE_RESOLUTION  */
  YYSYMBOL_DIRECT_TO_POINTER = 61,         /* DIRECT_TO_POINTER  */
  YYSYMBOL_INDIRECT_TO_POINTER = 62,       /* INDIRECT_TO_POINTER  */
  YYSYMBOL_DIRECT_MEMBER_SELECT = 63,      /* DIRECT_MEMBER_SELECT  */
  YYSYMBOL_INDIRECT_MEMBER_SELECT = 64,    /* INDIRECT_MEMBER_SELECT  */
  YYSYMBOL_IF = 65,                        /* IF  */
  YYSYMBOL_ELSE = 66,                      /* ELSE  */
  YYSYMBOL_FOR = 67,                       /* FOR  */
  YYSYMBOL_DO = 68,                        /* DO  */
  YYSYMBOL_WHILE = 69,                     /* WHILE  */
  YYSYMBOL_CONTINUE = 70,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 71,                     /* BREAK  */
  YYSYMBOL_SWITCH = 72,                    /* SWITCH  */
  YYSYMBOL_CASE = 73,                      /* CASE  */
  YYSYMBOL_GOTO = 74,                      /* GOTO  */
  YYSYMBOL_DEFAULT = 75,                   /* DEFAULT  */
  YYSYMBOL_RETURN = 76,                    /* RETURN  */
  YYSYMBOL_77_ = 77,                       /* '{'  */
  YYSYMBOL_78_ = 78,                       /* '}'  */
  YYSYMBOL_79_ = 79,                       /* ';'  */
  YYSYMBOL_80_ = 80,                       /* '='  */
  YYSYMBOL_81_ = 81,                       /* '('  */
  YYSYMBOL_82_ = 82,                       /* ')'  */
  YYSYMBOL_83_ = 83,                       /* '+'  */
  YYSYMBOL_84_ = 84,                       /* '-'  */
  YYSYMBOL_85_ = 85,                       /* ','  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_program = 87,                   /* program  */
  YYSYMBOL_files = 88,                     /* files  */
  YYSYMBOL_file = 89,                      /* file  */
  YYSYMBOL_scopes = 90,                    /* scopes  */
  YYSYMBOL_scope = 91,                     /* scope  */
  YYSYMBOL_lines = 92,                     /* lines  */
  YYSYMBOL_line = 93,                      /* line  */
  YYSYMBOL_statement = 94,                 /* statement  */
  YYSYMBOL_expr = 95,                      /* expr  */
  YYSYMBOL_numeric_expr = 96,              /* numeric_expr  */
  YYSYMBOL_function = 97,                  /* function  */
  YYSYMBOL_declaration = 98,               /* declaration  */
  YYSYMBOL_params = 99,                    /* params  */
  YYSYMBOL_param = 100,                    /* param  */
  YYSYMBOL_type_modifier = 101,            /* type_modifier  */
  YYSYMBOL_type = 102                      /* type  */
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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   155

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  65

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


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
      81,    82,     2,    83,    85,    84,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    79,
       2,    80,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     2,    78,     2,     2,     2,     2,
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
      75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    61,    62,    65,    68,    69,    72,    73,
      76,    77,    80,    83,    86,    87,    88,    89,    90,    91,
      94,    95,   100,   107,   108,   111,   112,   115,   116,   119,
     127,   128,   129,   130,   131,   132,   133,   134,   137,   138,
     139,   140,   141,   142
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT", "CHAR",
  "VOID", "REFERENCE", "POINTER", "NUMBER", "ID", "ASSIGNMENT", "ARG",
  "SPACE", "TAB", "NEWLINE", "END_OF_FILE", "LEFT_BRACE", "RIGHT_BRACE",
  "LEFT_CURLY", "RIGHT_CURLY", "LEFT_PAREN", "RIGHT_PAREN", "STATIC",
  "CONST", "UNSIGNED", "VOLATILE", "MUTABLE", "REGISTER", "RESTRICT",
  "INLINE", "SHIFT_LEFT", "SHIFT_RIGHT", "MODULUS", "EQUALS",
  "LOGICAL_NOT", "LOGICAL_AND", "LOGICAL_OR", "BIT_AND", "BIT_OR",
  "BIT_XOR", "BIT_NOT", "ADDITION", "SUBTRACTION", "MUTIPLICATION",
  "DIVISION", "LESS_THAN", "GREATER_THAN", "COMMA", "SEMICOLON", "COLON",
  "DOUBLE_QUOTE", "SINGLE_QUOTE", "QUESTION_MARK", "DOT", "AT_SYMBOL",
  "PRIVATE", "PROTECTED", "PUBLIC", "ADDRESS_OF", "SCOPE_RESOLUTION",
  "DIRECT_TO_POINTER", "INDIRECT_TO_POINTER", "DIRECT_MEMBER_SELECT",
  "INDIRECT_MEMBER_SELECT", "IF", "ELSE", "FOR", "DO", "WHILE", "CONTINUE",
  "BREAK", "SWITCH", "CASE", "GOTO", "DEFAULT", "RETURN", "'{'", "'}'",
  "';'", "'='", "'('", "')'", "'+'", "'-'", "','", "$accept", "program",
  "files", "file", "scopes", "scope", "lines", "line", "statement", "expr",
  "numeric_expr", "function", "declaration", "params", "param",
  "type_modifier", "type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-67)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       5,   -67,   -67,   -67,   -67,   -67,   -61,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -43,    90,    45,     5,   -67,
       5,   -67,    90,   -67,   -31,   -67,   -66,   -67,   -29,    38,
      39,    90,    90,    -3,   -67,   -67,   -67,   -67,   -67,    47,
      47,    -8,    43,   -67,   -67,   -67,   -67,   -25,   -67,   -66,
     -66,   -67,   -67,   -46,   -67,   -67,    62,   -67,    46,    90,
     -67,   -67,   -20,   -18,   -67
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    38,    39,    40,    41,    20,     0,    30,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     2,     3,
       5,     6,     8,    10,     0,    13,    17,    15,    14,     0,
       0,     0,     0,     0,     1,     4,     7,    11,    12,     0,
       0,     0,     0,    42,    43,    25,    16,     0,     9,    21,
      22,    29,    23,     0,    27,    26,     0,    24,     0,     0,
      18,    28,     0,     0,    19
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -67,   -67,   -67,    51,   -67,    41,    48,   -17,   -67,   -19,
      15,   -67,   -67,   -67,    18,   -67,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    53,    54,    29,    30
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       1,     2,     3,     4,    51,    37,     5,     6,     1,     2,
       3,     4,    46,    47,     5,     6,    37,    39,    40,    31,
       7,     8,     9,    10,    11,    12,    13,    14,     7,     8,
       9,    10,    11,    12,    13,    14,    57,    60,    32,    58,
      62,     1,     2,     3,     4,    34,    43,    44,    38,    45,
      43,    44,    41,    55,    49,    50,     5,    56,    51,    63,
      64,    36,    15,    42,    33,     1,     2,     3,     4,    35,
      15,     5,     6,     0,    52,    48,    61,     0,     0,     0,
       0,     0,    16,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,     1,     2,     3,     4,     0,     0,     5,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15
};

static const yytype_int8 yycheck[] =
{
       3,     4,     5,     6,    12,    22,     9,    10,     3,     4,
       5,     6,    31,    32,     9,    10,    33,    83,    84,    80,
      23,    24,    25,    26,    27,    28,    29,    30,    23,    24,
      25,    26,    27,    28,    29,    30,    82,    56,    81,    85,
      59,     3,     4,     5,     6,     0,     7,     8,    79,    10,
       7,     8,    81,    10,    39,    40,     9,    82,    12,    79,
      78,    20,    65,    29,    16,     3,     4,     5,     6,    18,
      65,     9,    10,    -1,    82,    78,    58,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,     3,     4,     5,     6,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     9,    10,    23,    24,    25,
      26,    27,    28,    29,    30,    65,    77,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   101,
     102,    80,    81,    92,     0,    89,    91,    93,    79,    83,
      84,    81,   102,     7,     8,    10,    95,    95,    78,    96,
      96,    12,    82,    99,   100,    10,    82,    82,    85,    77,
      95,   100,    95,    79,    78
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    86,    87,    88,    88,    89,    90,    90,    91,    91,
      92,    92,    93,    94,    95,    95,    95,    95,    95,    95,
      96,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     101,   101,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   102,   102,   102
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     1,     3,
       1,     2,     2,     1,     1,     1,     3,     1,     5,     8,
       1,     3,     3,     3,     4,     2,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2
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
  case 2: /* program: files  */
#line 58 "src3/parser.y"
                                        { printf("program: files\n"); }
#line 1242 "build3/parser.tab.c"
    break;

  case 3: /* files: file  */
#line 61 "src3/parser.y"
                                        { printf("files: file\n"); }
#line 1248 "build3/parser.tab.c"
    break;

  case 4: /* files: files file  */
#line 62 "src3/parser.y"
                                        { printf("files: files file\n"); }
#line 1254 "build3/parser.tab.c"
    break;

  case 5: /* file: scopes  */
#line 65 "src3/parser.y"
                                        { printf("file: scopes\n"); }
#line 1260 "build3/parser.tab.c"
    break;

  case 6: /* scopes: scope  */
#line 68 "src3/parser.y"
                                        { printf("scopes: scope\n"); }
#line 1266 "build3/parser.tab.c"
    break;

  case 7: /* scopes: scopes scope  */
#line 69 "src3/parser.y"
                                        { printf("scopes: scopes scope\n"); }
#line 1272 "build3/parser.tab.c"
    break;

  case 8: /* scope: lines  */
#line 72 "src3/parser.y"
                                        { printf("scope: lines=\"%s\"\n", (yyvsp[0].str)); }
#line 1278 "build3/parser.tab.c"
    break;

  case 9: /* scope: '{' lines '}'  */
#line 73 "src3/parser.y"
                                        { printf("scope: '{' lines=\"%s\" '}'\n", (yyvsp[-1].str));  }
#line 1284 "build3/parser.tab.c"
    break;

  case 10: /* lines: line  */
#line 76 "src3/parser.y"
                                        { printf("lines: line=\"%s\"\n", (yyvsp[0].str)); }
#line 1290 "build3/parser.tab.c"
    break;

  case 11: /* lines: lines line  */
#line 77 "src3/parser.y"
                                        { printf("lines: lines=\"%s\" line\"%s\"\n", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1296 "build3/parser.tab.c"
    break;

  case 12: /* line: statement ';'  */
#line 80 "src3/parser.y"
                                        { printf("line: statement=\"%s\"\n", (yyvsp[-1].str)); }
#line 1302 "build3/parser.tab.c"
    break;

  case 13: /* statement: expr  */
#line 83 "src3/parser.y"
                                        { printf("statement: expr=\"%s\"\n", (yyvsp[0].str)); }
#line 1308 "build3/parser.tab.c"
    break;

  case 14: /* expr: declaration  */
#line 86 "src3/parser.y"
                                        { printf("expr: declaration=\"%s\"\n", (yyvsp[0].str)); }
#line 1314 "build3/parser.tab.c"
    break;

  case 15: /* expr: function  */
#line 87 "src3/parser.y"
                                        { printf("expr: function=\"%s\"\n", (yyvsp[0].str)); }
#line 1320 "build3/parser.tab.c"
    break;

  case 16: /* expr: ID '=' expr  */
#line 88 "src3/parser.y"
                                        { printf("expr: ID '=' expr\n"); }
#line 1326 "build3/parser.tab.c"
    break;

  case 17: /* expr: numeric_expr  */
#line 89 "src3/parser.y"
                                        { printf("expr: numeric_expr=\"%s\"\n", (yyvsp[0].str)); }
#line 1332 "build3/parser.tab.c"
    break;

  case 18: /* expr: IF '(' expr ')' expr  */
#line 90 "src3/parser.y"
                                        { printf("expr: IF '(' expr=\"%s\" ')' expr=\"%s\"\n", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1338 "build3/parser.tab.c"
    break;

  case 19: /* expr: IF '(' expr ')' '{' expr ';' '}'  */
#line 91 "src3/parser.y"
                                        { printf("expr: IF '(' expr=\"%s\" ')' '{' expr=\"%s\" ';' '}'\n", (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 1344 "build3/parser.tab.c"
    break;

  case 20: /* numeric_expr: NUMBER  */
#line 94 "src3/parser.y"
                                        { printf("binary_op: NUMBER=\"%s\"\n", (yyvsp[0].str)); }
#line 1350 "build3/parser.tab.c"
    break;

  case 21: /* numeric_expr: numeric_expr '+' numeric_expr  */
#line 95 "src3/parser.y"
                                        {
                                            char buffer[64];
                                            sprintf(buffer, "%s + %s", (yyvsp[-2].str), (yyvsp[0].str));
                                            printf("%s\n", buffer);
                                        }
#line 1360 "build3/parser.tab.c"
    break;

  case 22: /* numeric_expr: numeric_expr '-' numeric_expr  */
#line 100 "src3/parser.y"
                                        {
                                            char buffer[64];
                                            sprintf(buffer, "%s - %s", (yyvsp[-2].str), (yyvsp[0].str));
                                            printf("%s\n", buffer);
                                        }
#line 1370 "build3/parser.tab.c"
    break;

  case 23: /* function: declaration '(' ')'  */
#line 107 "src3/parser.y"
                                        { printf("function: declaration '(' ')'\n"); }
#line 1376 "build3/parser.tab.c"
    break;

  case 24: /* function: declaration '(' params ')'  */
#line 108 "src3/parser.y"
                                        { printf("function: declaration '(' params ')' )\n"); }
#line 1382 "build3/parser.tab.c"
    break;

  case 25: /* declaration: type ID  */
#line 111 "src3/parser.y"
                                        { printf("declaration: type=\"%s\" ID=\"%s\"\n", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1388 "build3/parser.tab.c"
    break;

  case 26: /* declaration: type_modifier type ID  */
#line 112 "src3/parser.y"
                                        { printf("declaration: type_modifier=\"%s\" type=\"%s\" ID=\"%s\"\n", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1394 "build3/parser.tab.c"
    break;

  case 27: /* params: param  */
#line 115 "src3/parser.y"
                                        { printf("params: param=\"%s\" \n", (yyvsp[0].str)); }
#line 1400 "build3/parser.tab.c"
    break;

  case 28: /* params: params ',' param  */
#line 116 "src3/parser.y"
                                        { printf("params: params=\"%s\" , param=\"%s\"\n", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1406 "build3/parser.tab.c"
    break;

  case 29: /* param: ARG  */
#line 119 "src3/parser.y"
                                        { printf("param: ARG=\"%s\"\n", (yyvsp[0].str)); }
#line 1412 "build3/parser.tab.c"
    break;

  case 30: /* type_modifier: STATIC  */
#line 127 "src3/parser.y"
                                        { printf("type_modifier: STATIC\n"); }
#line 1418 "build3/parser.tab.c"
    break;

  case 31: /* type_modifier: CONST  */
#line 128 "src3/parser.y"
                                        { printf("type_modifier: CONST\n"); }
#line 1424 "build3/parser.tab.c"
    break;

  case 32: /* type_modifier: UNSIGNED  */
#line 129 "src3/parser.y"
                                        { printf("type_modifier: VOID\n"); }
#line 1430 "build3/parser.tab.c"
    break;

  case 33: /* type_modifier: VOLATILE  */
#line 130 "src3/parser.y"
                                        { printf("type_modifier: VOLATILE\n"); }
#line 1436 "build3/parser.tab.c"
    break;

  case 34: /* type_modifier: MUTABLE  */
#line 131 "src3/parser.y"
                                        { printf("type_modifier: MUTABLE\n"); }
#line 1442 "build3/parser.tab.c"
    break;

  case 35: /* type_modifier: REGISTER  */
#line 132 "src3/parser.y"
                                        { printf("type_modifier: REGISTER\n"); }
#line 1448 "build3/parser.tab.c"
    break;

  case 36: /* type_modifier: RESTRICT  */
#line 133 "src3/parser.y"
                                        { printf("type_modifier: RESTRICT\n"); }
#line 1454 "build3/parser.tab.c"
    break;

  case 38: /* type: INT  */
#line 137 "src3/parser.y"
                                        { printf("type: INT\n"); }
#line 1460 "build3/parser.tab.c"
    break;

  case 39: /* type: FLOAT  */
#line 138 "src3/parser.y"
                                        { printf("type: FLOAT\n"); }
#line 1466 "build3/parser.tab.c"
    break;

  case 40: /* type: CHAR  */
#line 139 "src3/parser.y"
                                        { printf("type: CHAR\n"); }
#line 1472 "build3/parser.tab.c"
    break;

  case 41: /* type: VOID  */
#line 140 "src3/parser.y"
                                        { printf("type: VOID\n"); }
#line 1478 "build3/parser.tab.c"
    break;

  case 42: /* type: type REFERENCE  */
#line 141 "src3/parser.y"
                                        { printf("type: type REFERENCE\n"); }
#line 1484 "build3/parser.tab.c"
    break;

  case 43: /* type: type POINTER  */
#line 142 "src3/parser.y"
                                        { printf("type: type POINTER\n"); }
#line 1490 "build3/parser.tab.c"
    break;


#line 1494 "build3/parser.tab.c"

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

#line 209 "src3/parser.y"


void yyerror(const char *msg)
{
    fprintf(stderr, "Parse error: %s\n", msg);
}
