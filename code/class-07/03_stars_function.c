/*
 * 03_stars_function.c  -  CSCI 1101, class 7
 *
 * What it does: The same three rows of stars, WITH a function. The loop is
 *   written once, inside print_stars, and main calls it three times.
 *
 * Compile:  gcc -Wall 03_stars_function.c -o stars_function
 * Run:      ./stars_function        (in Windows PowerShell:  .\stars_function)
 *
 * Try:
 *   1. Add a fourth row: one more line, print_stars(9);
 *   2. Change * to # inside print_stars. One change, and every row changes.
 *   3. Call print_stars(0). What is printed? Why?
 */
#include <stdio.h>

// A function that prints a row of n stars.
// void means: it gives nothing back. It only prints.
void print_stars(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main(void) {
    print_stars(3);   // n is 3 this time
    print_stars(5);   // n is 5 this time
    print_stars(7);   // n is 7 this time
    return 0;
}
