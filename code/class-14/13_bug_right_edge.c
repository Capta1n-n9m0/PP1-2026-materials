/*
 * 13_bug_right_edge.c  -  CSCI 1101, class 14
 *
 * What it does: Reads the "right neighbour" of a cell on the right edge
 *   without checking. There is no column 4, but C does not stop: g[0][4] is
 *   the next box in memory, the first cell of row 1. The program prints a
 *   wrong neighbour and no error.
 *
 * Compile:  gcc -Wall 13_bug_right_edge.c -o bug_right_edge
 * Run:      ./bug_right_edge        (in Windows PowerShell:  .\bug_right_edge)
 *
 * Try:
 *   1. Run it. Which cell did g[0][4] really read?
 *   2. Print g[1][-1] too. Which cell is it?
 *   3. Add a test with is_inside before the read, as in file 12.
 */
#include <stdio.h>

#define ROWS 3
#define COLS 4

int main(void) {
    int g[ROWS][COLS] = {{1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {9, 10, 11, 12}};
    int r = 0;
    int c = 3;
    printf("cell: %d\n", g[r][c]);
    printf("right: %d\n", g[r][c + 1]);
    return 0;
}
