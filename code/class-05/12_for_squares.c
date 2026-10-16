/*
 * 12_for_squares.c  -  CSCI 1101, class 5
 *
 * What it does: Prints the numbers 1 to 5 and their squares. The body of a
 *   loop can USE the counter, not only print it.
 *
 * Compile:  gcc -Wall 12_for_squares.c -o for_squares
 * Run:      ./for_squares        (in Windows PowerShell:  .\for_squares)
 *
 * Try:
 *   1. Print the squares up to 10.
 *   2. Print the cubes as well: i * i * i.
 *   3. Print 7 times i instead: the 7 times table.
 */
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        printf("%d squared is %d\n", i, i * i);
    }
    return 0;
}
