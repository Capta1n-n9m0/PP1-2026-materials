/*
 * 01_recap_rows.c  -  CSCI 1101, class 14
 *
 * What it does: The recap question from the start of class: a 2 by 3 grid,
 *   and a sum for each row. It prints row 0: 12 and row 1: 17.
 *
 * Compile:  gcc -Wall 01_recap_rows.c -o recap_rows
 * Run:      ./recap_rows        (in Windows PowerShell:  .\recap_rows)
 *
 * Try:
 *   1. Before you run it, say what it prints.
 *   2. Add a third row {1, 1, 1}. What else must change?
 *   3. Print the sum of each column instead of each row. Which loop goes
 *      outside now?
 */
#include <stdio.h>

int main(void) {
    int t[2][3] = {{4, 7, 1},     // row 0
                   {9, 2, 6}};    // row 1
    for (int r = 0; r < 2; r++) {         // outer loop: one row
        int sum = 0;                      // a new sum for every row
        for (int c = 0; c < 3; c++) {     // inner loop: the columns of that row
            sum += t[r][c];
        }
        printf("row %d: %d\n", r, sum);
    }
    return 0;
}
