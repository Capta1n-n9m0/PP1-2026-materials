/*
 * 05_total.c  -  CSCI 1101, class 14
 *
 * What it does: A function adds every cell of a grid and returns the total.
 *   main prints the total of a 2 by 3 grid: 21.
 *
 * Compile:  gcc -Wall 05_total.c -o total
 * Run:      ./total        (in Windows PowerShell:  .\total)
 *
 * Try:
 *   1. Change one number in the grid and say the new total before you run
 *      it.
 *   2. Write int row_total(int g[][COLS], int r) that adds only row r.
 *   3. Write a function that returns the largest cell of the grid.
 */
#include <stdio.h>

#define COLS 3

int total(int g[][COLS], int rows) {
    int sum = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < COLS; c++) {
            sum += g[r][c];
        }
    }
    return sum;
}

int main(void) {
    int a[2][COLS] = {{1, 2, 3},
                      {4, 5, 6}};
    printf("total: %d\n", total(a, 2));
    return 0;
}
