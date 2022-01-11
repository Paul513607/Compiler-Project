#include <stdio.h>     /* C declarations used in actions */
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define TYPE_NORMAL 1
#define TYPE_ARRAY 2
#define TYPE_FUNCTION 3

int global_expr_counter = 0;

struct var {
	char id[100];
	int var_type;

	// normal type
	int type;
	int cnst;

	// array
	int arraySize;
	double array[100];
	char arrayStr[100][1000];
	int isInitilalized[100];
	
	// function
	int parameterTypes[10];
	int parameterNum;
};

struct parameter {
	int paramNum;
	int parameterTypes[10];
};

int totalVar = 0;
struct var variables[100];

struct var* temporaryPointNum(double, int);
struct var* temporaryPointStr(void*, int);
struct var* temporaryPointVar(char*);
struct var* temporaryPointArr(char*, struct var*);
struct var* temporaryPointFun(char*, struct parameter*);
struct var* initializeVar();

void freeVar(struct var* v);
int getVariableIndex(char*);
void updateValue(char*, struct var*);
void FloatingPointException(int);
void pushVariable(char*, int, struct var*);
void pushVariableConst(char*, int, struct var*);
void pushEmptyVariable(char*, int);
void pushStructVariable(char*);
struct var* comp(struct var*, struct var*, int);
void printValue(struct var*);
void print_simbol_table(struct var*,int);

void printStr(const char *);
void pushArray(char*, int, struct var*);
void updateArrValue(char*, struct var*, struct var*);
void Eval_function(struct var*);

void pushParam(struct parameter*, int);
struct parameter* initializeParam(int);
void pushFunction(char*, int, struct parameter*);
char* defToDataType(int);