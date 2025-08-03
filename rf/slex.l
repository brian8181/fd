%{

//      The basic source character set consists of 96 characters:
//      the space character, the control characters representing horizontal tab,
//      vertical tab, form feed, and new-line, plus the following 91 graphical characters
//
//      a b c d e f g h i j k l m n o p q r s t u v w x y z
//      A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//      0 1 2 3 4 5 6 7 8 9
//      _ { } [ ] # ( ) < > % : ; . ? * + - / ˆ & | ˜ ! = , \ " ’

#include <string.h>

%}

digit   [0-9]
id      [a-zA-Z_][a-zA-Z0-9_]*

%%

"="         { return '='; }
";"         { return ';'; }
"+"         { return '+'; }
"-"         { return '-'; }
","         { return ','; }
"("         { return '('; }
")"         { return ')'; }
"{"         { return '{'; }
"}"         { return '}'; }
"["         { return '['; }
"]"         { return ']'; }
"<"         { return '<'; }
">"         { return '>'; }
"#"         { return '#'; }
"$"         { return '$'; }
"%"         { return '%'; }
"^"         { return '^'; }
"\""        { return '"'; }
"'"         { return '\''; }
"/"         { return '/'; }
"~"         { return '~'; }
"_"         { return '_'; }
":"         { return ':'; }
{digit}+    { ECHO; }
{id}        { ECHO; }
[ \t\n]+    ; // Skip whitespace
.           { printf("Unexpected character: %s\n", yytext); }

%%

// entry point
int main( int argc, char* argvp[] )
{
    yyFlexLexer().yylex() ; /* modified for C++ */
    return EXIT_SUCCESS ;
}
