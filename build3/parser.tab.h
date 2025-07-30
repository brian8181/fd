/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BUILD3_PARSER_TAB_H_INCLUDED
# define YY_YY_BUILD3_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    CHAR = 260,                    /* CHAR  */
    VOID = 261,                    /* VOID  */
    REFERENCE = 262,               /* REFERENCE  */
    POINTER = 263,                 /* POINTER  */
    NUMBER = 264,                  /* NUMBER  */
    ID = 265,                      /* ID  */
    ASSIGNMENT = 266,              /* ASSIGNMENT  */
    ARG = 267,                     /* ARG  */
    SPACE = 268,                   /* SPACE  */
    TAB = 269,                     /* TAB  */
    NEWLINE = 270,                 /* NEWLINE  */
    END_OF_FILE = 271,             /* END_OF_FILE  */
    LEFT_BRACE = 272,              /* LEFT_BRACE  */
    RIGHT_BRACE = 273,             /* RIGHT_BRACE  */
    LEFT_CURLY = 274,              /* LEFT_CURLY  */
    RIGHT_CURLY = 275,             /* RIGHT_CURLY  */
    LEFT_PAREN = 276,              /* LEFT_PAREN  */
    RIGHT_PAREN = 277,             /* RIGHT_PAREN  */
    STATIC = 278,                  /* STATIC  */
    CONST = 279,                   /* CONST  */
    UNSIGNED = 280,                /* UNSIGNED  */
    VOLATILE = 281,                /* VOLATILE  */
    MUTABLE = 282,                 /* MUTABLE  */
    REGISTER = 283,                /* REGISTER  */
    RESTRICT = 284,                /* RESTRICT  */
    INLINE = 285,                  /* INLINE  */
    SHIFT_LEFT = 286,              /* SHIFT_LEFT  */
    SHIFT_RIGHT = 287,             /* SHIFT_RIGHT  */
    MODULUS = 288,                 /* MODULUS  */
    EQUALS = 289,                  /* EQUALS  */
    LOGICAL_NOT = 290,             /* LOGICAL_NOT  */
    LOGICAL_AND = 291,             /* LOGICAL_AND  */
    LOGICAL_OR = 292,              /* LOGICAL_OR  */
    BIT_AND = 293,                 /* BIT_AND  */
    BIT_OR = 294,                  /* BIT_OR  */
    BIT_XOR = 295,                 /* BIT_XOR  */
    BIT_NOT = 296,                 /* BIT_NOT  */
    ADDITION = 297,                /* ADDITION  */
    SUBTRACTION = 298,             /* SUBTRACTION  */
    MUTIPLICATION = 299,           /* MUTIPLICATION  */
    DIVISION = 300,                /* DIVISION  */
    LESS_THAN = 301,               /* LESS_THAN  */
    GREATER_THAN = 302,            /* GREATER_THAN  */
    COMMA = 303,                   /* COMMA  */
    SEMICOLON = 304,               /* SEMICOLON  */
    COLON = 305,                   /* COLON  */
    DOUBLE_QUOTE = 306,            /* DOUBLE_QUOTE  */
    SINGLE_QUOTE = 307,            /* SINGLE_QUOTE  */
    QUESTION_MARK = 308,           /* QUESTION_MARK  */
    DOT = 309,                     /* DOT  */
    AT_SYMBOL = 310,               /* AT_SYMBOL  */
    PRIVATE = 311,                 /* PRIVATE  */
    PROTECTED = 312,               /* PROTECTED  */
    PUBLIC = 313,                  /* PUBLIC  */
    ADDRESS_OF = 314,              /* ADDRESS_OF  */
    SCOPE_RESOLUTION = 315,        /* SCOPE_RESOLUTION  */
    DIRECT_TO_POINTER = 316,       /* DIRECT_TO_POINTER  */
    INDIRECT_TO_POINTER = 317,     /* INDIRECT_TO_POINTER  */
    DIRECT_MEMBER_SELECT = 318,    /* DIRECT_MEMBER_SELECT  */
    INDIRECT_MEMBER_SELECT = 319,  /* INDIRECT_MEMBER_SELECT  */
    IF = 320,                      /* IF  */
    ELSE = 321,                    /* ELSE  */
    FOR = 322,                     /* FOR  */
    DO = 323,                      /* DO  */
    WHILE = 324,                   /* WHILE  */
    CONTINUE = 325,                /* CONTINUE  */
    BREAK = 326,                   /* BREAK  */
    SWITCH = 327,                  /* SWITCH  */
    CASE = 328,                    /* CASE  */
    GOTO = 329,                    /* GOTO  */
    DEFAULT = 330,                 /* DEFAULT  */
    RETURN = 331                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define FLOAT 259
#define CHAR 260
#define VOID 261
#define REFERENCE 262
#define POINTER 263
#define NUMBER 264
#define ID 265
#define ASSIGNMENT 266
#define ARG 267
#define SPACE 268
#define TAB 269
#define NEWLINE 270
#define END_OF_FILE 271
#define LEFT_BRACE 272
#define RIGHT_BRACE 273
#define LEFT_CURLY 274
#define RIGHT_CURLY 275
#define LEFT_PAREN 276
#define RIGHT_PAREN 277
#define STATIC 278
#define CONST 279
#define UNSIGNED 280
#define VOLATILE 281
#define MUTABLE 282
#define REGISTER 283
#define RESTRICT 284
#define INLINE 285
#define SHIFT_LEFT 286
#define SHIFT_RIGHT 287
#define MODULUS 288
#define EQUALS 289
#define LOGICAL_NOT 290
#define LOGICAL_AND 291
#define LOGICAL_OR 292
#define BIT_AND 293
#define BIT_OR 294
#define BIT_XOR 295
#define BIT_NOT 296
#define ADDITION 297
#define SUBTRACTION 298
#define MUTIPLICATION 299
#define DIVISION 300
#define LESS_THAN 301
#define GREATER_THAN 302
#define COMMA 303
#define SEMICOLON 304
#define COLON 305
#define DOUBLE_QUOTE 306
#define SINGLE_QUOTE 307
#define QUESTION_MARK 308
#define DOT 309
#define AT_SYMBOL 310
#define PRIVATE 311
#define PROTECTED 312
#define PUBLIC 313
#define ADDRESS_OF 314
#define SCOPE_RESOLUTION 315
#define DIRECT_TO_POINTER 316
#define INDIRECT_TO_POINTER 317
#define DIRECT_MEMBER_SELECT 318
#define INDIRECT_MEMBER_SELECT 319
#define IF 320
#define ELSE 321
#define FOR 322
#define DO 323
#define WHILE 324
#define CONTINUE 325
#define BREAK 326
#define SWITCH 327
#define CASE 328
#define GOTO 329
#define DEFAULT 330
#define RETURN 331

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "src3/parser.y"

    int num;
    char* str;

#line 224 "build3/parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BUILD3_PARSER_TAB_H_INCLUDED  */
