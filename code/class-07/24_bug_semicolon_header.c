// expect: error   (this file has a bug on purpose: see below)
/*
 * 24_bug_semicolon_header.c  -  CSCI 1101, class 7
 *
 * What it does: THIS PROGRAM DOES NOT COMPILE, on purpose. There is a
 *   semicolon at the end of the first line of the function, before the {.
 *
 * Compile:  gcc -Wall 24_bug_semicolon_header.c -o bug_semicolon_header
 * Run:      ./bug_semicolon_header        (in Windows PowerShell:  .\bug_semicolon_header)
 *
 * Try:
 *   1. Compile it and read the error. Which line does it point at?
 *   2. Fix it: remove the semicolon.
 */
#include <stdio.h>

int square(int x);
{
    return x * x;
}

int main(void) {
    printf("%d\n", square(5));
    return 0;
}
