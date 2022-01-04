%{
    #include <stdbool.h>
    #include "/pls-libs/plsLangBuiltIns.h"
    extern int yylex (void);
    extern int yyerror (char const *);
%}

%union{
    bool Bool;
    int Int;
    float Real;
    char * Str;
    int * Arr;
}

%token VarInitializer
%token OfType

%token TypeInitializer

%token FunctionIdentifier
%token ReturnIdentifier

%token IntIdentifier
%token BoolIdentifier
%token RealIdentifier
%token StrIdentifier
%token ArrIdentifier

%token EvalIdentifier
%token PrintIdentifier
%token ReadIdentifier
%token MainIdentifier

%token IfIdentifier
%token ElseIdentifier

%token WhileIdentifier
%token ForIdentifier

%token mov

%token gr
%token le
%token greq
%token leeq 

%token eq
%token neq

%token sum
%token mul
%token divd
%token mod

%right mov

%left band bor xor
%left And Or
%left gr le greq leeq eq neq
%left dif sum
%left mod mul divd

%token Null
%token <Bool> BoolConst;

%token <Arr> ArrConst;
%token <Str> StringConst;
%token <Real> RealConst;
%token <Int> IntConst;
%token <Str> Word;


%start Interpret
%%

Interpret:
    CodeBlocks{
        printf("Code compiled successfully.\n");
    };

    CodeBlocks:
        CodeBlocks CodeBlock |
        CodeBlock;
    
    CodeBlock:
        Declaration |
        Definition;        

    Definition:
        FunDefinition |
        TypeDefinition;

    Declaration: 
        VarDeclaration ';'{
            
        };
    
    VarDeclaration:
        VarInitializer Word OfType TypeName  |
        VarInitializer Word OfType TypeName mov BinaryExpression ;

    VarAssignment: 
        Word mov BinaryExpression ';';

    Expression: 
        BinaryExpression;
    
    Const: 
        Null        |
        BoolConst   |
        IntConst    |
        RealConst   |
        ArrConst    |
        StringConst;

    TypeName:
        BoolIdentifier |
        IntIdentifier  |
        RealIdentifier|
        StrIdentifier  |
        ArrIdentifier;

    TypeDefinition:
        VarInitializer Word OfType TypeInitializer '{' ParameterList ';' '}' ';'


    FunDefinition:
        FunctionIdentifier Word OfType TypeName '(' ')' '{' FunBody '}'|
        FunctionIdentifier Word OfType TypeName '(' ParameterList ')' '{' FunBody '}';

    ParameterList: 
        ParameterList ',' VarDeclaration |
        VarDeclaration;

    FunBody:
        Statements | 
        ;

    Statements:
        Statements Statement |
        Statement;

    Statement:
        ControlBlock | 
        VarDeclaration |
        VarAssignment |
        CodeBlock |
        FunctionCall |
        ReturnIdentifier Expression ';';
    
    ControlBlock: 
        IfBlock |
        WhileBlock |
        ForBlock;

    WhileBlock:
        WhileIdentifier Expression '{'
            FunBody
        '}';
    
    ForBlock:
        ForIdentifier '(' VarAssignment  BinaryExpression ';' BinaryExpression')' '{'
            Statements
        '}';

    IfBlock:
        IfIdentifier '(' BinaryExpression ')' '{'
            Statements
        '}' | 
        IfIdentifier '(' BinaryExpression ')' '{'
            Statements
        '}' ElseIdentifier '{'
            Statements 
        '}'

    BinaryExpression:
        BinaryExpression band BinaryExpression |
        BinaryExpression bor BinaryExpression |
        BinaryExpression xor BinaryExpression |
        BinaryExpression And BinaryExpression |
        BinaryExpression Or BinaryExpression |
        BinaryExpression gr BinaryExpression |
        BinaryExpression le BinaryExpression |
        BinaryExpression greq BinaryExpression |
        BinaryExpression leeq BinaryExpression |
        BinaryExpression eq BinaryExpression |
        BinaryExpression neq BinaryExpression |
        BinaryExpression dif BinaryExpression |
        BinaryExpression sum BinaryExpression |
        BinaryExpression mod BinaryExpression |
        BinaryExpression mul BinaryExpression |
        BinaryExpression divd BinaryExpression |
        '(' Expression ')' |
        Word |
        Const;

    FunctionCall:
        EvalIdentifier '(' BinaryExpression ')' ';'|
        PrintIdentifier '(' StringConst ',' BinaryExpression ')' ';' {
            printf("%s\n", $3);
        };
        
%%