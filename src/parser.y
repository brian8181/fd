%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int yylex(void);
void yyerror(const char *msg);
%}

%union {
    int num;
    char* str;
}

%token <str> INCLUDE DEFINE IFDEF IFNDEF ENDIF PRAGMA
%token <str> USING NAMESPACE
%token <str> INT FLOAT CHAR VOID
%token <str> CLASS STRUCT TEMPLATE TYPENAME
%token <str> REFERENCE POINTER
%token <str> NUMBER
%token <str> ID
%token <str> ASSIGNMENT
%token <str> ARG
%token <str> SPACE TAB NEWLINE END_OF_FILE
%token <str> LEFT_BRACE RIGHT_BRACE LEFT_CURLY RIGHT_CURLY LEFT_PAREN RIGHT_PAREN
%token <str> STATIC CONST UNSIGNED VOLATILE MUTABLE REGISTER RESTRICT INLINE
%token <str> SHIFT_LEFT SHIFT_RIGHT MODULUS
%token <str> EQUALS LOGICAL_NOT LOGICAL_AND LOGICAL_OR BIT_AND BIT_OR BIT_XOR BIT_NOT
%token <str> ADDITION SUBTRACTION MUTIPLICATION DIVISION
%token <str> LESS_THAN GREATER_THAN
%token <str> COMMA SEMICOLON COLON DOUBLE_QUOTE SINGLE_QUOTE QUESTION_MARK DOT AT_SYMBOL
%token <str> PRIVATE PROTECTED PUBLIC
%token <str> ADDRESS_OF SCOPE_RESOLUTION
%token <str> DIRECT_TO_POINTER INDIRECT_TO_POINTER
%token <str> DIRECT_MEMBER_SELECT INDIRECT_MEMBER_SELECT
%token <str> IF ELSE FOR DO WHILE CONTINUE BREAK SWITCH CASE GOTO DEFAULT RETURN
%token <str> LSHIFT_OPERATOR RSHIFT_OPERATOR INCREMENT_OPERATOR DECREMENT_OPERATOR
%token <str> ADD_ASSIGN_OPERATOR SUB_ASSIGN_OPERATOR MULT_ASSIGN_OPERATOR DIV_ASSIGN_OPERATOR MOD_ASSIGN_OPERATOR
%token <str> BITAND_ASSIGN_OPERATOR BITOR_ASSIGN_OPERATOR BITXOR_ASSIGN_OPERATOR BITNOT_ASSIGN_OPERATOR
%token <str> LSHIFT_ASSIGN_OPERATOR RSHIFT_ASSIGN_OPERATOR
%token <str> SIZEOF DELETE CONST_CAST DYNAMIC_CAST STATIC_CAST REINTERPRET_CAST
%type <str> files
%type <str> file
%type <str> function
%type <str> scopes
%type <str> scope
%type <str> lines
%type <str> line
%type <str> declaration
%type <str> params
%type <str> param
%type <str> type
%type <str> type_modifier
%type <str> pointer_to_member
%type <str> member_select
%type <str> access_specifier
%type <str> numeric_expr
%type <str> expr
%type <str> statement
%type <str> preprocess
%start program

%%

program:
    files                               { printf("program: files\n"); }
    ;
files:
    file END_OF_FILE                    { printf("files: END_OF_FILE\n"); }
    | files file                        { printf("files: files file\n"); }
    ;
file:
    scopes                              { printf("file: scopes\n"); }
    ;
scopes:
    scope                               { printf("scopes: scope\n"); }
    | scopes scope                      { printf("scopes: scopes scope\n"); }
    ;
scope:
    lines                               { printf("scope: lines=\"%s\"\n", $1); }
    | '{' lines '}'                     { printf("scope: '{' lines=\"%s\" '}'\n", $2);  }
    ;
lines:
    line                                { printf("lines: line=\"%s\"\n", $1); }
    | lines line                        { printf("lines: lines=\"%s\" line\"%s\"\n", $1, $2); }
    ;
line:
    statement ';'                       { printf("line: statement=\"%s\"\n", $1); }
    ;
statement:
    expr                                { printf("statement: expr=\"%s\"\n", $1); }
    ;
expr:
    declaration                         { printf("expr: declaration=\"%s\"\n", $1); }
    | function                          { printf("expr: function=\"%s\"\n", $1); }
    | ID '=' expr                       { printf("expr: ID '=' expr\n"); }
    | numeric_expr                      { printf("expr: numeric_expr=\"%s\"\n", $1); }
    | IF '(' expr ')' expr              { printf("expr: IF '(' expr=\"%s\" ')' expr=\"%s\"\n", $3, $5); }
    | IF '(' expr ')' '{' expr ';' '}'  { printf("expr: IF '(' expr=\"%s\" ')' '{' expr=\"%s\" ';' '}'\n", $3, $6); }
    ;
numeric_expr:
    NUMBER                              { printf("binary_op: NUMBER=\"%s\"\n", $1); }
    | numeric_expr '+' numeric_expr     {
                                            char buffer[64];
                                            sprintf(buffer, "%s + %s", $1, $3);
                                            printf("%s\n", buffer);
                                        }
    | numeric_expr '-' numeric_expr     {
                                            char buffer[64];
                                            sprintf(buffer, "%s - %s", $1, $3);
                                            printf("%s\n", buffer);
                                        }
    ;
function:
    declaration '(' ')'                 { printf("function: declaration '(' ')'\n"); }
    | declaration '(' params ')'        { printf("function: declaration '(' params ')' )\n"); }
    ;
declaration:
    type ID                             { printf("declaration: type=\"%s\" ID=\"%s\"\n", $1, $2); }
    | type_modifier type ID             { printf("declaration: type_modifier=\"%s\" type=\"%s\" ID=\"%s\"\n", $1, $2, $3); }
    ;
params:
    param                               { printf("params: param=\"%s\" \n", $1); }
    | params ',' param                  { printf("params: params=\"%s\" , param=\"%s\"\n", $1, $3); }
    ;
param:
    ARG                                 { printf("param: ARG=\"%s\"\n", $1); }
    ;
access_specifier:
        PUBLIC
        | PROTECTED
        | PRIVATE
        ;
type_modifier:
    STATIC                              { printf("type_modifier: STATIC\n"); }
    | CONST                             { printf("type_modifier: CONST\n"); }
    | UNSIGNED                          { printf("type_modifier: VOID\n"); }
    | VOLATILE                          { printf("type_modifier: VOLATILE\n"); }
    | MUTABLE                           { printf("type_modifier: MUTABLE\n"); }
    | REGISTER                          { printf("type_modifier: REGISTER\n"); }
    | RESTRICT                          { printf("type_modifier: RESTRICT\n"); }
    | INLINE                            { printf("type_modifier: INLINE\n"); }
    ;
type:
    INT                                 { printf("type: INT\n"); }
    | FLOAT                             { printf("type: FLOAT\n"); }
    | CHAR                              { printf("type: CHAR\n"); }
    | VOID                              { printf("type: VOID\n"); }
    | type REFERENCE                    { printf("type: type REFERENCE\n"); }
    | type POINTER                      { printf("type: type POINTER\n"); }
    | CLASS                             { printf("type: CLASS\n"); }
    | STRUCT                            { printf("type: STRUCT\n"); }
    ;
flow_control:
    FOR                                  { printf("flow_control: FOR\n"); }
    | WHILE                              { printf("flow_control: WHILE\n"); }
    | DO                                 { printf("flow_control: DO\n"); }
    | BREAK                              { printf("flow_control: BREAK\n"); }
    | CONTINUE                           { printf("flow_control: CONTINUE\n"); }
    | IF                                 { printf("flow_control: IF\n"); }
    | ELSE                               { printf("flow_control: ELSE\n"); }
    | SWITCH                             { printf("flow_control: SWITCH\n"); }
    | CASE                               { printf("flow_control: CASE\n"); }
    | GOTO                               { printf("flow_control: GOTO\n"); }
    | DEFAULT                            { printf("flow_control: DEFAULT\n"); }
    | RETURN                             { printf("flow_control: RETURN\n"); }
    ;
space:
    SPACE                               { printf("space:\n"); }
    | TAB                               { printf("space:\n"); }
    | NEWLINE                           { printf("space:\n"); }
    | END_OF_FILE                       { printf("space:\n"); }
    ;
operator:
    ASSIGNMENT                          { printf("operator:\n"); }
    | ADDITION                          { printf("operator:\n"); }
    | SUBTRACTION                       { printf("operator:\n"); }
    | MUTIPLICATION                     { printf("operator:\n"); }
    | DIVISION                          { printf("operator:\n"); }
    | LESS_THAN                         { printf("operator:\n"); }
    | EQUALS                            { printf("operator:\n"); }
    | GREATER_THAN                      { printf("operator:\n"); }
    | BIT_AND                           { printf("operator:\n"); }
    | BIT_OR                            { printf("operator:\n"); }
    | BIT_XOR                           { printf("operator:\n"); }
    | BIT_NOT                           { printf("operator:\n"); }
    | LOGICAL_NOT                       { printf("operator:\n"); }
    | LOGICAL_AND                       { printf("operator:\n"); }
    | LOGICAL_OR                        { printf("operator:\n"); }
    | SHIFT_LEFT                        { printf("operator:\n"); }
    | SHIFT_RIGHT                       { printf("operator:\n"); }
    | MODULUS                           { printf("operator:\n"); }
    | LEFT_BRACE                        { printf("operator:\n"); }
    | LEFT_CURLY                        { printf("operator:\n"); }
    | LEFT_PAREN                        { printf("operator:\n"); }
    | RIGHT_BRACE                       { printf("operator:\n"); }
    | RIGHT_CURLY                       { printf("operator:\n"); }
    | RIGHT_PAREN                       { printf("operator:\n"); }
    | COMMA                             { printf("operator:\n"); }
    | COLON                             { printf("operator:\n"); }
    | SEMICOLON                         { printf("operator:\n"); }
    | DOUBLE_QUOTE                      { printf("operator:\n"); }
    | SINGLE_QUOTE                      { printf("operator:\n"); }
    | QUESTION_MARK                     { printf("operator:\n"); }
    | DOT                               { printf("operator:\n"); }
    | AT_SYMBOL                         { printf("operator:\n"); }
    | ADDRESS_OF                        { printf("operator:\n"); }
    | SCOPE_RESOLUTION                  { printf("operator:\n"); }
    | LSHIFT_OPERATOR                   { printf("operator:\n"); }
    | RSHIFT_OPERATOR                   { printf("operator:\n"); }
    | INCREMENT_OPERATOR                { printf("operator:\n"); }
    | DECREMENT_OPERATOR                { printf("operator:\n"); }
    | ADD_ASSIGN_OPERATOR               { printf("operator:\n"); }
    | SUB_ASSIGN_OPERATOR               { printf("operator:\n"); }
    | MULT_ASSIGN_OPERATOR              { printf("operator:\n"); }
    | DIV_ASSIGN_OPERATOR               { printf("operator:\n"); }
    | MOD_ASSIGN_OPERATOR               { printf("operator:\n"); }
    | BITAND_ASSIGN_OPERATOR            { printf("operator:\n"); }
    | BITOR_ASSIGN_OPERATOR             { printf("operator:\n"); }
    | BITXOR_ASSIGN_OPERATOR            { printf("operator:\n"); }
    | BITNOT_ASSIGN_OPERATOR            { printf("operator:\n"); }
    | LSHIFT_ASSIGN_OPERATOR            { printf("operator:\n"); }
    | RSHIFT_ASSIGN_OPERATOR            { printf("operator:\n"); }
    | TEMPLATE                          { printf("operator: TEMPLATE\n"); }
    | TYPENAME                          { printf("operator: TYPENAME\n"); }
    | SIZEOF                            { printf("operator:\n"); }
    | DELETE                            { printf("operator:\n"); }
    | STATIC_CAST                       { printf("operator:\n"); }
    | CONST_CAST                        { printf("operator:\n"); }
    | DYNAMIC_CAST                      { printf("operator:\n"); }
    | REINTERPRET_CAST                  { printf("operator:\n"); }
    ;
member_select:
    DIRECT_MEMBER_SELECT                { printf("member_select: DIRECT_MEMBER_SELECT\n"); }
    | INDIRECT_MEMBER_SELECT            { printf("member_select: INDIRECT_MEMBER_SELECT\n"); }
    ;
pointer_to_member:
    INDIRECT_TO_POINTER                  { printf("pointer_to_member: INDIRECT_TO_POINTER\n"); }
    | DIRECT_TO_POINTER                  { printf("pointer_to_member: DIRECT_TO_POINTER\n"); }
    ;
scope_resolution:
    USING                       { printf("scope_resolution: USING\n"); }
    | NAMESPACE                 { printf("scope_resolution: NAMESPACE\n"); }
    ;
preprocess:
    INCLUDE                     { printf("preprocess: include\n"); }
    | DEFINE                    { printf("preprocess: DEFINE\n"); }
    | IFDEF                     { printf("preprocess: IFDEF\n"); }
    | IFNDEF                    { printf("preprocess: IFNDEF\n"); }
    | ENDIF                     { printf("preprocess: ENDIF\n"); }
    | PRAGMA                    { printf("preprocess: PRAGMA\n"); }
    ;
%%

void yyerror(const char *msg)
{
    fprintf(stderr, "Parse error: %s\n", msg);
}
