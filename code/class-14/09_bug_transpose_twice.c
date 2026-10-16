/*
 * 09_bug_transpose_twice.c  -  CSCI 1101, class 14
 *
 * What it does: A wrong transpose "in place": it swaps m[i][j] and m[j][i]
 *   for every i and j. Every pair is swapped twice, so the matrix comes out
 *   unchanged. No warning: the bug is in the logic.
 *
 * Compile:  gcc -Wall 09_bug_transpose_twice.c -o bug_transpose_twice
 * Run:      ./bug_transpose_twice        (in Windows PowerShell:  .\bug_transpose_twice)
 *
 * Try:
 *   1. Run it and compare the output with the matrix in the code.
 *   2. Add a printf inside the if that prints i and j. How many swaps
 *      happen?
 *   3. Fix it: start the inner loop at j = i + 1 (file 10 has the answer).
 */
#include <stdio.h>

#define N 3

int main(void) {
    int m[N][N] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
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
