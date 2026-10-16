// expect: error   (this file has a bug on purpose: see below)
/*
 * 23_bug_wrong_args.c  -  CSCI 1101, class 7
 *
 * What it does: THIS PROGRAM DOES NOT COMPILE, on purpose. square gets two
 *   values but takes one; add gets one value but takes two.
 *
 * Compile:  gcc -Wall 23_bug_wrong_args.c -o bug_wrong_args
 * Run:      ./bug_wrong_args        (in Windows PowerShell:  .\bug_wrong_args)
 *
 * Try:
 *   1. Compile it and read both errors.
 *   2. Fix it so it prints 9 and 8.
 */
#include <stdio.h>

int square(int x) {
    return x * x;
}

int add(int a, int b) {
    return a + b;
}

int main(void) {
    printf("%d\n", square(3, 4));
    printf("%d\n", add(5));
    return 0;
}
