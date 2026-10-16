// expect: error   (this file has a bug on purpose: see below)
/*
 * 14_bug_void_value.c  -  CSCI 1101, class 7
 *
 * What it does: THIS PROGRAM DOES NOT COMPILE, on purpose. It tries to add
 *   the results of a void function. A void function gives nothing back, so
 *   there is nothing to add.
 *
 * Compile:  gcc -Wall 14_bug_void_value.c -o bug_void_value
 * Run:      ./bug_void_value        (in Windows PowerShell:  .\bug_void_value)
 *
 * Try:
 *   1. Compile it and read the error.
 *   2. Fix it: use square (which returns) instead of square_print.
 */
#include <stdio.h>

void square_print(int x) {
    printf("%d\n", x * x);
}

int main(void) {
    int total = square_print(3) + square_print(4);
    printf("total = %d\n", total);
    return 0;
}
