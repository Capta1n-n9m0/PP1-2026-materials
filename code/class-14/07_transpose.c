/*
 * 07_transpose.c  -  CSCI 1101, class 14
 *
 * What it does: The transpose of a 3 by 3 matrix: row i of m becomes column
 *   i of t. One line does it: t[j][i] = m[i][j]. The program prints m, then
 *   t.
 *
 * Compile:  gcc -Wall 07_transpose.c -o transpose
 * Run:      ./transpose        (in Windows PowerShell:  .\transpose)
 *
 * Try:
 *   1. Print m[1][2] and t[2][1]. Why are they equal?
 *   2. Transpose t again into a third matrix. What do you get?
 *   3. Use a 2 by 3 matrix m. What size must t be now?
 */
#include <stdio.h>

#define N 3

void print_matrix(int g[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d", g[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int m[N][N] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int t[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            t[j][i] = m[i][j];
        }
    }
    print_matrix(m);
    printf("\n");
    print_matrix(t);
    return 0;
}
