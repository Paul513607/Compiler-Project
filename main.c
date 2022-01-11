#include <stdio.h>
extern FILE * yyin;
extern int yylineno;

extern int yyparse (void);

// int yyerror (char const * pError) {
//     fprintf(stderr, "Error : %s at line %d\n", pError, yylineno);
//     return 0;
// }

int main ( int argc, char ** argv ) {

    if ( argc == 1 ) {
        fprintf(stderr,"No Source File Given\n");
        return 1;
    }

    FILE * file = fopen ( argv[1], "r" );
    if ( file == NULL ) {
        fprintf(stderr, "No Valid Input Source File\n");
        return 1;
    }

    yyin = file;
    yyparse();

    fclose ( file );

    return 0;
}