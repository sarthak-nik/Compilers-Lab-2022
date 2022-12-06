/* C Declarations and Definitions */
%{
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
    
%}

%x SINGLE_LINE_COMMENT
%x MULTI_LINE_COMMENT
%option yylineno
/* Regular Expression Definitions */

KEYWORD                         "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"
IDENTIFIER                      [_a-zA-Z][_a-zA-Z0-9]*
PUNCTUATOR                      "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"
WHITESPACE                      [ \t\n]
DIGIT_SEQUENCE                  [0-9]+
INTEGER_CONSTANT                [1-9][0-9]*|[0]
ESCAPE_SEQUENCE                 \\['"?\\abfnrtv]

EXPONENT_PART                   [eE]([+-]?){DIGIT_SEQUENCE}
FRACTIONAL_CONSTANT             ({DIGIT_SEQUENCE}?\.{DIGIT_SEQUENCE})|({DIGIT_SEQUENCE}\.)
FLOATING_CONSTANT               ({FRACTIONAL_CONSTANT}{EXPONENT_PART}?)|({DIGIT_SEQUENCE}{EXPONENT_PART})

ENUM_CONSTANT                   {IDENTIFIER}


C_CHAR                          [^\'\\\n]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE                 {C_CHAR}+
CHAR_CONSTANT                   \'({C_CHAR_SEQUENCE})\'

CONSTANT                        {INTEGER_CONSTANT}|{FLOATING_CONSTANT}|{ENUM_CONSTANT}|{CHAR_CONSTANT}

S_CHAR                          [^\"\\\n]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE                 {S_CHAR}+
STRING_LITERAL                  \"({S_CHAR_SEQUENCE}?)\"



/* Definitions of Rules and Actions */
%%

{KEYWORD}                       { return KEYWORD; }
{IDENTIFIER}                    { return IDENTIFIER; }
{PUNCTUATOR}                    { return PUNCTUATOR; }
{INTEGER_CONSTANT}              { return INTEGER_CONSTANT; }
{FLOATING_CONSTANT}             { return FLOATING_CONSTANT; }
{CHAR_CONSTANT}                 { return CHAR_CONSTANT; }
{STRING_LITERAL}                { return STRING_LITERAL; }
{WHITESPACE}                            { /* ignore whitespaces */ }


"//"                            { BEGIN(SINGLE_LINE_COMMENT); return SINGLE_LINE_COMMENT_START; }
<SINGLE_LINE_COMMENT>.          { /* eat up the comment */ }
<SINGLE_LINE_COMMENT>\n         { BEGIN(INITIAL); return SINGLE_LINE_COMMENT_END; }
<SINGLE_LINE_COMMENT><<EOF>>    { BEGIN(INITIAL); return SINGLE_LINE_COMMENT_END; }


"/*"                            { BEGIN(MULTI_LINE_COMMENT); return MULTI_LINE_COMMENT_START; }
<MULTI_LINE_COMMENT>"*/"        { BEGIN(INITIAL); return MULTI_LINE_COMMENT_END; }
<MULTI_LINE_COMMENT>.           { /* eat up the comment */ }
<MULTI_LINE_COMMENT>\n          { /* eat up the comment */ }

%%
