#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define new(type) ((type*)malloc(sizeof(type)))
#define delete(var) free((void*)var)

typedef struct string {
    char *str;
    int length;
} string;

typedef struct array {
    int *arr;
    int count;
};

typedef enum Type {
    TYPE_BOOL,
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_STRING,
    TYPE_ARRAY
} Type;

bool stringEq(string s1, string s2) {
    if (s1.length != s2.length)
        return false;
    return (strcmp(s1.str, s2.str) == 0);
}