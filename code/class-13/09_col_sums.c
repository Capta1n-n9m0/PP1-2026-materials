/*
 * 09_col_sums.c  -  CSCI 1101, class 13
 *
 * What it does: The sum of every column: now the outer loop is the column
 *   and the inner loop goes down the rows. One sum per time of day.
 *
 * Compile:  gcc -Wall 09_col_sums.c -o col_sums
 * Run:      ./col_sums        (in Windows PowerShell:  .\col_sums)
 *
 * Try:
 *   1. Print the largest value of every column instead of the sum.
 *   2. Print the column sums in one line, under the table.
 *   3. Which loop is outside here? Say why.
 */
#include <stdio.h>

#define ROWS 3
#define COLS 4

int main(void) {
    int t[ROWS][COLS] = {
        {3, 5, 8, 4},
        {2, 6, 9, 1},
        {-1, 0, 4, 2}
    };
    for (int c = 0; c < COLS; c++) {       // outer loop: the column
        int sum = 0;
        for (int r = 0; r < ROWS; r++) {   // inner loop: down the rows
            sum += t[r][c];                // still t[r][c]: row first
        }
        printf("column %d: %d\n", c, sum);
    }
    return 0;
}
