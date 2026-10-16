/*
 * 08_index_and_value.c  -  CSCI 1101, class 9
 *
 * What it does: Prints every position of an array next to the value in it:
 *   the index on the left, the value on the right.
 *
 * Compile:  gcc -Wall 08_index_and_value.c -o index_and_value
 * Run:      ./index_and_value        (in Windows PowerShell:  .\index_and_value)
 *
 * Try:
 *   1. Print the positions from 1 instead of 0: print i + 1, not i. Did the
 *      values change?
 *   2. Change the loop to i <= 4. Same output? Why?
 */
#include <stdio.h>

int main(void) {
    int a[5] = {12, 7, 30, 5, 18};

    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
