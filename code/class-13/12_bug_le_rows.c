/*
 * 12_bug_le_rows.c  -  CSCI 1101, class 13
 *
 * What it does: A loop with r <= ROWS goes one row too far. Row 3 does not
 *   exist: the program prints a number from memory that is not its own, a
 *   different one on every run. gcc says nothing.
 *
 * Compile:  gcc -Wall 12_bug_le_rows.c -o bug_le_rows
 * Run:      ./bug_le_rows        (in Windows PowerShell:  .\bug_le_rows)
 *
 * Try:
 *   1. Run it three times. Which number changes?
 *   2. Fix the condition. What is the rule for the last index?
 *   3. Print r inside the loop, before t[r][0]. Which values does r take?
 */
#include <stdio.h>

#define ROWS 3
#define COLS 4

int main(void) {
    int t[ROWS][COLS] = {
        {3, 5, 8, 4},
        {2, 6, 9, 1},
        {-1, 0, 4, 2}
    };
    // The rows are 0, 1, 2. With <= the loop also takes r = 3:
    // a row that does not exist. The fix is r < ROWS.
    for (int r = 0; r <= ROWS; r++) {
        printf("%d ", t[r][0]);
    }
    printf("\n");
    return 0;
}
