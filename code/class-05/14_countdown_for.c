/*
 * 14_countdown_for.c  -  CSCI 1101, class 5
 *
 * What it does: Counts down from 5 to 1 with a for loop. All three parts
 *   change: start at the big number, check with >=, update with --.
 *
 * Compile:  gcc -Wall 14_countdown_for.c -o countdown_for
 * Run:      ./countdown_for        (in Windows PowerShell:  .\countdown_for)
 *
 * Try:
 *   1. Count down from 10 to 1.
 *   2. Count down from 5 to 0.
 *   3. Count down from 20 to 10.
 */
#include <stdio.h>

int main(void) {
    for (int i = 5; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
