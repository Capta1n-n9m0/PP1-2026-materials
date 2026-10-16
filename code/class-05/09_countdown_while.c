/*
 * 09_countdown_while.c  -  CSCI 1101, class 5
 *
 * What it does: Counts DOWN from 5 to 1 with a while loop, then prints
 *   Liftoff!
 *
 * Compile:  gcc -Wall 09_countdown_while.c -o countdown_while
 * Run:      ./countdown_while        (in Windows PowerShell:  .\countdown_while)
 *
 * Try:
 *   1. Start at 10 instead of 5.
 *   2. Change > 0 to >= 0. What is the last number now?
 *   3. Change n-- to n++. What happens? (Ctrl+C stops it.)
 */
#include <stdio.h>

int main(void) {
    int n = 5;

    while (n > 0) {
        printf("%d\n", n);
        n--;
    }

    printf("Liftoff!\n");
    return 0;
}
