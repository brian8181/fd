%{
#include "parser.tab.h"
#include <string.h>
%}

digit   [0-9]
id      [a-zA-Z_][a-zA-Z0-9_]*

type    int|float|char
ref     '&'
point   '*'

%%

"int"       { ECHO; return INT; }
"float"     { ECHO; return FLOAT; }
"char"      { ECHO; return CHAR; }
"return"    { ECHO; return RETURN; }
"if"        { ECHO; return IF; }
"else"      { ECHO; return ELSE; }
"do"        { ECHO; return DO; }
"while"     { ECHO; return WHILE; }
"for"       { ECHO; return FOR; }
"continue"  { ECHO; return CONTINUE; }
"switch"    { ECHO; return SWITCH; }
"case"      { ECHO; return CASE; }
"break"     { ECHO; return BREAK; }
"goto"      { ECHO; return GOTO; }
"default"   { ECHO; return DEFAULT; }
"void"      { ECHO; return VOID; }
"private"   { ECHO; return PRIVATE; }
"static"    { ECHO; return STATIC; }
"const"     { ECHO; return CONST; }
"UNSIGNED"  { ECHO; return UNSIGNED; }
"volatile"  { ECHO; return VOLATILE; }
"register"  { ECHO; return REGISTER; }
"="         { ECHO; return '='; }
";"         { ECHO; return ';'; }
"("         { ECHO; return '('; }
")"         { ECHO; return ')'; }
"{"         { ECHO; return '{'; }
"}"         { ECHO; return '}'; }
"+"         { ECHO; return '+'; }
"-"         { ECHO; return '-'; }
","         { ECHO; return ','; }
"["         { ECHO; return '['; }
"]"         { ECHO; return ']'; }
"::"        { ECHO; return SCOPE_RESOLUTION; }
":"         { ECHO; return ':'; }
"&"         { ECHO; return REFERENCE; }
"*"         { ECHO; return POINTER; }
__{id}      { yylval.str = strdup(yytext); return ARG; }
{id}        { yylval.str = strdup(yytext); return ID; }
{digit}+    { yylval.str = strdup(yytext); return NUMBER; }
[ \t\n]+    ; // Skip whitespace
.           { printf("Unexpected character: %s\n", yytext); }

%%

int yywrap(void) { return 1; }

/*
int main()
{
    while (yylex() != 0) ;
    return 0;
}


int main(int argc, char** argv)
{
    if(argc > 1)
    {
        if(!(yyin = fopen(argv[1], "r")))
        {
            perror(argv[1]);
            return (1);
        }
    }
    yylex();
    return 0;
}
*/

int main(int argc, char* argv[])
{
    // #ifdef DEBUG
    // skip exe path ...
   argc--; argv++;
   if (argc > 0)
   {
		FILE *file;
		file = fopen(argv[0], "r");
		if (!file)
        {
			fprintf(stderr,"could not open %s\n", argv[0]);
			exit(1);
		}
		yyin = file;
	}
    else
    {
        fprintf(stderr, "\nMissing filename paramter, help ->\n");
        fprintf(stderr, "lex [OPTION]... [FilE]...\n");
        fprintf(stderr, "Interactive mode...\n\n");
        yyin = stdin;
    }

    yyparse();
    // #endif

    return 0;
}
