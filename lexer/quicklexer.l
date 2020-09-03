%{
        #include <stdio.h>
        #include <stdlib.h>
%}

%%

\+                  { printf("addition\n"); }
[ \t\n]             { }
[[:digit:]]+        { printf("integer %d\n", atoi(yytext)); }
[0-9]+[\.][0-9]*    { printf("float %f\n", atof(yytext)); }
do|for|switch|case  { printf("flow control %s\n", yytext); }
if                  { printf("keyword if\n"); }
while               { printf("keyword while\n"); }
[[:alpha:]]+        { printf("string %s\n", yytext); }

%%

int main(int argc, char **argv) {

    yylex();

    return 0;
}
