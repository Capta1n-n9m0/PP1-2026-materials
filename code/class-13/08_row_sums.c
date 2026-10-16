/*
 * 08_row_sums.c  -  CSCI 1101, class 13
 *
 * What it does: The sum of every row: the sum starts at 0 before the inner
 *   loop and is printed after it. One sum per day.
 *
 * Compile:  gcc -Wall 08_row_sums.c -o row_sums
 * Run:      ./row_sums        (in Windows PowerShell:  .\row_sums)
 *
 * Try:
 *   1. Also print the average of every row, as a double.
 *   2. Add a total of the whole table, printed at the very end.
 *   3. Move int sum = 0; above the outer loop. What goes wrong? Why?
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
    for (int r = 0; r < ROWS; r++) {
        int sum = 0;                       // a fresh sum for every row
        for (int c = 0; c < COLS; c++) {   // walk along row r
            sum += t[r][c];
        }
        printf("row %d: %d\n", r, sum);    // after the row is done
    }
    return 0;
}
