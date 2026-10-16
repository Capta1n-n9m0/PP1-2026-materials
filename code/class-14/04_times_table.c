/*
 * 04_times_table.c  -  CSCI 1101, class 14
 *
 * What it does: A function fills the caller's grid with a times table. The
 *   grid is not copied: the function writes straight into main's array, as
 *   with a 1D array in class 10.
 *
 * Compile:  gcc -Wall 04_times_table.c -o times_table
 * Run:      ./times_table        (in Windows PowerShell:  .\times_table)
 *
 * Try:
 *   1. Make the table 5 by 5: change ROWS and COLS.
 *   2. Fill it with r + c instead of (r + 1) * (c + 1).
 *   3. Move the printing loops into a function void print_table(int
 *      g[][COLS], int rows).
 */
#include <stdio.h>

#define ROWS 3
#define COLS 4

void times_table(int g[][COLS], int rows) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < COLS; c++) {
            g[r][c] = (r + 1) * (c + 1);
        }
    }
}

int main(void) {
    int t[ROWS][COLS];
    times_table(t, ROWS);
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            printf("%3d", t[r][c]);
        }
        printf("\n");
    }
    return 0;
}
