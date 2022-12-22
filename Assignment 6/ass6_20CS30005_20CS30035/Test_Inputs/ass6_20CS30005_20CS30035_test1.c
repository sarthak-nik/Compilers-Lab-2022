int printStr (char *ch);
int printInt (int n);
int readInt (int *eP);

char c; 
int i, j, k, l, m, n, o;
// Pointer declaration
int a = 4, *p, b;                           

int main() {
    int do_iterator = 1;
    do {                                    
        // Testing do while loop
        printStr("Iteration number: ");
        // Incrementor in printStr
        printInt(do_iterator++);            
        printStr("\n");
    } while (do_iterator < 10);

    // Scope management 
    { 
        int w = 10;
        printStr("\nScope A: ");
        printInt(w);
        { 
            int w = 2;
            printStr("\nScope B: ");
            printInt(w);
            { 
                int w = 3;
                if (w == 3) {
                    printStr("\nEntered in the inner most block among the nested blocks.");
                }
                printStr("\nScope C: ");
                printInt(w);
                printStr("\n");
            }
        }
    }
    return 0;
}