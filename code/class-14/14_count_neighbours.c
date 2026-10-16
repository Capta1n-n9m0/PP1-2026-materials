/*
 * 14_count_neighbours.c  -  CSCI 1101, class 14
 *
 * What it does: For every cell of a 4 by 5 grid, counts how many neighbour
 *   cells it has: 3 in a corner, 5 on an edge, 8 in the middle. Two loops
 *   over dr and dc go from -1 to 1; the cell itself is skipped and
 *   is_inside throws away positions off the grid.
 *
 * Compile:  gcc -Wall 14_count_neighbours.c -o count_neighbours
 * Run:      ./count_neighbours        (in Windows PowerShell:  .\count_neighbours)
 *
 * Try:
 *   1. Before you run it, draw the grid of answers on paper.
 *   2. Remove the continue and its if. What changes in the output? Why?
 *   3. Make the grid 6 by 6. Where are the 3s, 5s and 8s now?
 */
#include <stdio.h>

#define ROWS 4
#define COLS 5

int is_inside(int r, int c) {
    return r >= 0 && r < ROWS && c >= 0 && c < COLS;
}

// How many cells touch (r, c), across and diagonally?
int count_neighbours(int r, int c) {
    int count = 0;
    for (int dr = -1; dr <= 1; dr++) {          // the row above, this row, the row below
        for (int dc = -1; dc <= 1; dc++) {      // the column left, this column, right
            if (dr == 0 && dc == 0) {
                continue;                       // (r, c) itself is not its own neighbour
            }
            if (is_inside(r + dr, c + dc)) {    // only positions on the grid count
                count++;
            }
        }
    }
    return count;
}

int main(void) {
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            printf("%2d", count_neighbours(r, c));
        }
        printf("\n");
    }
    return 0;
}
