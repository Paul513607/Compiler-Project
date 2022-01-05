#include "plsVars.h"
#include "plsDefs.h"

typedef struct VariableNode{
    Variable * var;
    struct VariableNode * next;
} VariableNode;

typedef VariableNode * VariableList;

static bool variableListContains ( VariableList, Variable * );
static void variableListPush ( VariableList * , Variable * );
static Variable * variableListPop ( VariableList * );
static void variableListClear ( VariableList );
static Variable * newEmptyVariable ();
static bool variableListEmpty ( VariableList );
static void deleteVariable( Variable * );

static VariableList predeclarations;
static VariableList declarations;

#include "plsError.h"
void predeclare ( ID id ){

    Variable * newVar = newEmptyVariable();
    newVar->id = newString ( id );

    if( variableListContains ( predeclarations, newVar ) || 
        variableListContains ( declarations, newVar )){

        plsError( "Variable %s already declared\n", id );
        deleteVariable( newVar );
        exit(0);
    }

    variableListPush ( & predeclarations, newVar );
    return;
}

void declare ( Type type ){

    while (variableListEmpty ( predeclarations )) {
        if( variableListContains ( declarations, predeclarations->var )){
            plsError ( "Variable %s already declared\n", predeclarations->var->id.value );
            exit(0);
        }

        variableListPush( & declarations, variableListPop ( & predeclarations ));

    }
}

void clearVariables(){
    variableListClear ( predeclarations );
    variableListClear ( declarations );
}


/**
 ***************************************************
 *                                                 *
 *                STATIC FUNCTIONS                 * 
 *                                                 *
 *************************************************** 
 */

bool variableListEmpty ( VariableList list ) 
{
    return list == NULL;
}

bool variableListContains ( VariableList list, Variable * var ) 
{
    while ( list != NULL )
    {
        if ( stringEquals ( var->id, list->var->id ) )
            return true;

        list = list->next;
    }

    return false;
}

Variable * variableListPop ( VariableList * list ) 
{
    if ( * list == NULL )
        return NULL;

    VariableNode * head = * list;
    * list = (*list)->next;
    
    return head->var;
}

void variableListPush ( VariableList * list , Variable * var )
{
    VariableNode * newNode = new(VariableNode);
    newNode->var = var;
    newNode->next = * list;

    * list = newNode;
}

void variableListClear ( VariableList list )
{
    while ( list != NULL )
    {
        deleteVariable ( list->var );
        list = list->next;
    }
}

Variable * newEmptyVariable ()
{
    Variable * newVar = new(Variable);

    newVar->hasValue = false;
    newVar->id = emptyString();
    newVar->isGeneric = true;
    newVar->type = TYPE_NONE;
    newVar->isGlobal = true;
    newVar->scopeID = emptyString();

    return newVar;
}

void deleteVariable( Variable * var )
{
    deleteString ( var->id );
    delete(var);
}
