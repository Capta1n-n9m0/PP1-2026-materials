/*
 * 13_char_grid.c  -  CSCI 1101, class 13
 *
 * What it does: A table of char: a small board of 3 rows and 5 columns.
 *   Every box gets a dot, one box gets a star, and the board is printed
 *   with %c.
 *
 * Compile:  gcc -Wall 13_char_grid.c -o char_grid
 * Run:      ./char_grid        (in Windows PowerShell:  .\char_grid)
 *
 * Try:
 *   1. Put a star in all four corners.
 *   2. Fill the middle row with # instead of dots.
 *   3. Read a row and a column with scanf and put the star there.
 */
#include <stdio.h>

#define ROWS 3
#define COLS 5

int main(void) {
    char g[ROWS][COLS];                    // a board of characters
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            g[r][c] = '.';                 // every box: a dot
        }
    }
    g[1][3] = '*';                         // row 1, column 3: a star
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            printf("%c ", g[r][c]);        // %c: one character
        }
        printf("\n");
    }
    return 0;
}
