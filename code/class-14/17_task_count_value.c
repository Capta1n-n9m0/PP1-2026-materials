/*
 * 17_task_count_value.c  -  CSCI 1101, class 14
 *
 * What it does: Solution of the task: count_value(g, rows, v) counts the
 *   cells of a grid that are equal to v. For the grid in main it prints 3
 *   and 0.
 *
 * Compile:  gcc -Wall 17_task_count_value.c -o task_count_value
 * Run:      ./task_count_value        (in Windows PowerShell:  .\task_count_value)
 *
 * Try:
 *   1. Count the cells that are greater than v instead.
 *   2. Count only in row 1.
 *   3. Return the number of rows that contain v at least once.
 */
#include <stdio.h>

#define COLS 4

int count_value(int g[][COLS], int rows, int v) {
    int count = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < COLS; c++) {
            if (g[r][c] == v) {
                count++;
            }
        }
    }
    return count;
}

int main(void) {
    int a[3][COLS] = {{2, 7, 2, 0},
                      {5, 2, 9, 1},
                      {3, 4, 6, 8}};
    printf("%d\n", count_value(a, 3, 2));
    printf("%d\n", count_value(a, 3, 10));
    return 0;
}
