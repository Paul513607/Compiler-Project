#include "plsError.h"

#include <stdio.h>
#include <stdarg.h>

extern int yyerror( const char * );

void plsError ( const char * format , ... ) 
{
    static char errorBuffer[ 8192 ];

    va_list args;
    va_start (args, format);
    vsprintf( errorBuffer, format, args );
    va_end (args);

    yyerror ( errorBuffer );
}

void plsWarning ( const char * format, ... )
{
    static char warningBuffer[ 8192 ];

    va_list args;
    va_start (args, format);
    vsprintf ( warningBuffer, format, args );
    va_end (args);

    yyerror ( warningBuffer );
}

void plsMessage ( FILE * out, const char * format, ... )
{
    va_list args;
    va_start (args, format);
    vfprintf ( out, format, args );
    va_end (args);
}