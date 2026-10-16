/*
 * 18_copy_loop.c  -  CSCI 1101, class 9
 *
 * What it does: Copies an array the right way: one box at a time, in a
 *   loop. Then it changes the copy, to show that the original stays the
 *   same.
 *
 * Compile:  gcc -Wall 18_copy_loop.c -o copy_loop
 * Run:      ./copy_loop        (in Windows PowerShell:  .\copy_loop)
 *
 * Try:
 *   1. Copy the array backwards: b[i] = a[2 - i];
 *   2. Change a[0] after the copy instead of b[0]. Which line of output
 *      changes?
 */
#include <stdio.h>

int main(void) {
    int a[3] = {1, 2, 3};
    int b[3];

    for (int i = 0; i < 3; i++) {
        b[i] = a[i];
    }
    b[0] = 100;

    printf("a: %d %d %d\n", a[0], a[1], a[2]);
    printf("b: %d %d %d\n", b[0], b[1], b[2]);
    return 0;
}
