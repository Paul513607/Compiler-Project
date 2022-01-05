#pragma once

#include "plsDefs.h"

typedef struct ListNode {
    void            * var;
    struct ListNode * next;
} ListNode;

typedef struct List {
    Type        contentsType;
    ListNode  * head;
    int         elementCount;
} List;


typedef struct Variable {

    string id;

    bool isGeneric;
    bool hasValue;
    bool isGlobal;

    string scopeID; /// replace with Function *

    Type type;

    union {
        bool        b_value;
        char        c_value;
        int         i_value;
        real        r_value;
        string      s_value;

        struct List l_value;
    };

} Variable;


