/*
 * 05_print_grid.c  -  CSCI 1101, class 13
 *
 * What it does: Prints the whole temperature table with two loops: t[r][c]
 *   for every row r and every column c. %4d gives every number 4 places, so
 *   the columns line up.
 *
 * Compile:  gcc -Wall 05_print_grid.c -o print_grid
 * Run:      ./print_grid        (in Windows PowerShell:  .\print_grid)
 *
 * Try:
 *   1. Change %4d to %d. What happens to the columns?
 *   2. Print only row 1, with one loop.
 *   3. Print the table upside down: the last row first.
 */
#include <stdio.h>

int main(void) {
    int t[3][4] = {
        {3, 5, 8, 4},
        {2, 6, 9, 1},
        {-1, 0, 4, 2}
    };
    for (int r = 0; r < 3; r++) {          // row 0, 1, 2
        for (int c = 0; c < 4; c++) {      // column 0, 1, 2, 3
            printf("%4d", t[r][c]);        // %4d: 4 places, numbers line up
        }
        printf("\n");                      // end of the row
    }
    return 0;
}
