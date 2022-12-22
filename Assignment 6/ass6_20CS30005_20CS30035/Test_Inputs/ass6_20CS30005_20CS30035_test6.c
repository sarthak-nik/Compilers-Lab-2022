int printStr (char *ch);
int printInt (int n);
int readInt (int *eP);

int global_var = 0;                        

int binarySearch (int a[], int l, int r, int x) {   
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) {                                                           
            return mid;                     
        } else if (a[mid] < x) {            
            l = mid + 1;
        } else {   
            r = mid - 1;
        }
    }
    return -1;     
}                     

int main() {
    global_var++;

    int a[10];                         
    int i, n, c;                          

    // Testing read numbers
    printStr("Enter 10 array elements in sorted order, separated by newlines:\n");
    for (i = 0; i < 10; i++) {
        a[i] = readInt(&c);                 
    }

    // Testing print numbers
    printStr("Given array : ");
    for (i = 0; i < 10; i++) {              
        printInt(a[i]);                     
        printStr(" ");                          
    }
    printStr("\n");

    int x;
    printStr("Number to search: ");
    x = readInt(&c);
    int index = binarySearch(a, 0, 9, x);
    if (index == -1) {
        printStr("Element not found");
    } else { 
        printStr("Element found\n");
        printStr("Location: ");
        printInt(index);
    }
    printStr("\n");
    return 0;
}