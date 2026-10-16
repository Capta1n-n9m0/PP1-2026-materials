/*
 * 11_points_table.c  -  CSCI 1101, class 14
 *
 * What it does: A table of points: 4 players (rows) in 3 rounds (columns).
 *   For each row it prints the player's average; for each column, the best
 *   score of the round.
 *
 * Compile:  gcc -Wall 11_points_table.c -o points_table
 * Run:      ./points_table        (in Windows PowerShell:  .\points_table)
 *
 * Try:
 *   1. Add a fifth player. Which lines must change?
 *   2. Print the total of each round as well as the best.
 *   3. Print which player had the best score in each round (the row number
 *      + 1).
 */
#include <stdio.h>

#define PLAYERS 4
#define ROUNDS 3

int main(void) {
    int pts[PLAYERS][ROUNDS] = {{7, 9, 4},
                                {5, 6, 8},
                                {9, 3, 6},
                                {4, 8, 10}};
    for (int p = 0; p < PLAYERS; p++) {
        int sum = 0;
        for (int r = 0; r < ROUNDS; r++) {
            sum += pts[p][r];
        }
        double avg = (double) sum / ROUNDS;
        printf("player %d: %.2f\n", p + 1, avg);
    }
    for (int r = 0; r < ROUNDS; r++) {
        int best = pts[0][r];
        for (int p = 1; p < PLAYERS; p++) {
            if (pts[p][r] > best) {
                best = pts[p][r];
            }
        }
        printf("round %d best: %d\n", r + 1, best);
    }
    return 0;
}
