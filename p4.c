/*
 * Topic - Arithmetic Operators
 * Filename: p4.c
 * Created Date: Thursday, January 15th 2026, 11:45:25 am
 * Author: Aiman Kazi
 *
 * Copyright (c) 2026 Visual Labs
 */

// There are 5 types of arithmetic operators in C:
// 1. Addition (+)
// 2. Subtraction (-)
// 3. Multiplication (*)
// 4. Division (/)
// 5. Modulus (%)

#include <stdio.h>
int main()
{
    int a = 15, b = 4;
    int sum, difference, product, quotient, remainder;

    // Addition
    sum = a + b;
    printf("Sum: %d + %d = %d\n", a, b, sum);

    // Subtraction
    difference = a - b;
    printf("Difference: %d - %d = %d\n", a, b, difference);

    // Multiplication
    product = a * b;
    printf("Product: %d * %d = %d\n", a, b, product);

    // Division
    quotient = a / b;
    printf("Quotient: %d / %d = %d\n", a, b, quotient);

    // Modulus
    remainder = a % b;
    printf("Remainder: %d %% %d = %d\n", a, b, remainder);

    return 0;
}