/*
 * 16_char_map.c  -  CSCI 1101, class 14
 *
 * What it does: A grid of char: each row of the seat map is a string, so
 *   map[r][c] is one character. The program prints the map with row and
 *   column numbers, and counts the taken seats (X).
 *
 * Compile:  gcc -Wall 16_char_map.c -o char_map
 * Run:      ./char_map        (in Windows PowerShell:  .\char_map)
 *
 * Try:
 *   1. Change one . into an X and run it again.
 *   2. Print the map with a space between the seats.
 *   3. Count the free seats (.) in row 2 only.
 */
#include <stdio.h>

#define ROWS 4
#define COLS 5

int main(void) {
    // COLS + 1: each row is a string of 5 characters, plus '\0'.
    char map[ROWS][COLS + 1] = {"X..XX",
                                ".X..X",
                                "XX.X.",
                                "...XX"};
    int taken = 0;
    printf("  01234\n");              // the column numbers
    for (int r = 0; r < ROWS; r++) {
        printf("%d ", r);             // the row number
        for (int c = 0; c < COLS; c++) {
            printf("%c", map[r][c]);  // one character: %c
            if (map[r][c] == 'X') {
                taken++;
            }
        }
        printf("\n");
    }
    printf("taken: %d\n", taken);
    return 0;
}
