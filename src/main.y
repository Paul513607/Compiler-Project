%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}
%union {
int intval;
char* strval;
}
%token VAR TYPE BGIN END ASSIGN NR STRING
%start progr

%left '+' '-'
%left '*' '/'

%%
progr: declatarions bloc {printf("syntactically correct program\n");}
     ;

declatarions :  declatarion ';'
	   | declatarions declatarion ';'
	   ;
declatarion : TYPE VAR 
           | TYPE VAR '(' parameters ')'
           | TYPE VAR '(' ')'
           ;
parameters : param
            | parameters ','  param 
            ;
            
param : TYPE VAR
      ; 
      
/* bloc */
bloc : BGIN list END  
     ;
     
/* list */
list :  statement ';' 
     | list statement ';'
     ;

/* statements */
statement: VAR ASSIGN VAR
         | VAR ASSIGN NR  
         | VAR ASSIGN STRING	 
         | VAR '(' call_list ')'
         ;
        
call_list : NR
           | call_list ',' NR
           | STRING
           | call_list ',' STRING
           ;
%%

int yyerror(char * s) {
    printf("error: %s at line:%d\n", s, yylineno);
}

int main(int argc, char** argv) 
{
    yyin = fopen(argv[1],"r");
    yyparse();
} 