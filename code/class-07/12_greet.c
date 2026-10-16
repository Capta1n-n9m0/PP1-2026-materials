/*
 * 12_greet.c  -  CSCI 1101, class 7
 *
 * What it does: A function with no parameters and no result: void
 *   greet(void). It prints the same two lines every time it is called.
 *
 * Compile:  gcc -Wall 12_greet.c -o greet
 * Run:      ./greet        (in Windows PowerShell:  .\greet)
 *
 * Try:
 *   1. Call greet three times.
 *   2. Write greet; without the brackets. Compile with -Wall. What does gcc
 *      say, and what is printed?
 */
#include <stdio.h>

void greet(void) {
    printf("Hello!\n");
    printf("Welcome to CSCI 1101.\n");
}

int main(void) {
    greet();
    greet();
    return 0;
}
