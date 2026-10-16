/*
 * 15_taken_around.c  -  CSCI 1101, class 14
 *
 * What it does: A seating chart: 1 is a taken seat, 0 a free one.
 *   taken_around(s, r, c) counts the taken seats around seat (r, c).
 *   is_inside is tested first, so the program never reads outside the
 *   chart.
 *
 * Compile:  gcc -Wall 15_taken_around.c -o taken_around
 * Run:      ./taken_around        (in Windows PowerShell:  .\taken_around)
 *
 * Try:
 *   1. Before you run it, count the four answers on the chart by hand.
 *   2. Ask about seat (1, 2) too. Count it by hand first.
 *   3. Write free_around: the number of free seats around a seat.
 */
#include <stdio.h>

#define ROWS 4
#define COLS 5

int is_inside(int r, int c) {
    return r >= 0 && r < ROWS && c >= 0 && c < COLS;
}

// How many taken seats (1) are around seat (r, c)?
int taken_around(int s[][COLS], int r, int c) {
    int count = 0;
    for (int dr = -1; dr <= 1; dr++) {
        for (int dc = -1; dc <= 1; dc++) {
            int nr = r + dr;      // the neighbour's row
            int nc = c + dc;      // the neighbour's column
            if (dr == 0 && dc == 0) {
                continue;         // skip the seat itself
            }
            // is_inside comes first. If it is 0, && stops there,
            // and s[nr][nc] is never read outside the chart.
            if (is_inside(nr, nc) && s[nr][nc] == 1) {
                count++;
            }
        }
    }
    return count;
}

int main(void) {
    int seats[ROWS][COLS] = {{1, 0, 0, 1, 1},
                             {0, 1, 0, 0, 1},
                             {1, 1, 0, 1, 0},
                             {0, 0, 0, 1, 1}};
    printf("(0, 0): %d\n", taken_around(seats, 0, 0));   // a corner
    printf("(0, 2): %d\n", taken_around(seats, 0, 2));   // the top edge
    printf("(2, 2): %d\n", taken_around(seats, 2, 2));   // the middle
    printf("(3, 4): %d\n", taken_around(seats, 3, 4));   // a corner
    return 0;
}
