/*
 * 06_define_labels.c  -  CSCI 1101, class 13
 *
 * What it does: The same table with #define ROWS and COLS, so the sizes are
 *   written once. It prints a line of column numbers on top and the row
 *   number in front of every row, like a board in a game.
 *
 * Compile:  gcc -Wall 06_define_labels.c -o define_labels
 * Run:      ./define_labels        (in Windows PowerShell:  .\define_labels)
 *
 * Try:
 *   1. Change COLS to 5 and add a fifth number to every row.
 *   2. Print the row labels on the right side instead of the left.
 *   3. Print a line of dashes under the column numbers.
 */
#include <stdio.h>

#define ROWS 3       // the sizes, written once
#define COLS 4

int main(void) {
    int t[ROWS][COLS] = {
        {3, 5, 8, 4},
        {2, 6, 9, 1},
        {-1, 0, 4, 2}
    };
    printf("    ");                        // room for the row labels
    for (int c = 0; c < COLS; c++) {       // the column numbers on top
        printf("%4d", c);
    }
    printf("\n");
    for (int r = 0; r < ROWS; r++) {
        printf("%d | ", r);                // the row number in front
        for (int c = 0; c < COLS; c++) {
            printf("%4d", t[r][c]);
        }
        printf("\n");
    }
    return 0;
}
