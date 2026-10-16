/*
 * 15_task_row_max.c  -  CSCI 1101, class 13
 *
 * What it does: Solution of the second task: the largest value of every
 *   row. The largest starts at the first box of the row, as in class 10.
 *
 * Compile:  gcc -Wall 15_task_row_max.c -o task_row_max
 * Run:      ./task_row_max        (in Windows PowerShell:  .\task_row_max)
 *
 * Try:
 *   1. Print the column where the largest value is, too.
 *   2. Print the smallest value of every row.
 *   3. Find the largest value of the whole table.
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
        int max = t[r][0];
        for (int c = 1; c < COLS; c++) {
            if (t[r][c] > max) {
                max = t[r][c];
            }
        }
        printf("row %d: max %d\n", r, max);
    }
    return 0;
}
