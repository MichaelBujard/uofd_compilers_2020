%{
        #include <stdio.h>
        #include <stdlib.h>
%}

%%

int                 { printf("type: integer\n"); }
\(                  { printf("lparen\n"); }
\)                  { printf("rparen\n"); }
\{                  { printf("lbrace\n"); }
\}                  { printf("rbrace\n"); }
\[                  { printf("lbracket\n"); }
\]                  { printf("rbracket\n"); }
[\,\;]              { printf("separator\n"); }
\*                  { printf("mult or pointer\n"); }
\+                  { printf("addition\n"); }
return              { printf("keyword return\n"); }
[ \t\n]             { }
[[:digit:]]+        { printf("integer %d\n", atoi(yytext)); }
[0-9]+[\.][0-9]*    { printf("float %f\n", atof(yytext)); }
do|for|switch|case  { printf("flow control %s\n", yytext); }
if                  { printf("keyword if\n"); }
while               { printf("keyword while\n"); }
[[:alpha:]]+        { printf("identifier %s\n", yytext); }

%%

int main(int argc, char **argv) {

    yylex();

    return 0;
}
