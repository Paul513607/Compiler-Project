%{
    #include <stdlib.h>
    #include <stdbool.h>
    #include "syntax.h"

    // enum getTypeFromToken( const char * );
    
%}

%option yylineno
%option noyywrap

Word    [a-zA-Z_][a-zA-Z_0-9]*

Int     0|([1-9][0-9]*)
Real   (0|([1-9][0-9]*)|[:blank:])"."([0-9]*)

String  (\"([^\\\"]|\\.)*\")

%%

"var"   {return VarInitializer;}
":"     {return OfType;}

"type"  {return TypeInitializer;}

"fun"       {return FunctionIdentifier;}
"return"    {return ReturnIdentifier;}

"int"   {return IntIdentifier;}
"bool"   {return BoolIdentifier;}
"real"   {return RealIdentifier;}
"str"   {return StrIdentifier;}
"arr"   {return ArrIdentifier;}

"eval"  {return EvalIdentifier;}
"print" {return PrintIdentifier;}
"read" {return ReadIdentifier;}
"main" {return MainIdentifier;}

"if"     {return IfIdentifier;}
"else"   {return ElseIdentifier;}
"while"  {return WhileIdentifier;}
"for"    {return ForIdentifier;}

"="         {return mov;}

">"         {return gr;}
"<"         {return le;}
">="        {return greq;}
"<="        {return leeq;}

"=="        {return eq;}
"!="        {return neq;}

"+"         {return sum;}
"-"         {return dif;}
"*"         {return mul;}
"/"         {return divd;}
"%"         {return mod;}

"And"       {return And;}
"Or"        {return Or;}

"&"         {return band;}
"|"         {return bor;}
"^"         {return xor;}

"null"      {return Null;}

"true" {
    yylval.Bool = true;
    return BoolConst;
}


"false" {
    yylval.Bool = false;
    return BoolConst;
}

{String} {
    yylval.Str = strdup ( yytext + 1 );
    char * p = strrchr ( yylval.Str, '\"' );

    *p = 0;

    return StringConst;
}

{Real} {
    yylval.Real = strtod ( yytext, NULL );
    return RealConst;
}

{Int} {
    yylval.Int = strtol ( yytext, NULL, 10 );
    return IntConst;
}


{Word} {
    yylval.Str = strdup ( yytext );
    return Word;
}

[ \t\f] ;
"\r\n"|"\n" ;
.               { return yytext[0]; }

%%
