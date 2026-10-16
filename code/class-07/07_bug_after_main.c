// expect: error   (this file has a bug on purpose: see below)
/*
 * 07_bug_after_main.c  -  CSCI 1101, class 7
 *
 * What it does: THIS PROGRAM DOES NOT COMPILE, on purpose. The function
 *   square is written BELOW main. When gcc reads main, it has not seen
 *   square yet.
 *
 * Compile:  gcc -Wall 07_bug_after_main.c -o bug_after_main
 * Run:      ./bug_after_main        (in Windows PowerShell:  .\bug_after_main)
 *
 * Try:
 *   1. Compile it and read the error.
 *   2. Fix 1: move the whole square function above main.
 *   3. Fix 2: put it back below main, and add the prototype int square(int
 *      x); above main.
 */
#include <stdio.h>

int main(void) {
    int y = square(5);
    printf("%d\n", y);
    return 0;
}

int square(int x) {
    return x * x;
}
