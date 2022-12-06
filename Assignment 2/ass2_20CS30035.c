// Name : Sarthak Nikumbh
// Roll Number: 20CS30035
// Assignment 2

#include "myl.h"
#include <stdio.h>
#define BUFFER 100

// Function to print string of characters terminated by '\0'
// returns the number of characters printed
int printStr(char *str)
{
    int length = 0;
    // finding the length of the given string
    while (str[length] != '\0')
    {
        length++;
    }

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(str), "d"(length));

    return length;
}

// Function to read a signed integer
// Returns OK on success and ERR on failure
int readInt(int *n)
{
    // storing the max and min bounds in constants
    const int MAX_INT = __INT32_MAX__;
    const int MIN_INT = -MAX_INT - 1;

    int length;
    int ind = 0, isPositive = 1, num;
    long int value = 0;
    char buffer[BUFFER];

    __asm__ __volatile__(
        "movl $0, %%eax \n\t"
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        : "=a"(length)
        : "S"(buffer), "d"(BUFFER));

    // returning error in length is invalid
    if (length <= 0)
        return ERR;
    // checking if the first character is valid
    else if ((buffer[ind] < '0' || buffer[ind] > '9') && (buffer[ind] != '-') && (buffer[ind] != '+'))
        return ERR;

    if (buffer[ind] == '+')
    {
        ind++;
        // checking if the next character is valid
        if (buffer[ind] < '0' || buffer[ind] > '9' || ind == length)
            return ERR;
    }
    else if (buffer[ind] == '-')
    {
        isPositive = 0;
        ind++;
        // checking if the next character is valid
        if (buffer[ind] < '0' || buffer[ind] > '9' || ind == length)
            return ERR;
    }
    // reading until we read a space,tab or newline
    while (ind < length && buffer[ind] != ' ' && buffer[ind] != '\t' && buffer[ind] != '\n')
    {
        // if we read a invalid character then return error
        if (buffer[ind] < '0' || buffer[ind] > '9')
            return ERR;
        // storing digit and calculating the value of int
        num = buffer[ind] - '0';
        value *= 10;
        value += num;
        // checking if the given integer causes a overflow
        if ((isPositive == 1 && value > MAX_INT) || (isPositive == 0 && value * -1 < MIN_INT))
            return ERR;
        ind++;
    }
    // if number is negative then multiply by -1
    if (isPositive == 0)
        value *= -1;
    *n = (int)value;
    return OK;
}

// Function to print a signed integer
// returns number of characters printed, if failed returns ERR
int printInt(int n)
{
    // store n in temporary variable
    long int temp = n;
    int length = 0;
    char buffer[BUFFER];
    // if temp is negative then store the minus sign in buffer
    if (temp < 0)
    {
        buffer[length++] = '-';
        temp *= -1;
    }
    // if number is 0 then store 0 in buffer
    if (temp == 0)
    {
        buffer[length++] = '0';
    }
    else
    {
        // store number in the buffer
        while (temp > 0)
        {
            buffer[length++] = (char)('0' + temp % 10);
            temp /= 10;
        }
    }
    int end = length - 1;
    int start;
    if (buffer[0] == '-')
    {
        start = 1;
    }
    else
        start = 0;
    // reverse the stored number
    while (start < end)
    {
        char t = buffer[start];
        buffer[start] = buffer[end];
        buffer[end] = t;
        start++;
        end--;
    }

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(buffer), "d"(length));
    return length;
}

// Function to read floating point number
// returns OK on success and ERR on failure
int readFlt(float *f)
{
    char buffer[BUFFER];
    int length, ind = 0;
    float value = 0, div = 1, expValue = 1;
    int isPositive = 1, isExp = 0, isDecimal = 0, isExpPos = 1, exp = 0;

    __asm__ __volatile__(
        "movl $0, %%eax \n\t"
        "movq $0, %%rdi \n\t"
        "syscall \n\t"
        : "=a"(length)
        : "S"(buffer), "d"(BUFFER));
    // check if input has valid length
    if (length <= 0)
        return ERR;
    // check if first character of string is valid
    if ((buffer[ind] < '0' || buffer[ind] > '9') && (buffer[ind] != '+') && (buffer[ind] != '-') && (buffer[ind] != '.'))
        return ERR;

    // check if float entered is positive or negative and add sign accordingly
    if (buffer[ind] == '+' || buffer[ind] == '-')
    {
        if (buffer[ind] == '-')
            isPositive = -1;
        ind++;
        // check if next character is valid
        if (buffer[ind] != '.' && (buffer[ind] < '0' || buffer[ind] > '9'))
            return ERR;
    }
    // read characters until we encounter newline,tab or space
    while (buffer[ind] != '\n' && buffer[ind] != '\t' && buffer[ind] != ' ')
    {
        // if exponent is present then mark the flag and break
        if (buffer[ind] == 'E' || buffer[ind] == 'e')
        {
            isExp = 1;
            break;
        }
        // if decimal point is present then mark the flag and break
        else if (buffer[ind] == '.')
        {
            if (!isDecimal)
                isDecimal = 1;
            else
                return ERR;
        }
        // store the value of float number
        else if (buffer[ind] >= '0' && buffer[ind] <= '9')
        {
            int num = buffer[ind] - '0';

            if (isDecimal)
            {
                div *= (float)10.0;
                value += num / div;
            }

            else
                value = value * 10.0 + (float)num;
        }
        // return error if invalid character
        else
            return ERR;
        ind++;
    }

    value *= isPositive;

    if (isExp)
    {
        ind++;
        // check if the characters are valid after e or E
        if ((buffer[ind] != '+') && (buffer[ind] != '-') && (buffer[ind] < '0' || buffer[ind] > '9'))
            return ERR;
        // check sign of exponent
        if (buffer[ind] == '-' || buffer[ind] == '+')
        {
            if (buffer[ind] == '-')
                isExpPos = -1;
            ind++;
            // check if next character is valid
            if (buffer[ind] < '0' || buffer[ind] > '9')
                return ERR;
        }
        // read until we encounter space,newline or tab
        while (buffer[ind] != ' ' && buffer[ind] != '\n' && buffer[ind] != '\t')
        {
            // check if character is valid
            if (buffer[ind] < '0' || buffer[ind] > '9')
                return ERR;
            else
            {
                int num = buffer[ind] - '0';
                exp = exp * 10 + num;
            }
            ind++;
        }
        // calculating exponent value
        for (int j = 0; j < exp; j++)
            expValue *= 10.0;
        // check if exponent is positive
        if (isExpPos > 0)
            value *= expValue;
        else
            value /= expValue;
    }

    *f = value;

    return OK;
}

// prints the floating point number
// returns OK on success and ERR on failure
int printFlt(float f)
{

    int length = 0, integer_part, fraction;
    char buffer[BUFFER];

    float temp = f;
    // if float is negative add minus sign in buffer and increment the index
    if (temp < 0)
    {
        buffer[length++] = '-';
        temp *= -1;
    }
    // store the integer part of the float
    integer_part = (int)temp;
    temp -= integer_part;

    // store the integer part in the buffer
    while (integer_part > 0)
    {
        buffer[length++] = (char)('0' + integer_part % 10);
        integer_part /= 10;
    }
    // if integer part length is 0 then add 0 to buffer
    if (length == 0)
        buffer[length++] = '0';
    else if (length > 0 && buffer[length - 1] == '-')
        buffer[length++] = '0';

    int end = length - 1;
    int start;
    if (buffer[0] == '-')
        start = 1;
    else
        start = 0;

    // the number is stored in reverse, so we reverse the number in buffer
    while (start < end)
    {
        char t = buffer[end];
        buffer[end] = buffer[start];
        buffer[start] = t;
        start++;
        end--;
    }
    // add decimal point in the buffer
    buffer[length++] = '.';
    // take 6 digits after decimal point
    for (int i = 0; i < 6; i++)
    {
        temp *= 10;
    }
    // store the fractional part
    fraction = (int)temp;
    start = length;
    for (int i = 0; i < 6; i++)
    {
        buffer[length++] = (char)('0' + fraction % 10);
        fraction /= 10;
    }

    end = length - 1;
    // reverse the fractional part
    while (start < end)
    {
        char t = buffer[end];
        buffer[end] = buffer[start];
        buffer[start] = t;
        start++;
        end--;
    }
    // remove the extra zeroes from the floating number
    int count = 0;
    while (buffer[length - 1] == '0' && count < 5)
    {
        length--;
        count++;
    }

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(buffer), "d"(length));

    return length;
}