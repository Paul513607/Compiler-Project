#pragma once
#include "plsDefines.h"
#include "plsErrors.h"

typedef struct  Variable {
    string id;

    bool hasValue;
    bool isGlobal;

    Type type;

    union {
        bool b_val;
        int i_val;
        float f_val;
        string s_val;

        array a_val;
    };
} Variable;

typedef struct VariableNode {
    Variable * var;
    VariableNode * next;
} *VariableList, *ParametersList;

typedef struct Function {
    string id;
    Type type;
    ParametersList *params;
    int no_params = 0;
};

typedef struct FunctionNode{
    Function * func;
    FunctionNode * next;
} *FunctionList;

static FunctionList functions;

bool functionListEmpty(FunctionList list) {
    return (list == NULL);
}

bool functionListContains (FunctionList list, Function *func) {
    int checks;
    while (list != NULL) {
        checks = 0;
        if (stringEq(func->id, list->func->id))
            checks++;
        if (func->type == list->func->type)
            checks++;
        ParametersList head_mem = *list->func->params;
        ParametersList head_func = *func->params;
        while (head_mem != NULL) {
            if (head_mem->var->type == head_func->var->type)
                checks++;
            head_mem = head_mem->next;
            head_func = head_func->next;
        }
        if (checks == list->func->no_params + 2)
            return true;
        list = list->next;
    }
    return false;
}

void functionListPush(FunctionList *list, Function *func) {
    FunctionNode *newNode = new(FunctionNode);
    newNode->func = func;
    newNode->next = *list;
    *list = newNode;
}

void clearFunctionList(FunctionList list) {
    while (list != NULL) {
        ParametersList param = *list->func->params;
        while (param != NULL) {
            // deleteVariable(param->var);
            param = param->next;
        }
        list = list->next;
    }
}

void functionDeclare(string id, Type type) {
    Function *newFunc;
    strcpy(newFunc->id.str, id.str);
    newFunc->id.length = newFunc->id.length;
    newFunc->type = type;
    while (functionListEmpty(functions)) {
        if (functionListContains(functions, newFunc)) {
            plsError("Function %s already exists with the same signature", id);
            delete(newFunc);
            return;
        }
        functionListPush(&functions, newFunc);
    }
}