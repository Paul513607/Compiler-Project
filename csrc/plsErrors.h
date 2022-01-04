#pragma once

#include <stdio.h>
#include <stdarg.h>

void plsError ( const char * format , ... ) 
{
    char buffer[1024];

    va_list args;
    va_start (args, format);
    vsprintf(buffer, format, args);
    va_end (args);

    yyerror(buffer);
}