#include <stdio.h>
extern int yyparse();

int main()
{
    printf("###################### PARSING LINE 1 ######################\n\n");
    yyparse();
    printf("\n\nParsing successfully completed!\n");
    return 0;
}