/*
 * Topic - Unary Operators
 * Filename: p3.c
 * Created Date: Thursday, January 15th 2026, 11:40:15 am
 * Author: Aiman Kazi
 * Copyright (c) 2026 Visual Labs
 */
#include <stdio.h>

int main()
{
    int num = 10;
    int x, y;
    printf("Original value of num: %d\n", num);

    // Using unary plus operator
    num++;
    printf("After unary plus (num++): %d\n", num);
    // Using unary minus operator
    num--;
    printf("After unary minus (num--): %d\n", num);

    x = ++num; // Pre-increment
    printf("After pre-increment (++num), num: %d, x: %d\n", num, x);

    y = num++; // Post-increment
    printf("After post-increment (num++), num: %d, y: %d\n", num, y);
}

/* OUTPUT:

Original value of num: 10
After unary plus (num++): 11
After unary minus (num--): 10
After pre-increment (++num), num: 11, x: 11
After post-increment (num++), num: 12, y: 11

*/