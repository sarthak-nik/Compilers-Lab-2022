int printStr (char *ch);
int printInt (int n);
int readInt (int *eP);

int global_var = 0;                         
int counter = 0;

int fibonacci (int n);                           

int main () {
    counter++;
    global_var = counter;
    int n, flag;
    printStr("Enter n (n < 20): ");
    n = readInt(&flag);
    int i;
    int fib[100];

    // for loop to print the fibonacci series.
    for (i = 0; i < n; i++) {
        fib[i] = fibonacci(i+1);
        counter++;
        global_var = counter;
    }
    for (i = 0; i < n; i++) {
        printStr("fib[");
        printInt(i + 1);
        printStr("] = ");
        printInt(fib[i]);
        printStr("\n");
    }
    return 0;
}

int fibonacci (int n) {
    counter++;
    global_var = counter;

    if (n == 0) {
        return 0;
    }
    else if (n == 1 || n == 2) {
        return 1;
    }
 
    // Testing recursive function
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}