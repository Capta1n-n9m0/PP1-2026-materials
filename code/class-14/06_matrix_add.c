/*
 * 06_matrix_add.c  -  CSCI 1101, class 14
 *
 * What it does: Adds two 2 by 3 matrices cell by cell: s[i][j] = a[i][j] +
 *   b[i][j]. Then prints the sum.
 *
 * Compile:  gcc -Wall 06_matrix_add.c -o matrix_add
 * Run:      ./matrix_add        (in Windows PowerShell:  .\matrix_add)
 *
 * Try:
 *   1. Subtract instead: s[i][j] = b[i][j] - a[i][j].
 *   2. Multiply every cell of a by 3 and print it (one matrix, no b).
 *   3. Make the matrices 3 by 3 and add a third row to a and b.
 */
#include <stdio.h>

#define N 2
#define M 3

int main(void) {
    int a[N][M] = {{1, 2, 3}, {4, 5, 6}};
    int b[N][M] = {{10, 20, 30}, {40, 50, 60}};
    int s[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            s[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%4d", s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
