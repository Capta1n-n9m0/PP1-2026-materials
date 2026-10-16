// expect: error   (this file has a bug on purpose: see below)
/*
 * 03_bug_no_cols.c  -  CSCI 1101, class 14
 *
 * What it does: This program does not compile. The parameter is written int
 *   g[][] with both brackets empty. C must know how many columns a row has,
 *   so gcc stops with an error.
 *
 * Compile:  gcc -Wall 03_bug_no_cols.c -o bug_no_cols
 * Run:      ./bug_no_cols        (in Windows PowerShell:  .\bug_no_cols)
 *
 * Try:
 *   1. Compile it and read the error.
 *   2. Write int g[][3] instead. Compile and run it.
 *   3. Write int g[2][3] instead. Does that work too?
 */
#include <stdio.h>

void print_first(int g[][], int rows) {
    for (int r = 0; r < rows; r++) {
        printf("%d\n", g[r][0]);
    }
}

int main(void) {
    int a[2][3] = {{1, 2, 3},
                   {4, 5, 6}};
    print_first(a, 2);
    return 0;
}
