%{
        #include <stdio.h>
%}

%%

\+          { printf("addition\n"); }
[ \t\n]     { }
[0-9]+      { printf("integer %s\n", yytext); }
if          { printf("keyword if\n"); }

%%

int main(int argc, char **argv) {

    yylex();

    return 0;
}
