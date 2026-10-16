/*
 * 14_task_below_zero.c  -  CSCI 1101, class 13
 *
 * What it does: Solution of the first task: count the boxes of the
 *   temperature table that are below zero, and print where each one is.
 *
 * Compile:  gcc -Wall 14_task_below_zero.c -o task_below_zero
 * Run:      ./task_below_zero        (in Windows PowerShell:  .\task_below_zero)
 *
 * Try:
 *   1. Count the boxes above 5 instead.
 *   2. Print "no frost" when the count is 0.
 *   3. Count the frosty boxes of every row separately.
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
    int count = 0;
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            if (t[r][c] < 0) {
                printf("below zero at (%d,%d)\n", r, c);
                count++;
            }
        }
    }
    printf("%d below zero\n", count);
    return 0;
}
