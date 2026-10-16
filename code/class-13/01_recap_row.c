/*
 * 01_recap_row.c  -  CSCI 1101, class 13
 *
 * What it does: The recap from the start of class: one array of 4
 *   temperatures, a loop that prints them all. Today we put three rows like
 *   this one into one table.
 *
 * Compile:  gcc -Wall 01_recap_row.c -o recap_row
 * Run:      ./recap_row        (in Windows PowerShell:  .\recap_row)
 *
 * Try:
 *   1. Before you run it, say what it prints.
 *   2. Add a fifth temperature. What else must change?
 *   3. Print the sum of the four numbers after the loop.
 */
#include <stdio.h>

int main(void) {
    int day[4] = {3, 5, 8, 4};
    for (int c = 0; c < 4; c++) {
        printf("%d ", day[c]);
    }
    printf("\n");
    return 0;
}
