/*
 * 11_past_the_row.c  -  CSCI 1101, class 13
 *
 * What it does: C does not check the column number. t[0][4] does not exist
 *   in a table of 4 columns, yet the program compiles with no warning and
 *   prints 2: the first box of row 1. The rows sit one after another in
 *   memory.
 *
 * Compile:  gcc -Wall 11_past_the_row.c -o past_the_row
 * Run:      ./past_the_row        (in Windows PowerShell:  .\past_the_row)
 *
 * Try:
 *   1. Print t[1][4]. Which box of the table do you get?
 *   2. Print t[0][5] and t[1][-1]. Explain both.
 *   3. Never do this on purpose: write the line that prints row 1, column 0
 *      correctly.
 */
#include <stdio.h>

int main(void) {
    int t[3][4] = {
        {3, 5, 8, 4},
        {2, 6, 9, 1},
        {-1, 0, 4, 2}
    };
    // Columns are 0 to 3. Column 4 does not exist.
    // In memory row 1 comes right after row 0, so this reads t[1][0].
    // It is still a bug: C does not check, and gcc does not warn.
    printf("%d\n", t[0][4]);
    return 0;
}
