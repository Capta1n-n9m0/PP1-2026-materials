/*
 * 03_missing_zero.c  -  CSCI 1101, class 13
 *
 * What it does: In an initializer list, every box you do not give a value
 *   becomes 0. So {0} makes the whole table zero. The program prints a 2 by
 *   3 table, row by row.
 *
 * Compile:  gcc -Wall 03_missing_zero.c -o missing_zero
 * Run:      ./missing_zero        (in Windows PowerShell:  .\missing_zero)
 *
 * Try:
 *   1. Change the list to {{7}}. What is printed?
 *   2. Change it to {0}. What is printed?
 *   3. Remove the = {...} part completely and run it a few times. Are the
 *      numbers 0?
 */
#include <stdio.h>

int main(void) {
    int t[2][3] = {
        {1},        // row 0: 1, then 0 and 0
        {4, 5}      // row 1: 4, 5, then 0
    };
    // No loops yet: the next files print a table with two loops.
    printf("%d %d %d\n", t[0][0], t[0][1], t[0][2]);
    printf("%d %d %d\n", t[1][0], t[1][1], t[1][2]);
    return 0;
}
