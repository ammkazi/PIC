/*
 * Topic - Understanding Data Types
 * Filename: p2.c
 * Created Date: Thursday, January 15th 2026, 11:25:05 am
 * Author: Aiman Kazi
 * Copyright (c) 2026 Visual Labs
 */

#include <stdio.h>

int main()
{
    char ch = 'A';
    int num = 10;
    float pi = 3.14;
    double d = 10110.123435;

    printf("The value of ch is %c\n", ch);
    printf("The value of num is %d\n", num);
    printf("The value of pi is %.2f\n", pi);
    printf("The value of d is %.5lf\n", d);
}

/*
1. char - data type to store single characters
2. int - data type to store integer values
3. float - data type to store decimal values with single precision
4. double - data type to store decimal values with double precision
5. %c - format specifier to print char values
6. %d - format specifier to print int values
7. %.2f - format specifier to print float values up to 2 decimal places
8. %.5lf - format specifier to print double values up to 5 decimal places
9. We declare variables of different data types and initialize them with values
10. We use printf() function to print the values of the variables
*/