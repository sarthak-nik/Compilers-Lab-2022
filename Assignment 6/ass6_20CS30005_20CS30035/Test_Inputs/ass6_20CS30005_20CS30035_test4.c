int printStr (char *ch);
int printInt (int n);
int readInt (int *eP);

// Global declarations
float d = 2.3;
char c; 
int i, j, k, l, m;
int w[10];                    
int a = 4, *p, b;            

int main () {
    int x;                   
    int y;
    int flag;
    printStr("Enter x: ");
    x = readInt(&flag);
    printStr("Enter y: ");
    y = readInt(&flag);
    char ch = 'c';              

    i = x + y;                  
    // Addition  
    printStr("x + y = ");
    printInt(i);
    printStr("\n");

    j = x - y;                  
    // Subtraction
    printStr("x - y = ");
    printInt(j);
    printStr("\n");

    k = x * y;                  
    // Multiplication
    printStr("x * y = ");
    printInt(k);
    printStr("\n");

    l = x / y;                  
    // Division
    printStr("x / y = ");
    printInt(l);
    printStr("\n");

    m = x % y;                  
    // Modulo
    printStr("x % y = ");
    printInt(m);
    printStr("\n");

    return 0;
}