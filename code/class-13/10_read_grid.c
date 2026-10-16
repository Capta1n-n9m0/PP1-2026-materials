/*
 * 10_read_grid.c  -  CSCI 1101, class 13
 *
 * What it does: Reads a table of 2 rows and 3 columns from the keyboard
 *   with scanf, row by row, then prints it. scanf needs the & in front of
 *   t[r][c], as for any int.
 *
 * Compile:  gcc -Wall 10_read_grid.c -o read_grid
 * Run:      ./read_grid        (in Windows PowerShell:  .\read_grid)
 *
 * Try:
 *   1. Type all six numbers on one line. Does it still work?
 *   2. Ask for the numbers of one row at a time: print "Row 0: " first.
 *   3. Make it 3 by 3 and print the sum of all nine numbers.
 */
#include <stdio.h>

#define ROWS 2
#define COLS 3

int main(void) {
    int t[ROWS][COLS];
    printf("Type %d numbers:\n", ROWS * COLS);
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            scanf("%d", &t[r][c]);         // & as for any int; row 0 first
        }
    }
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            printf("%4d", t[r][c]);
        }
        printf("\n");
    }
    return 0;
}
