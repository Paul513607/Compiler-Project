#pragma once
#include <stdio.h>

void plsError ( const char * , ... );
void plsWarning ( const char *, ... );
void plsMessage ( FILE *, const char *, ... );