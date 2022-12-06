#include "myl.h"

#define INT_MAX __INT32_MAX__
#define INT_MIN (-INT_MAX - 1)

int main()
{

    printStr("########## Testing printStr ##########\n");
    char *str[3] = {"My roll number is 20CS30035", "", "Previous string was blank."};
    char *endl = "\n";
    for (int i = 0; i < 3; i++)
    {

        int count = printStr(str[i]);
        printStr(endl);
        printStr("Number of characters in previous string: ");
        printInt(count);
        printStr(endl);
    }
    printStr(endl);

    printStr("########## Testing printInt ##########\n");
    int numbers[10] = {INT_MAX, INT_MIN, 0, -0, 45, -875, 8465, -7, 984654, -987865};
    for (int i = 0; i < 10; i++)
    {
        int count = printInt(numbers[i]);
        printStr(endl);
        printStr("Number of characters printed: ");
        printInt(count);
        printStr(endl);
    }
    printStr(endl);

    printStr("########## Testing readInt ##########\n");
    int ntemp;
    int flag = 0;
    do
    {
        printStr("Enter an integer: ");
        int count = readInt(&ntemp);
        if (count == ERR)
            printStr("Invalid input.");
        else
        {
            printStr("Successfuly read the following integer: ");
            printInt(ntemp);
        }
        printStr("\nTo test readInt again enter 1 otherwise 0: ");
        readInt(&flag);
    } while (flag != 0);
    printStr(endl);

    printStr("########## Testing printFlt ##########\n");
    // float floating[6] = {0.F, -0.F, 1.2568F, -654.8463F, 1e4, 10.14e-2};
    float floating[10] = {0.F, -12.34F, 12.345F, -2.F, 2.F, 0.1234F, -0.1234F, 123.456F, 0.001F, -0.0106F};
    for (int i = 0; i < 10; i++)
    {
        int count = printFlt(floating[i]);
        printStr(endl);
        printStr("Number of characters printed: ");
        printInt(count);
        printStr(endl);
    }
    printStr(endl);

    printStr("########## Testing readFlt ##########\n");
    float ftemp;
    flag = 0;
    do
    {
        printStr("Enter a float: ");
        int count = readFlt(&ftemp);
        if (count == ERR)
            printStr("Invalid input.");
        else
        {
            printStr("Successfuly read the following float: ");
            printFlt(ftemp);
        }
        printStr("\nTo test readFlt again reading enter 1 otherwise 0: ");
        readInt(&flag);
    } while (flag != 0);
    printStr(endl);

    return 0;
}
