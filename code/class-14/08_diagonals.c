/*
 * 08_diagonals.c  -  CSCI 1101, class 14
 *
 * What it does: Adds the main diagonal of a 3 by 3 matrix (the cells where
 *   the row and the column are equal, m[i][i]) and the other diagonal
 *   (m[i][N - 1 - i]). One loop is enough for each.
 *
 * Compile:  gcc -Wall 08_diagonals.c -o diagonals
 * Run:      ./diagonals        (in Windows PowerShell:  .\diagonals)
 *
 * Try:
 *   1. Before you run it, add the two diagonals by hand.
 *   2. Make the matrix 4 by 4. Do the loops need to change?
 *   3. Print the cells of the main diagonal, one per line.
 */
#include <stdio.h>

#define N 3

int main(void) {
    int m[N][N] = {{2, 0, 1},
                   {3, 5, 4},
                   {6, 7, 8}};
    int main_sum = 0;
    int other_sum = 0;
    for (int i = 0; i < N; i++) {
        main_sum += m[i][i];
        other_sum += m[i][N - 1 - i];
    }
    printf("main diagonal: %d\n", main_sum);
    printf("other diagonal: %d\n", other_sum);
    return 0;
}
