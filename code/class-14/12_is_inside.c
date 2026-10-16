/*
 * 12_is_inside.c  -  CSCI 1101, class 14
 *
 * What it does: is_inside(r, c) answers one question: is the position (r,
 *   c) on the grid? It is 1 for (0, 0) and (3, 4), and 0 for (-1, 2) and
 *   (2, 5).
 *
 * Compile:  gcc -Wall 12_is_inside.c -o is_inside
 * Run:      ./is_inside        (in Windows PowerShell:  .\is_inside)
 *
 * Try:
 *   1. Before you run it, say the four answers.
 *   2. Test (4, 0). Why is it outside when ROWS is 4?
 *   3. Change ROWS to 5 and run it again. Which answer changes?
 */
#include <stdio.h>

#define ROWS 4
#define COLS 5

// 1 if (r, c) is a cell of the grid, 0 if it is outside.
// The rows are 0 to ROWS - 1, the columns 0 to COLS - 1.
int is_inside(int r, int c) {
    return r >= 0 && r < ROWS && c >= 0 && c < COLS;
}

int main(void) {
    printf("%d\n", is_inside(0, 0));    // the top-left corner
    printf("%d\n", is_inside(3, 4));    // the bottom-right corner
    printf("%d\n", is_inside(-1, 2));   // above the grid
    printf("%d\n", is_inside(2, 5));    // right of the grid
    return 0;
}
