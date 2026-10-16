/*
 * 09_fill_squares.c  -  CSCI 1101, class 9
 *
 * What it does: Fills an array with a loop (box i gets i times i), then
 *   prints it with a second loop.
 *
 * Compile:  gcc -Wall 09_fill_squares.c -o fill_squares
 * Run:      ./fill_squares        (in Windows PowerShell:  .\fill_squares)
 *
 * Try:
 *   1. Fill it with i * 10 instead.
 *   2. Fill it with 1, 2, 3, ..., 10: what goes on the right of = ?
 *   3. Make the array 20 long. Which numbers must change?
 */
#include <stdio.h>

int main(void) {
    int sq[10];

    for (int i = 0; i < 10; i++) {
        sq[i] = i * i;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", sq[i]);
    }
    printf("\n");
    return 0;
}
