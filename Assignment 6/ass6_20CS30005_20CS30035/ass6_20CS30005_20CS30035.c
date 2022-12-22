#include "myl.h"
#define BUFF_SIZE 100

// Function to print a string (character array), and return the number of characters printed
int printStr(char *str)
{
    int len = 0;
    while(str[len] != '\0')     
        len++;

    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str), "d"(len)
    );
    return len;
}


// Function to read an integer from STDIN
int readInt(int *eP)
{
    const long int MAX_INT_POSITIVE = 2147483647;
    const long int MAX_INT_NEGATIVE = 2147483648;

    char buff[BUFF_SIZE];
    int len, i = 0, isNegative = 0;
    long int num = 0;
    int n;

    __asm__ __volatile__ (
        "movl $0, %%eax \n\t"
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        :"=a"(len)
        :"S"(buff), "d"(BUFF_SIZE)
    );

    if(len <= 0) {
        *eP = ERR;
        return 0;
    }
    if((buff[0] != '+') && (buff[0] != '-') && (buff[0] < '0' || buff[0] > '9')) {    
        *eP = ERR;
        return 0;
    }

    if(buff[0] == '-' || buff[0] == '+') {    
        if(buff[0] == '-')
            isNegative = 1;
        i++;
        if(buff[i] < '0' || buff[i] > '9') {
            *eP = ERR;
            return 0;
        }
    }

    while(buff[i] != ' ' && buff[i] != '\n' && buff[i] != '\t') {
        if(buff[i] < '0' || buff[i] > '9') {    
            *eP = ERR;
            return 0;
        }
        int digit = buff[i] - '0';

        if(!isNegative && 1L * num * 10 + digit > MAX_INT_POSITIVE) {
            *eP = ERR;
            return 0;
        }
        else if(isNegative && 1L * num * 10 + digit > MAX_INT_NEGATIVE) {
            *eP = ERR;
            return 0;
        }
        
        num = num * 10 + digit;
        i++;
    }

    if(isNegative)      
        num *= -1;
    n = (int)num;
    *eP = OK;
    return n;
}


// Function to print an integer, and return the number of characters printed
int printInt(int n)
{   
    char buff[BUFF_SIZE];
    int i = 0, j, k;
    int sign = (n < 0 ? -1 : 1);
    if(n == 0)
        buff[i++] = '0';        
    else {
        if(n < 0)
            buff[i++] = '-';

        while(n) {
            buff[i++] = '0' + ((n % 10) * sign);
            n /= 10;
        }

        j = (buff[0] == '-' ? 1 : 0);
        k = i - 1;
        for(; j < k; j++, k--) {
            char temp = buff[j];
            buff[j] = buff[k];
            buff[k] = temp;
        }
    }
    int size = i;

    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(buff), "d"(size)
    );
    return size;
}