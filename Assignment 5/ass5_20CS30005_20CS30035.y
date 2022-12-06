%{
    /**
    * Bison specifications
    */

    #include <iostream>
    #include "ass5_20CS30005_20CS30035_translator.h"
    using namespace std;

    extern int yylex();         // From lexer
    void yyerror(string s);     // Function to report errors
    extern char* yytext;        // From lexer, gives the text being currently scanned
    extern int yylineno;        // Used for keeping track of the line number
    extern string varType;      // Used for storing the last encountered type
%}

%union {
    int intval;             // For an integer value
    char* charval;          // For a char value
    int instr;              // A special type for instruction number, needed in backpatching
    char uOp;               // For unary operators
    int nParam;             // For number of parameters to a function
    expression* expr;       // For an expression
    statement* stmnt;       // For a statement
    symbol* symbl;          // For a symbol
    SymType* stype;      // For the type of a symbol
    Array* arr;             // For arrays
}

/*
    All tokens
*/
%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INLINE INT LONG REGISTER RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE BOOL COMPLEX IMAGINARY
%token SQUARE_BRACE_OPEN SQUARE_BRACE_CLOSE PARENTHESIS_OPEN PARENTHESIS_CLOSE CURLY_BRACE_OPEN CURLY_BRACE_CLOSE 
%token DOT ARROW INCREMENT DECREMENT BITWISE_AND MULTIPLY ADD SUBTRACT BITWISE_NOR NOT DIVIDE MODULO 
%token LSHIFT RSHIFT LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL EQUAL NOT_EQUAL BITWISE_XOR BITWISE_OR 
%token LOGICAL_AND LOGICAL_OR QUESTION_MARK COLON SEMICOLON ELLIPSIS 
%token ASSIGN MULTIPLY_ASSIGN DIVIDE_ASSIGN MODULO_ASSIGN ADD_ASSIGN SUBTRACT_ASSIGN LSHIFT_ASSIGN RSHIFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN COMMA HASH

// Identifiers are treated with type symbol*
%token <symbl> IDENTIFIER

// Integer constants have a type intval
%token <intval> INTEGER_CONSTANT

// Floating constants have a type charval
%token <charval> FLOATING_CONSTANT

// Character constants have a type charval
%token <charval> CHAR_CONSTANT

// String literals have a type charval
%token <charval> STRING_LITERAL

// The start symbol is translation_unit
%start translation_unit

// Helps in removing the dangling else problem
%right THEN ELSE

// Non-terminals of type uOp (unary operator)
%type <uOp> unary_operator

// Non-terminals of type nParam (number of parameters)
%type <nParam> argument_expression_list argument_expression_list_opt

// Non-terminals of type expr (denoting expressions)
%type <expr> 
        expression
        primary_expression 
        multiplicative_expression
        additive_expression
        shift_expression
        relational_expression
        equality_expression
        and_expression
        exclusive_or_expression
        inclusive_or_expression
        logical_and_expression
        logical_or_expression
        conditional_expression
        assignment_expression
        expression_statement

// Non-terminals of type stmnt (denoting statements)
%type <stmnt>
        statement
        compound_statement
        loop_statement
        selection_statement
        iteration_statement
        labeled_statement 
        jump_statement
        block_item
        block_item_list
        block_item_list_opt

// The pointer non-terminal is treated with type SymType
%type <stype> pointer

// Non-terminals of type symbl (symbol*)
%type <symbl> constant initializer
%type <symbl> direct_declarator init_declarator declarator

// Non-terminals of type arr
%type <arr> postfix_expression unary_expression cast_expression

// Auxiliary non-terminal M of type instr to help in backpatching
%type <instr> M

// Auxiliary non-terminal N of type stmnt to help in control flow statements
%type <stmnt> N

%%

primary_expression: 
        IDENTIFIER
        {
            $$ = new expression();  // Create new expression
            $$->loc = $1;           // Store pointer to entry in the symbol table
            $$->type = "non_bool";
        }
        | constant
        {
            $$ = new expression();  // Create new expression
            $$->loc = $1;           // Store pointer to entry in the symbol table
        }
        | STRING_LITERAL
        {
            $$ = new expression();  // Create new expression
            $$->loc = SymTable::gentemp(new SymType("ptr"), $1);  // Create a new temporary, and store the value in that temporary
            $$->loc->type->arrType = new SymType("char");
        }
        | PARENTHESIS_OPEN expression PARENTHESIS_CLOSE
        {
            $$ = $2;    // Simple assignment
        }
        ;

constant: 
        INTEGER_CONSTANT
        {
            $$ = SymTable::gentemp(new SymType("int"), convertIntToString($1));   // Create a new temporary, and store the value in that temporary
            emit("=", $$->name, $1);
        }
        | FLOATING_CONSTANT
        {
            $$ = SymTable::gentemp(new SymType("float"), string($1));     // Create a new temporary, and store the value in that temporary
            emit("=", $$->name, string($1));
        }
        | CHAR_CONSTANT
        {
            $$ = SymTable::gentemp(new SymType("float"), string($1));     // Create a new temporary, and store the value in that temporary
            emit("=", $$->name, string($1));
        }
        ;

postfix_expression: 
        primary_expression
        {
            $$ = new Array();           // Create a new Array
            $$->Array = $1->loc;        // Store the location of the primary expression
            $$->type = $1->loc->type;   // Update the type
            $$->loc = $$->Array;
        }
        | postfix_expression SQUARE_BRACE_OPEN expression SQUARE_BRACE_CLOSE
        {
            $$ = new Array();               // Create a new Array
            $$->type = $1->type->arrType;   // Set the type equal to the element type
            $$->Array = $1->Array;          // Copy the base
            $$->loc = SymTable::gentemp(new SymType("int"));  // Store address of new temporary
            $$->atype = "arr";              // Set atype to "arr"

            if($1->atype == "arr") {        // If we have an "arr" type then, multiply the size of the sub-type of Array with the expression value and add
                symbol* sym = SymTable::gentemp(new SymType("int"));
                int sz = sizeOfType($$->type);
                emit("*", sym->name, $3->loc->name, convertIntToString(sz));
                emit("+", $$->loc->name, $1->loc->name, sym->name);
            }
            else {                          // Compute the size
                int sz = sizeOfType($$->type);
                emit("*", $$->loc->name, $3->loc->name, convertIntToString(sz));
            }
        }
        | postfix_expression PARENTHESIS_OPEN argument_expression_list_opt PARENTHESIS_CLOSE
        {   
            // Corresponds to calling a function with the function name and the appropriate number of parameters
            $$ = new Array();
            $$->Array = SymTable::gentemp($1->type);
            emit("call", $$->Array->name, $1->Array->name, convertIntToString($3));
        }
        | postfix_expression DOT IDENTIFIER
        { }
        | postfix_expression ARROW IDENTIFIER
        { }
        | postfix_expression INCREMENT
        {   
            $$ = new Array();
            $$->Array = SymTable::gentemp($1->Array->type);      // Generate a new temporary
            emit("=", $$->Array->name, $1->Array->name);            // First assign the old value
            emit("+", $1->Array->name, $1->Array->name, "1");       // Then add 1
        }
        | postfix_expression DECREMENT
        {
            $$ = new Array();
            $$->Array = SymTable::gentemp($1->Array->type);      // Generate a new temporary
            emit("=", $$->Array->name, $1->Array->name);            // First assign the old value
            emit("-", $1->Array->name, $1->Array->name, "1");       // Then subtract 1
        }
        | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE
        { }
        | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE
        { }
        ;

argument_expression_list_opt: 
        argument_expression_list
        {
            $$ = $1;    // Assign $1 to $$
        }
        | %empty
        {
            $$ = 0;     // No arguments, just equate to zero
        }
        ;

argument_expression_list: 
        assignment_expression
        {
            $$ = 1;                         // consider one argument
            emit("param", $1->loc->name);   // emit parameter
        }
        | argument_expression_list COMMA assignment_expression
        {
            $$ = $1 + 1;                    // consider one more argument, so add 1
            emit("param", $3->loc->name);   // emit parameter
        }
        ;

unary_expression: 
        postfix_expression
        {
            $$ = $1;    // Assign $1 to $$
        }
        | INCREMENT unary_expression
        {
            emit("+", $2->Array->name, $2->Array->name, "1");   // Add 1
            $$ = $2;    // Assign
        }
        | DECREMENT unary_expression
        {
            emit("-", $2->Array->name, $2->Array->name, "1");   // Subtract 1
            $$ = $2;    // Assign
        }
        | unary_operator cast_expression
        {
            // Case of unary operator
            $$ = new Array();
            switch($1) {
                case '&':   // Address
                    $$->Array = SymTable::gentemp(new SymType("ptr"));    // Generate a pointer temporary
                    $$->Array->type->arrType = $2->Array->type;                 // Assign corresponding type
                    emit("= &", $$->Array->name, $2->Array->name);              // Emit the quad
                    break;
                case '*':   // De-referencing
                    $$->atype = "ptr";
                    $$->loc = SymTable::gentemp($2->Array->type->arrType);   // Generate a temporary of the appropriate type
                    $$->Array = $2->Array;                                      // Assign
                    emit("= *", $$->loc->name, $2->Array->name);                // Emit the quad
                    break;
                case '+':   // Unary plus
                    $$ = $2;    // Simple assignment
                    break;
                case '-':   // Unary minus
                    $$->Array = SymTable::gentemp(new SymType($2->Array->type->type));    // Generate temporary of the same base type
                    emit("= -", $$->Array->name, $2->Array->name);                              // Emit the quad
                    break;
                case '~':   // Bitwise not
                    $$->Array = SymTable::gentemp(new SymType($2->Array->type->type));    // Generate temporary of the same base type
                    emit("= ~", $$->Array->name, $2->Array->name);                              // Emit the quad
                    break;
                case '!':   // Logical not 
                    $$->Array = SymTable::gentemp(new SymType($2->Array->type->type));    // Generate temporary of the same base type
                    emit("= !", $$->Array->name, $2->Array->name);                              // Emit the quad
                    break;
            }
        }
        | SIZEOF unary_expression
        { }
        | SIZEOF PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE
        { }
        ;

unary_operator:
        BITWISE_AND
        {
            $$ = '&';
        }
        | MULTIPLY
        {
            $$ = '*';
        }
        | ADD
        {
            $$ = '+';
        }
        | SUBTRACT
        {
            $$ = '-';
        }
        | BITWISE_NOR
        {
            $$ = '~';
        }
        | NOT
        {
            $$ = '!';
        }
        ;

cast_expression: 
        unary_expression
        {
            $$ = $1;    // Simple assignment
        }
        | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE cast_expression
        {
            $$ = new Array();
            $$->Array = convertType($4->Array, varType);    // Generate a new symbol of the appropriate type
        }
        ;

multiplicative_expression: 
        cast_expression
        {
            $$ = new expression();          // Generate new expression
            if($1->atype == "arr") {        // atype "arr"
                $$->loc = SymTable::gentemp($1->loc->type);  // Generate new temporary
                emit("=[]", $$->loc->name, $1->Array->name, $1->loc->name);     // Emit the quad
            }
            else if($1->atype == "ptr") {   // atype "ptr"
                $$->loc = $1->loc;          // Assign the symbol table entry
            }
            else {
                $$->loc = $1->Array;
            }
        }
        | multiplicative_expression MULTIPLY cast_expression
        {   
            // Indicates multiplication
            if(typecheck($1->loc, $3->Array)) {     // Check for type compatibility
                $$ = new expression();                                                  // Generate new expression
                $$->loc = SymTable::gentemp(new SymType($1->loc->type->type));    // Generate new temporary
                emit("*", $$->loc->name, $1->loc->name, $3->Array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
        | multiplicative_expression DIVIDE cast_expression
        {
            // Indicates division
            if(typecheck($1->loc, $3->Array)) {     // Check for type compatibility
                $$ = new expression();                                                  // Generate new expression
                $$->loc = SymTable::gentemp(new SymType($1->loc->type->type));    // Generate new temporary
                emit("/", $$->loc->name, $1->loc->name, $3->Array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
        | multiplicative_expression MODULO cast_expression
        {
            // Indicates modulo
            if(typecheck($1->loc, $3->Array)) {     // Check for type compatibility
                $$ = new expression();                                                  // Generate new expression
                $$->loc = SymTable::gentemp(new SymType($1->loc->type->type));    // Generate new temporary
                emit("%", $$->loc->name, $1->loc->name, $3->Array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
        ;

additive_expression: 
        multiplicative_expression
        {
            $$ = $1;    // Simple assignment
        }
        | additive_expression ADD multiplicative_expression
        {   
            // Indicates addition
            if(typecheck($1->loc, $3->loc)) {       // Check for type compatibility
                $$ = new expression();                                                  // Generate new expression
                $$->loc = SymTable::gentemp(new SymType($1->loc->type->type));    // Generate new temporary
                emit("+", $$->loc->name, $1->loc->name, $3->loc->name);                 // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
        | additive_expression SUBTRACT multiplicative_expression
        {
            // Indicates subtraction
            if(typecheck($1->loc, $3->loc)) {       // Check for type compatibility
                $$ = new expression();                                                  // Generate new expression
                $$->loc = SymTable::gentemp(new SymType($1->loc->type->type));    // Generate new temporary
                emit("-", $$->loc->name, $1->loc->name, $3->loc->name);                 // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
        ;

shift_expression: 
        additive_expression
        {
            $$ = $1;    // Simple assignment
        }
        | shift_expression LSHIFT additive_expression
        {
            // Indicates left shift
            if($3->loc->type->type == "int") {      // Check for type compatibility (int)
                $$ = new expression();                                      // Generate new expression
                $$->loc = SymTable::gentemp(new SymType("int"));      // Generate new temporary
                emit("<<", $$->loc->name, $1->loc->name, $3->loc->name);    // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
        | shift_expression RSHIFT additive_expression
        {
            // Indicates right shift
            if($3->loc->type->type == "int") {      // Check for type compatibility (int)
                $$ = new expression();                                      // Generate new expression
                $$->loc = SymTable::gentemp(new SymType("int"));      // Generate new temporary
                emit(">>", $$->loc->name, $1->loc->name, $3->loc->name);    // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
        ;

relational_expression: 
        shift_expression
        {
            $$ = $1;    // Simple assignment
        }
        | relational_expression LESS_THAN shift_expression
        {
            if(typecheck($1->loc, $3->loc)) {                   // Check for type compatibility
                $$ = new expression();                          // Generate new expression of type bool
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                $$->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("<", "", $1->loc->name, $3->loc->name);    // Emit "if x < y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
        | relational_expression GREATER_THAN shift_expression
        {
            if(typecheck($1->loc, $3->loc)) {                   // Check for type compatibility
                $$ = new expression();                          // Generate new expression of type bool
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                $$->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit(">", "", $1->loc->name, $3->loc->name);    // Emit "if x > y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
        | relational_expression LESS_THAN_EQUAL shift_expression
        {
            if(typecheck($1->loc, $3->loc)) {                   // Check for type compatibility
                $$ = new expression();                          // Generate new expression of type bool
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                $$->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("<=", "", $1->loc->name, $3->loc->name);   // Emit "if x <= y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
        | relational_expression GREATER_THAN_EQUAL shift_expression
        {
            if(typecheck($1->loc, $3->loc)) {                   // Check for type compatibility
                $$ = new expression();                          // Generate new expression of type bool
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                $$->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit(">=", "", $1->loc->name, $3->loc->name);   // Emit "if x >= y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
        ;

equality_expression: 
        relational_expression
        {
            $$ = $1;    // Simple assignment
        }
        | equality_expression EQUAL relational_expression
        {
            if(typecheck($1->loc, $3->loc)) {                   // Check for type compatibility
                convertBoolToInt($1);                           // Convert bool to int
                convertBoolToInt($3);
                $$ = new expression();                          // Generate new expression of type bool
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                $$->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("==", "", $1->loc->name, $3->loc->name);   // Emit "if x == y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
        | equality_expression NOT_EQUAL relational_expression
        {
            if(typecheck($1->loc, $3->loc)) {                   // Check for type compatibility
                convertBoolToInt($1);                           // Convert bool to int
                convertBoolToInt($3);
                $$ = new expression();                          // Generate new expression of type bool
                $$->type = "bool";
                $$->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                $$->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("!=", "", $1->loc->name, $3->loc->name);   // Emit "if x != y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
        ;

and_expression: 
        equality_expression
        {
            $$ = $1;    // Simple assignment
        }
        | and_expression BITWISE_AND equality_expression
        {
            if(typecheck($1->loc, $3->loc)) {                               // Check for type compatibility
                convertBoolToInt($1);                                       // Convert bool to int
                convertBoolToInt($3);
                $$ = new expression();
                $$->type = "not_bool";                                      // The new result is not bool
                $$->loc = SymTable::gentemp(new SymType("int"));      // Create a new temporary
                emit("&", $$->loc->name, $1->loc->name, $3->loc->name);     // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
        ;

exclusive_or_expression: 
        and_expression
        {
            $$ = $1;    // Simple assignment
        }
        | exclusive_or_expression BITWISE_XOR and_expression
        {
            if(typecheck($1->loc, $3->loc)) {                               // Check for type compatibility
                convertBoolToInt($1);                                       // Convert bool to int
                convertBoolToInt($3);
                $$ = new expression();
                $$->type = "not_bool";                                      // The new result is not bool
                $$->loc = SymTable::gentemp(new SymType("int"));      // Create a new temporary
                emit("^", $$->loc->name, $1->loc->name, $3->loc->name);     // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
        ;

inclusive_or_expression: 
        exclusive_or_expression
        {
            $$ = $1;    // Simple assignment
        }
        | inclusive_or_expression BITWISE_OR exclusive_or_expression
        {
            if(typecheck($1->loc, $3->loc)) {                               // Check for type compatibility
                convertBoolToInt($1);                                       // Convert bool to int
                convertBoolToInt($3);
                $$ = new expression();
                $$->type = "not_bool";                                      // The new result is not bool
                $$->loc = SymTable::gentemp(new SymType("int"));      // Create a new temporary
                emit("|", $$->loc->name, $1->loc->name, $3->loc->name);     // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
        ;

logical_and_expression: 
        inclusive_or_expression
        {
            $$ = $1;    // Simple assignment
        }
        | logical_and_expression LOGICAL_AND M inclusive_or_expression
        {
            /*
                Here, we have augmented the grammar with the non-terminal M to facilitate backpatching
            */
            convertIntToBool($1);                                   // Convert the expressions from int to bool
            convertIntToBool($4);
            $$ = new expression();                                  // Create a new bool expression for the result
            $$->type = "bool";
            backpatch($1->truelist, $3);                            // Backpatching
            $$->truelist = $4->truelist;                            // Generate truelist from truelist of $4
            $$->falselist = merge($1->falselist, $4->falselist);    // Generate falselist by merging the falselists of $1 and $4
        }
        ;

logical_or_expression: 
        logical_and_expression
        {
            $$ = $1;    // Simple assignment
        }
        | logical_or_expression LOGICAL_OR M logical_and_expression
        {
            convertIntToBool($1);                                   // Convert the expressions from int to bool
            convertIntToBool($4);
            $$ = new expression();                                  // Create a new bool expression for the result
            $$->type = "bool";
            backpatch($1->falselist, $3);                           // Backpatching
            $$->falselist = $4->falselist;                          // Generate falselist from falselist of $4
            $$->truelist = merge($1->truelist, $4->truelist);       // Generate truelist by merging the truelists of $1 and $4
        }
        ;

conditional_expression: 
        logical_or_expression
        {
            $$ = $1;    // Simple assignment
        }
        | logical_or_expression N QUESTION_MARK M expression N COLON M conditional_expression
        {   
            /*
                Note the augmented grammar with the non-terminals M and N
            */
            $$->loc = SymTable::gentemp($5->loc->type);      // Generate temporary for the expression
            $$->loc->update($5->loc->type);
            emit("=", $$->loc->name, $9->loc->name);            // Assign the conditional expression
            list<int> l1 = makelist(nextinstr());
            emit("goto", "");                                   // Prevent fall-through
            backpatch($6->nextlist, nextinstr());               // Make list with next instruction
            emit("=", $$->loc->name, $5->loc->name);
            list<int> l2 = makelist(nextinstr());               // Make list with next instruction
            l1 = merge(l1, l2);                                 // Merge the two lists
            emit("goto", "");                                   // Prevent fall-through
            backpatch($2->nextlist, nextinstr());               // Backpatching
            convertIntToBool($1);                               // Convert expression to bool
            backpatch($1->truelist, $4);                        // When $1 is true, control goes to $4 (expression)
            backpatch($1->falselist, $8);                       // When $1 is false, control goes to $8 (conditional_expression)
            backpatch(l1, nextinstr());
        }
        ;

M: %empty
        {   
            // Stores the next instruction value, and helps in backpatching
            $$ = nextinstr();
        }
        ;

N: %empty
        {
            // Helps in control flow
            $$ = new statement();
            $$->nextlist = makelist(nextinstr());
            emit("goto", "");
        }
        ;

assignment_expression: 
        conditional_expression
        {
            $$ = $1;    // Simple assignment
        }
        | unary_expression assignment_operator assignment_expression
        {
            if($1->atype == "arr") {        // If atype is "arr", convert and emit
                $3->loc = convertType($3->loc, $1->type->type);
                emit("[]=", $1->Array->name, $1->loc->name, $3->loc->name);
            }
            else if($1->atype == "ptr") {   // If atype is "ptr", emit 
                emit("*=", $1->Array->name, $3->loc->name);
            }
            else {
                $3->loc = convertType($3->loc, $1->Array->type->type);
                emit("=", $1->Array->name, $3->loc->name);
            }
            $$ = $3;
        }
        ;

assignment_operator: 
        ASSIGN
        { }
        | MULTIPLY_ASSIGN
        { }
        | DIVIDE_ASSIGN
        { }
        | MODULO_ASSIGN
        { }
        | ADD_ASSIGN
        { }
        | SUBTRACT_ASSIGN
        { }
        | LSHIFT_ASSIGN
        { }
        | RSHIFT_ASSIGN
        { }
        | AND_ASSIGN
        { }
        | XOR_ASSIGN
        { }
        | OR_ASSIGN
        { }
        ;

expression: 
        assignment_expression
        {
            $$ = $1;
        }
        | expression COMMA assignment_expression
        { }
        ;

constant_expression: 
        conditional_expression
        { }
        ;

declaration: 
        declaration_specifiers init_declarator_list SEMICOLON
        { }
        | declaration_specifiers SEMICOLON
        { }
        ;

declaration_specifiers: 
        storage_class_specifier declaration_specifiers
        { }
        |storage_class_specifier
        { }
        | type_specifier declaration_specifiers
        { }
        | type_specifier
        { }
        | type_qualifier declaration_specifiers
        { }
        | type_qualifier
        { }
        | function_specifier declaration_specifiers
        { }
        | function_specifier
        { }
        ;

init_declarator_list: 
        init_declarator
        { }
        | init_declarator_list COMMA init_declarator
        { }
        ;

init_declarator: 
        declarator
        {
            $$ = $1;
        }
        | declarator ASSIGN initializer
        {   
            // Find out the initial value and emit it
            if($3->value != "") {
                $1->value = $3->value;
            }
            emit("=", $1->name, $3->name);
        }
        ;

storage_class_specifier: 
        EXTERN
        { }
        | STATIC
        { }
        | AUTO
        { }
        | REGISTER
        { }
        ;

type_specifier: 
        VOID
        {
            varType = "void";   // Store the latest encountered type in varType
        }
        | CHAR
        {
            varType = "char";   // Store the latest encountered type in varType
        }
        | SHORT
        { }
        | INT
        {
            varType = "int";    // Store the latest encountered type in varType
        }
        | LONG
        { }
        | FLOAT
        {
            varType = "float";  // Store the latest encountered type in varType
        }
        | DOUBLE
        { }
        | SIGNED
        { }
        | UNSIGNED
        { }
        | BOOL
        { }
        | COMPLEX
        { }
        | IMAGINARY
        { }
        | enum_specifier
        { }
        ;

specifier_qualifier_list: 
        type_specifier specifier_qualifier_list_opt
        { }
        | type_qualifier specifier_qualifier_list_opt
        { }
        ;

specifier_qualifier_list_opt: 
        specifier_qualifier_list
        { }
        | %empty
        { }
        ;

enum_specifier: 
        ENUM identifier_opt CURLY_BRACE_OPEN enumerator_list CURLY_BRACE_CLOSE
        { }
        | ENUM identifier_opt CURLY_BRACE_OPEN enumerator_list COMMA CURLY_BRACE_CLOSE
        { }
        | ENUM IDENTIFIER
        { }
        ;

identifier_opt: 
        IDENTIFIER
         
        | %empty
         
        ;

enumerator_list: 
        enumerator
         
        | enumerator_list COMMA enumerator
         
        ;

enumerator: 
        IDENTIFIER
         
        | IDENTIFIER ASSIGN constant_expression
         
        ;

type_qualifier: 
        CONST
         
        | RESTRICT
         
        | VOLATILE
         
        ;

function_specifier: 
        INLINE
         
        ;

declarator: 
        pointer direct_declarator
        {
            SymType* t = $1;
            // In case of multi-dimesnional arrays, keep on going down in a hierarchial fashion to get the base type
            while(t->arrType != NULL) {
                t = t->arrType;
            }
            t->arrType = $2->type;  // Store the base type
            $$ = $2->update($1);    // Update
        }
        | direct_declarator
         
        ;

direct_declarator: 
        IDENTIFIER
        {
            $$ = $1->update(new SymType(varType));   // For an identifier, update the type to varType
            currSymbol = $$;                         // Update pointer to current symbol
        }
        | PARENTHESIS_OPEN declarator PARENTHESIS_CLOSE
        {
            $$ = $2;    // Simple assignment
        }
        | direct_declarator SQUARE_BRACE_OPEN type_qualifier_list assignment_expression SQUARE_BRACE_CLOSE
        { }
        | direct_declarator SQUARE_BRACE_OPEN type_qualifier_list SQUARE_BRACE_CLOSE
        { }
        | direct_declarator SQUARE_BRACE_OPEN assignment_expression SQUARE_BRACE_CLOSE
        {
            SymType* t = $1->type;
            SymType* prev = NULL;
            // Keep moving recursively to get the base type
            while(t->type == "arr") {
                prev = t;
                t = t->arrType;
            }
            if(prev == NULL) {
                int temp = atoi($3->loc->value.c_str());                // Get initial value
                SymType* tp = new SymType("arr", $1->type, temp); // Create that type
                $$ = $1->update(tp);                                    // Update the symbol table for that symbol
            }
            else {
                int temp = atoi($3->loc->value.c_str());                // Get initial value
                prev->arrType = new SymType("arr", t, temp);         // Create that type
                $$ = $1->update($1->type);                              // Update the symbol table for that symbol
            }
        }
        | direct_declarator SQUARE_BRACE_OPEN SQUARE_BRACE_CLOSE
        {
            SymType* t = $1->type;
            SymType* prev = NULL;
            // Keep moving recursively to get the base type
            while(t->type == "arr") {
                prev = t;
                t = t->arrType;
            }
            if(prev == NULL) {
                SymType* tp = new SymType("arr", $1->type, 0);
                $$ = $1->update(tp);
            }
            else {
                prev->arrType = new SymType("arr", t, 0);
                $$ = $1->update($1->type);
            }
        }
        | direct_declarator SQUARE_BRACE_OPEN STATIC type_qualifier_list assignment_expression SQUARE_BRACE_CLOSE
        { }
        | direct_declarator SQUARE_BRACE_OPEN STATIC assignment_expression SQUARE_BRACE_CLOSE
        { }
        | direct_declarator SQUARE_BRACE_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACE_CLOSE
        { }
        | direct_declarator SQUARE_BRACE_OPEN type_qualifier_list MULTIPLY SQUARE_BRACE_CLOSE
        { }
        | direct_declarator SQUARE_BRACE_OPEN MULTIPLY SQUARE_BRACE_CLOSE
        { }
        | direct_declarator PARENTHESIS_OPEN change_table parameter_type_list PARENTHESIS_CLOSE
        {
            currSt->name = $1->name;
            if($1->type->type != "void") {
                symbol* s = currSt->lookup("return");    // Lookup for return value
                s->update($1->type);
            }
            $1->nestedTable = currSt;
            currSt->parent = globalST;   // Update parent symbol table
            switchTable(globalST);          // Switch current table to point to the global symbol table
            currSymbol = $$;             // Update current symbol
        }
        | direct_declarator PARENTHESIS_OPEN identifier_list PARENTHESIS_CLOSE
        { }
        | direct_declarator PARENTHESIS_OPEN change_table PARENTHESIS_CLOSE
        {
            currSt->name = $1->name;
            if($1->type->type != "void") {
                symbol* s = currSt->lookup("return");    // Lookup for return value
                s->update($1->type);
            }
            $1->nestedTable = currSt;
            currSt->parent = globalST;   // Update parent symbol table
            switchTable(globalST);          // Switch current table to point to the global symbol table
            currSymbol = $$;             // Update current symbol
        }
        ;

type_qualifier_list_opt: 
        type_qualifier_list
        { }
        | %empty
        { }
        ;

pointer: 
        MULTIPLY type_qualifier_list_opt
        {
            $$ = new SymType("ptr");     //  Create new type "ptr"
        }
        | MULTIPLY type_qualifier_list_opt pointer
        {
            $$ = new SymType("ptr", $3); //  Create new type "ptr"
        }
        ;

type_qualifier_list: 
        type_qualifier
        { }
        | type_qualifier_list type_qualifier
        { }
        ;

parameter_type_list: 
        parameter_list
        { }
        | parameter_list COMMA ELLIPSIS
        { }
        ;

parameter_list: 
        parameter_declaration
        { }
        | parameter_list COMMA parameter_declaration
        { }
        ;

parameter_declaration: 
        declaration_specifiers declarator
        { }
        | declaration_specifiers
        { }
        ;

identifier_list: 
        IDENTIFIER
        { }
        | identifier_list COMMA IDENTIFIER
        { }
        ;

type_name: 
        specifier_qualifier_list
        { }
        ;

initializer: 
        assignment_expression
        {
            $$ = $1->loc;   // Simple assignment
        }
        | CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE
        { }
        | CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE
        { }
        ;

initializer_list: 
        designation_opt initializer
        { }
        | initializer_list COMMA designation_opt initializer
        { }
        ;

designation_opt: 
        designation
        { }
        | %empty
        { }
        ;

designation: 
        designator_list ASSIGN
        { }
        ;

designator_list: 
        designator
        { }
        | designator_list designator
        { }
        ;

designator: 
        SQUARE_BRACE_OPEN constant_expression SQUARE_BRACE_CLOSE
        { }
        | DOT IDENTIFIER
        { }
        ;

statement: 
        labeled_statement
        { }
        | compound_statement
        {
            $$ = $1;    // Simple assignment
        }
        | expression_statement
        {
            $$ = new statement();           // Create new statement
            $$->nextlist = $1->nextlist;    // Assign same nextlist
        }
        | selection_statement
        {
            $$ = $1;    // Simple assignment
        }
        | iteration_statement
        {
            $$ = $1;    // Simple assignment
        }
        | jump_statement
        {
            $$ = $1;    // Simple assignment
        }
        ;

/* New non-terminal that has been added to facilitate the structure of loops */
loop_statement:
        labeled_statement
        { }
        | expression_statement
        {
            $$ = new statement();           // Create new statement
            $$->nextlist = $1->nextlist;    // Assign same nextlist
        }
        | selection_statement
        {
            $$ = $1;    // Simple assignment
        }
        | iteration_statement
        {
            $$ = $1;    // Simple assignment
        }
        | jump_statement
        {
            $$ = $1;    // Simple assignment
        }
        ;

labeled_statement: 
        IDENTIFIER COLON statement
        { }
        | CASE constant_expression COLON statement
        { }
        | DEFAULT COLON statement
        { }
        ;

compound_statement: 
        CURLY_BRACE_OPEN X change_table block_item_list_opt CURLY_BRACE_CLOSE
        {
            /*
                Here, the grammar has been augmented with non-terminals like X and change_table to allow creation of nested symbol tables
            */
            $$ = $4;
            switchTable(currSt->parent);     // Update current symbol table
        }
        ;

block_item_list_opt: 
        block_item_list
        {
            $$ = $1;    // Simple assignment
        }
        | %empty
        {
            $$ = new statement();   // Create new statement
        }
        ;

block_item_list: 
        block_item
        {
            $$ = $1;    // Simple assignment
        }
        | block_item_list M block_item
        {   
            /*
                This production rule has been augmented with the non-terminal M
            */
            $$ = $3;
            backpatch($1->nextlist, $2);    // After $1, move to block_item via $2
        }
        ;

block_item: 
        declaration
        {
            $$ = new statement();   // Create new statement
        }
        | statement
        {
            $$ = $1;    // Simple assignment
        }
        ;

expression_statement: 
        expression SEMICOLON
        {
            $$ = $1;    // Simple assignment
        }
        | SEMICOLON
        {
            $$ = new expression();  // Create new expression
        }
        ;

selection_statement: 
        IF PARENTHESIS_OPEN expression N PARENTHESIS_CLOSE M statement N %prec THEN
        {
            /*
                This production rule has been augmented for control flow
            */
            backpatch($4->nextlist, nextinstr());                   // nextlist of N now has nextinstr
            convertIntToBool($3);                                   // Convert expression to bool
            $$ = new statement();                                   // Create new statement
            backpatch($3->truelist, $6);                            // Backpatching - if expression is true, go to M
            // Merge falselist of expression, nextlist of statement and nextlist of the last N
            list<int> temp = merge($3->falselist, $7->nextlist);
            $$->nextlist = merge($8->nextlist, temp);
        }
        | IF PARENTHESIS_OPEN expression N PARENTHESIS_CLOSE M statement N ELSE M statement
        {
            /*
                This production rule has been augmented for control flow
            */
            backpatch($4->nextlist, nextinstr());                   // nextlist of N now has nextinstr
            convertIntToBool($3);                                   // Convert expression to bool
            $$ = new statement();                                   // Create new statement
            backpatch($3->truelist, $6);                            // Backpatching - if expression is true, go to first M, else go to second M
            backpatch($3->falselist, $10);
            // Merge nextlist of statement, nextlist of N and nextlist of the last statement
            list<int> temp = merge($7->nextlist, $8->nextlist);
            $$->nextlist = merge($11->nextlist, temp);
        }
        | SWITCH PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement
        { }
        ;

iteration_statement: 
        WHILE W PARENTHESIS_OPEN X change_table M expression PARENTHESIS_CLOSE M loop_statement
        {   
            /*
                This production rule has been augmented with non-terminals like W, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            $$ = new statement();                   // Create a new statement
            convertIntToBool($7);                   // Convert expression to bool
            backpatch($10->nextlist, $6);           // Go back to M1 and expression after one iteration of loop_statement
            backpatch($7->truelist, $9);            // Go to M2 and loop_statement if expression is true
            $$->nextlist = $7->falselist;           // Exit loop if expression is false
            emit("goto", convertIntToString($6));   // Emit to prevent fall-through
            blockName = "";
            switchTable(currSt->parent);
        }
        | WHILE W PARENTHESIS_OPEN X change_table M expression PARENTHESIS_CLOSE CURLY_BRACE_OPEN M block_item_list_opt CURLY_BRACE_CLOSE
        {
            /*
                This production rule has been augmented with non-terminals like W, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            $$ = new statement();                   // Create a new statement
            convertIntToBool($7);                   // Convert expression to bool
            backpatch($11->nextlist, $6);           // Go back to M1 and expression after one iteration
            backpatch($7->truelist, $10);           // Go to M2 and block_item_list_opt if expression is true
            $$->nextlist = $7->falselist;           // Exit loop if expression is false
            emit("goto", convertIntToString($6));   // Emit to prevent fall-through
            blockName = "";
            switchTable(currSt->parent);
        }
        | DO D M loop_statement M WHILE PARENTHESIS_OPEN expression PARENTHESIS_CLOSE SEMICOLON
        {
            /*
                This production rule has been augmented with non-terminals like D and M to handle the control flow, backpatching and detect the kind of loop
            */
            $$ = new statement();                   // Create a new statement     
            convertIntToBool($8);                   // Convert expression to bool
            backpatch($8->truelist, $3);            // Go back to M1 and loop_statement if expression is true
            backpatch($4->nextlist, $5);            // Go to M2 to check expression after statement is complete
            $$->nextlist = $8->falselist;           // Exit loop if expression is false  
            blockName = "";
        }
        | DO D CURLY_BRACE_OPEN M block_item_list_opt CURLY_BRACE_CLOSE M WHILE PARENTHESIS_OPEN expression PARENTHESIS_CLOSE SEMICOLON
        {
            /*
                This production rule has been augmented with non-terminals like D and M to handle the control flow, backpatching and detect the kind of loop
            */
            $$ = new statement();                   // Create a new statement  
            convertIntToBool($10);                  // Convert expression to bool
            backpatch($10->truelist, $4);           // Go back to M1 and block_item_list_opt if expression is true
            backpatch($5->nextlist, $7);            // Go to M2 to check expression after block_item_list_opt is complete
            $$->nextlist = $10->falselist;          // Exit loop if expression is false  
            blockName = "";
        }
        | FOR F PARENTHESIS_OPEN X change_table declaration M expression_statement M expression N PARENTHESIS_CLOSE M loop_statement
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            $$ = new statement();                   // Create a new statement
            convertIntToBool($8);                   // Convert expression to bool
            backpatch($8->truelist, $13);           // Go to M3 if expression is true
            backpatch($11->nextlist, $7);           // Go back to M1 after N
            backpatch($14->nextlist, $9);           // Go back to expression after loop_statement
            emit("goto", convertIntToString($9));   // Emit to prevent fall-through
            $$->nextlist = $8->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currSt->parent);
        }
        | FOR F PARENTHESIS_OPEN X change_table expression_statement M expression_statement M expression N PARENTHESIS_CLOSE M loop_statement
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            $$ = new statement();                   // Create a new statement
            convertIntToBool($8);                   // Convert expression to bool
            backpatch($8->truelist, $13);           // Go to M3 if expression is true
            backpatch($11->nextlist, $7);           // Go back to M1 after N
            backpatch($14->nextlist, $9);           // Go back to expression after loop_statement
            emit("goto", convertIntToString($9));   // Emit to prevent fall-through
            $$->nextlist = $8->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currSt->parent);
        }
        | FOR F PARENTHESIS_OPEN X change_table declaration M expression_statement M expression N PARENTHESIS_CLOSE M CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            $$ = new statement();                   // Create a new statement
            convertIntToBool($8);                   // Convert expression to bool
            backpatch($8->truelist, $13);           // Go to M3 if expression is true
            backpatch($11->nextlist, $7);           // Go back to M1 after N
            backpatch($15->nextlist, $9);           // Go back to expression after loop_statement
            emit("goto", convertIntToString($9));   // Emit to prevent fall-through
            $$->nextlist = $8->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currSt->parent);
        }
        | FOR F PARENTHESIS_OPEN X change_table expression_statement M expression_statement M expression N PARENTHESIS_CLOSE M CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            $$ = new statement();                   // Create a new statement
            convertIntToBool($8);                   // Convert expression to bool
            backpatch($8->truelist, $13);           // Go to M3 if expression is true
            backpatch($11->nextlist, $7);           // Go back to M1 after N
            backpatch($15->nextlist, $9);           // Go back to expression after loop_statement
            emit("goto", convertIntToString($9));   // Emit to prevent fall-through
            $$->nextlist = $8->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currSt->parent);
        }
        ;

F: %empty
        {   
            /*
            This non-terminal indicates the start of a for loop
            */
            blockName = "FOR";
        }
        ;

W: %empty
        {
            /*
            This non-terminal indicates the start of a while loop
            */
            blockName = "WHILE";
        }
        ;

D: %empty
        {
            /*
            This non-terminal indicates the start of a do-while loop
            */
            blockName = "DO_WHILE";
        }
        ;

X: %empty
        {   
            // Used for creating new nested symbol tables for nested blocks
            string newST = currSt->name + "." + blockName + "$" + to_string(STCount++);  // Generate name for new symbol table
            symbol* sym = currSt->lookup(newST);
            sym->nestedTable = new SymTable(newST);  // Create new symbol table
            sym->name = newST;
            sym->nestedTable->parent = currSt;
            sym->type = new SymType("block");    // The type will be "block"
            currSymbol = sym;    // Change the current symbol pointer
        }
        ;

change_table: %empty
        {   
            // Used for changing the symbol table on encountering functions
            if(currSymbol->nestedTable != NULL) {
                // If the symbol table already exists, switch to that table
                switchTable(currSymbol->nestedTable);
                emit("label", currSt->name);
            }
            else {
                // If the symbol table does not exist already, create it and switch to it
                switchTable(new SymTable(""));
            }
        }
        ;

jump_statement: 
        GOTO IDENTIFIER SEMICOLON
        { }
        | CONTINUE SEMICOLON
        {
            $$ = new statement();
        }
        | BREAK SEMICOLON
        {
            $$ = new statement();
        }
        | RETURN expression SEMICOLON
        {
            $$ = new statement();
            emit("return", $2->loc->name);  // Emit return alongwith return value
        }
        | RETURN SEMICOLON
        {
            $$ = new statement();
            emit("return", "");             // Emit return without any return value
        }
        ;

translation_unit: 
        external_declaration
        { }
        | translation_unit external_declaration
        { }
        ;

external_declaration: 
        function_definition
        { }
        | declaration
        { }
        ;

function_definition: 
        declaration_specifiers declarator declaration_list_opt change_table CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE
        {   
            currSt->parent = globalST;
            STCount = 0;
            switchTable(globalST);          // After reaching end of a function, change cureent symbol table to the global symbol table
        }
        ;

declaration_list_opt: 
        declaration_list
        { }
        | %empty
        { }
        ;

declaration_list: 
        declaration
        { }
        | declaration_list declaration
        { }
        ;

%%

void yyerror(string s) {
    /*
        This function prints any error encountered while parsing
    */
    cout << "Error occurred: " << s << endl;
    cout << "Line no.: " << yylineno << endl;
    cout << "Unable to parse: " << yytext << endl; 
}