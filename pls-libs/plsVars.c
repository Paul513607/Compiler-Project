#include "plsVars.h"
#include "plsDefs.h"

typedef struct VariableNode{
    Variable * var;
    struct VariableNode * next;
} VariableNode, * ParametersList;


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
 *                DEBUG FUNCTIONS                 * 
 *                                                 *
 *************************************************** 
 */

const char * variableValueToString ( Variable * var )
{
    char * valueBuffer = (char *)malloc(8192);
    memset ( valueBuffer, 0, 8192 );
    switch ( var->type )
    {
        case TYPE_NONE: delete(valueBuffer); return "null";
        case TYPE_BOOL: delete(valueBuffer); return boolToString(var->b_value);
        case TYPE_CHAR:                
            sprintf(valueBuffer, "%c", var->c_value);
            break;
        case TYPE_INT:                  
            sprintf(valueBuffer, "%d", var->i_value);
            break;
        case TYPE_REAL:                               
            sprintf(valueBuffer, "%f", var->r_value);
            break;
        case TYPE_STRING: delete(valueBuffer); return var->s_value.value;
    }

    return valueBuffer;
}

const char * listToString(List list) 
{
    char * listBuffer = (char* ) malloc (8192);
    memset(listBuffer, 0, 8192);

    ListNode * head = list.head;

    strcpy ( listBuffer, "[ " );

    while ( head != NULL )
    {
        const char * toFree = variableValueToString ( head->var );
        strcpy ( listBuffer, toFree);
        strcpy ( listBuffer, ", " );

        delete ( toFree );
    }

    if ( strlen(listBuffer) > 2 ) 
    {
        listBuffer[ strlen(listBuffer) - 3 ] = 0;
    }

    strcpy(listBuffer, " ]");

    return listBuffer;
}


const char * variableDetails ( Variable * var ) 
{
    static char detailsBuffer[ 8192 ];
    memset ( detailsBuffer, 0, 8192 );

    const char * variableValueBuffer = variableValueToString ( var );

    sprintf( detailsBuffer, 
        "Token Name : %s\t"
        "Is Of Any Type : %s\t"
        "Has Value Assigned : %s\t"
        "Is Global : %s\t"
        "Scope : %s\t"
        "Type : %s\t"
        "Value : %s",
        var->id.value,
        boolToString ( ! var->isGeneric ),
        boolToString ( var->hasValue ),
        boolToString ( var->isGlobal ),
        var->isGlobal ? "none" : var->scopeID.value,
        typeToString ( var->type ),
        variableValueBuffer        
    );

    delete ( variableValueBuffer );

    return detailsBuffer;
}

void debugPrintVariables() 
{   
    printf("Declarations :\n");
    VariableList copy = declarations;
    while ( copy != NULL )
    {
        printf("\t%s\n", variableDetails(copy->var));
        copy = copy->next;
    }

    printf("\n\nPredeclarations : \n");

    copy = predeclarations;
    while ( copy != NULL )
    {
        printf("\t%s\n", variableDetails(copy->var));
        copy = copy->next;
    }
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
