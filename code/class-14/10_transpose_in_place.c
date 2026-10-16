/*
 * 10_transpose_in_place.c  -  CSCI 1101, class 14
 *
 * What it does: The transpose done in place, correctly: the inner loop
 *   starts at j = i + 1, so only the cells above the diagonal are swapped,
 *   each pair once.
 *
 * Compile:  gcc -Wall 10_transpose_in_place.c -o transpose_in_place
 * Run:      ./transpose_in_place        (in Windows PowerShell:  .\transpose_in_place)
 *
 * Try:
 *   1. Print i and j at every swap. How many swaps are there for N = 3?
 *   2. Make N 4 and add a fourth row. How many swaps now?
 *   3. Start the inner loop at j = i instead. Does the result change? Why
 *      not?
 */
#include <stdio.h>

#define N 3

int main(void) {
    int m[N][N] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
