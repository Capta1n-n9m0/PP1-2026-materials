/*
 * 02_stars_copy.c  -  CSCI 1101, class 7
 *
 * What it does: Prints three rows of stars, 3, 5 and 7 long, WITHOUT a
 *   function. The same loop is copied three times.
 *
 * Compile:  gcc -Wall 02_stars_copy.c -o stars_copy
 * Run:      ./stars_copy        (in Windows PowerShell:  .\stars_copy)
 *
 * Try:
 *   1. Add a fourth row of 9 stars. How many lines did you copy?
 *   2. Now change every row to use # instead of *. How many places did you
 *      change?
 */
#include <stdio.h>

int main(void) {
    for (int i = 0; i < 3; i++) {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < 7; i++) {
        printf("*");
    }
    printf("\n");
    return 0;
}
