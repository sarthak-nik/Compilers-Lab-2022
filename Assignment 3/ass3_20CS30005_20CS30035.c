#include <stdio.h>

#define KEYWORD 10
#define IDENTIFIER 1
#define INTEGER_CONSTANT 2
#define FLOATING_CONSTANT 3
#define CHAR_CONSTANT 4
#define STRING_LITERAL 5
#define PUNCTUATOR 6
#define SINGLE_LINE_COMMENT_START 7
#define SINGLE_LINE_COMMENT_END 8
#define MULTI_LINE_COMMENT_START 9
#define MULTI_LINE_COMMENT_END 11

extern char *yytext;
extern int yylex();
extern int yylineno;

int main()
{
    int token;
    int prev_line = 1;
    while (token = yylex())
    {
        if (prev_line != yylineno)
        {
            printf("\n");
            prev_line = yylineno;
        }

        switch (token)
        {
        case KEYWORD:
            printf("<KEYWORD, %s> ", yytext);
            break;

        case IDENTIFIER:
            printf("<IDENTIFIER, %s> ", yytext);
            break;

        case INTEGER_CONSTANT:
            printf("<INTEGER_CONSTANT, %s> ", yytext);
            break;

        case FLOATING_CONSTANT:
            printf("<FLOATING_CONSTANT, %s> ", yytext);
            break;

        case CHAR_CONSTANT:
            printf("<CHAR_CONSTANT, %s> ", yytext);
            break;

        case STRING_LITERAL:
            printf("<STRING_LITERAL, %s> ", yytext);
            break;

        case PUNCTUATOR:
            printf("<PUNCTUATOR, %s> ", yytext);
            break;

        case SINGLE_LINE_COMMENT_START:
            printf("<SINGLE_LINE_COMMENT_START, %s> ", yytext);
            break;

        case SINGLE_LINE_COMMENT_END:
            printf("<SINGLE_LINE_COMMENT_END, %s> ", "\"\\n\"");
            break;

        case MULTI_LINE_COMMENT_START:
            printf("<MULTI_LINE_COMMENT_START, %s> ", yytext);
            break;

        case MULTI_LINE_COMMENT_END:
            printf("<MULTI_LINE_COMMENT_END, %s> ", yytext);
            break;

        default:
            printf("<INVALID_TOKEN, %s> ", yytext);
        }
    }
    return 0;
}