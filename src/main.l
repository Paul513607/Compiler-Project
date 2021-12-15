%{
#include <stdio.h>
#include "main.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string" {return TYPE;}
"begin_main" {return BGIN;}
"end_main" {return END;}
#[_a-zA-Z][_a-zA-Z0-9]* {return VAR;}
":=" {return ASSIGN;}
-?[0-9]+ {yylval.intval=atoi(yytext); return NR;}
\"(.|\n)+\" {yylval.strval=strdup(yytext); return STRING;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
%%

 
