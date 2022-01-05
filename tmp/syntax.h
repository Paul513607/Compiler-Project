/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    VarInitializer = 258,
    OfType = 259,
    TypeInitializer = 260,
    FunctionIdentifier = 261,
    ReturnIdentifier = 262,
    IntIdentifier = 263,
    BoolIdentifier = 264,
    RealIdentifier = 265,
    StrIdentifier = 266,
    ArrIdentifier = 267,
    EvalIdentifier = 268,
    PrintIdentifier = 269,
    ReadIdentifier = 270,
    MainIdentifier = 271,
    IfIdentifier = 272,
    ElseIdentifier = 273,
    WhileIdentifier = 274,
    ForIdentifier = 275,
    mov = 276,
    gr = 277,
    le = 278,
    greq = 279,
    leeq = 280,
    eq = 281,
    neq = 282,
    sum = 283,
    mul = 284,
    divd = 285,
    mod = 286,
    band = 287,
    bor = 288,
    xor = 289,
    And = 290,
    Or = 291,
    dif = 292,
    Null = 293,
    BoolConst = 294,
    ArrConst = 295,
    StringConst = 296,
    RealConst = 297,
    IntConst = 298,
    Word = 299
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "../syntax.y"

    int * Arr;
    bool Bool;
    int Int;
    float Real;
    char * Str;

#line 110 "syntax.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_H_INCLUDED  */
