/*
 * 07_fill.c  -  CSCI 1101, class 13
 *
 * What it does: Fills a table with a loop instead of a list: box [r][c]
 *   gets (r + 1) * (c + 1). The result is a small multiplication table.
 *
 * Compile:  gcc -Wall 07_fill.c -o fill
 * Run:      ./fill        (in Windows PowerShell:  .\fill)
 *
 * Try:
 *   1. Make it 9 by 9: change ROWS and COLS only.
 *   2. Fill every box with r + c instead. What pattern do you see?
 *   3. Fill every box with 0, then put 1 in box [1][2] only, and print.
 */
#include <stdio.h>

#define ROWS 4
#define COLS 5

int main(void) {
    int m[ROWS][COLS];                     // no list: the boxes hold garbage
    for (int r = 0; r < ROWS; r++) {       // first two loops: fill
        for (int c = 0; c < COLS; c++) {
            m[r][c] = (r + 1) * (c + 1);
        }
    }
    for (int r = 0; r < ROWS; r++) {       // next two loops: print
        for (int c = 0; c < COLS; c++) {
            printf("%4d", m[r][c]);
        }
        printf("\n");
    }
    return 0;
}
