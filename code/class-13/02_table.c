/*
 * 02_table.c  -  CSCI 1101, class 13
 *
 * What it does: A two-dimensional array: 3 rows and 4 columns of int,
 *   filled with an initializer list, one pair of braces per row. It prints
 *   three single boxes: t[r][c] is row r, column c.
 *
 * Compile:  gcc -Wall 02_table.c -o table
 * Run:      ./table        (in Windows PowerShell:  .\table)
 *
 * Try:
 *   1. Print t[2][1]. Say what it is before you run it.
 *   2. Change the 9 in the middle row to 10 with one assignment line, then
 *      print it.
 *   3. Print sizeof(t). How many bytes is one int on your computer?
 */
#include <stdio.h>

int main(void) {
    // 3 rows, 4 columns: 12 ints in one array.
    // Temperatures: one row per day, one column per time of day.
    int t[3][4] = {
        {3, 5, 8, 4},     // row 0
        {2, 6, 9, 1},     // row 1
        {-1, 0, 4, 2}     // row 2
    };
    printf("%d\n", t[0][0]);   // row 0, column 0: the first box
    printf("%d\n", t[1][2]);   // row 1, column 2
    printf("%d\n", t[2][3]);   // row 2, column 3: the last box
    return 0;
}
