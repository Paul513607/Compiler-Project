#pragma once
#include <stdlib.h>
#include <stdbool.h>

#define new(type) ((type*)malloc(sizeof(type)))
#define delete(var) free((void*)var)

typedef struct string {
    char * value;
    int length;
} string;

#define emptyString() (string) {.length = 0, .value = NULL}

typedef char * ID;
typedef float real;

typedef enum Type {
    TYPE_NONE,
    TYPE_BOOL,
    TYPE_CHAR,
    TYPE_INT,
    TYPE_REAL,
    TYPE_STRING
} Type;

#include <string.h>
static string copyString ( string str) {
    string newString;
    
    newString.length = str.length;
    newString.value = (char *)malloc(str.length + 1);
    
    memcpy ( newString.value, str.value, str.length );
    return newString;
}

static string newString ( const char * str )
{
    string newString;
    newString.length = strlen( str );
    newString.value = NULL;

    newString.value = (char*) malloc(newString.length + 1);
    memcpy ( newString.value, str, newString.length );

    return newString;
}

static bool stringEquals ( string str1, string str2 )
{
    if ( str1.length != str2.length )
        return false;

    return strcmp ( str1.value, str2.value ) == 0;
}

static const char * boolToString ( bool v ) 
{
    return v ? "true" : "false";
}

static const char * typeToString ( Type t )
{
    switch ( t )
    {
        case TYPE_BOOL:                 return "Boolean";
        case TYPE_CHAR:                 return "Character";
        case TYPE_INT:                  return "Integer";
        case TYPE_STRING:               return "String";
    }

    return "AnyType";
}
