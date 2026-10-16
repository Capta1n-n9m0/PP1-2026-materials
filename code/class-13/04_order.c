/*
 * 04_order.c  -  CSCI 1101, class 13
 *
 * What it does: Two loops, one inside the other. The outer loop picks a
 *   row, the inner loop walks along its columns. The program prints the row
 *   and column of every box, in the order the loops visit them.
 *
 * Compile:  gcc -Wall 04_order.c -o order
 * Run:      ./order        (in Windows PowerShell:  .\order)
 *
 * Try:
 *   1. Change r < 3 to r < 2. How many lines now?
 *   2. Swap the two for lines (c outside, r inside). What changes in the
 *      order?
 *   3. Count the boxes: add a counter and print it at the end.
 */
#include <stdio.h>

int main(void) {
    for (int r = 0; r < 3; r++) {          // outer loop: the row
        for (int c = 0; c < 4; c++) {      // inner loop: every column of that row
            printf("(%d,%d) ", r, c);
        }
        printf("\n");                      // after a whole row: a new line
    }
    return 0;
}
