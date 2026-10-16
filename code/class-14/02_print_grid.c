/*
 * 02_print_grid.c  -  CSCI 1101, class 14
 *
 * What it does: One function prints any grid that has 4 columns. main calls
 *   it for a grid of 3 rows and for a grid of 2 rows. The number of rows is
 *   a parameter; the number of columns is written in the brackets.
 *
 * Compile:  gcc -Wall 02_print_grid.c -o print_grid
 * Run:      ./print_grid        (in Windows PowerShell:  .\print_grid)
 *
 * Try:
 *   1. Add a third grid with 1 row and print it with the same function.
 *   2. Change "%3d" to "%5d". What changes on the screen?
 *   3. Change COLS to 5. Which lines must change too? Fix them and run it.
 */
#include <stdio.h>

#define COLS 4

// g[][COLS]: the rows can be left empty, the columns must be written.
// rows: how many rows this grid has. It comes in as a parameter.
void print_grid(int g[][COLS], int rows) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < COLS; c++) {
            printf("%3d", g[r][c]);   // %3d: every number takes 3 places
        }
        printf("\n");                 // the row is done
    }
}

int main(void) {
    int a[3][COLS] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12}};
    int b[2][COLS] = {{0, 0, 0, 0},
                      {1, 1, 1, 1}};
    print_grid(a, 3);    // the name of the grid, and its number of rows
    printf("\n");
    print_grid(b, 2);    // the same function, a different grid
    return 0;
}
