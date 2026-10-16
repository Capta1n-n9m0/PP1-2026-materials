/*
 * 07_infinite_loop.c  -  CSCI 1101, class 5
 *
 * What it does: A loop with NO update. count is always 1, so the check is
 *   always true. It prints 1 for ever.
 *
 * Compile:  gcc -Wall 07_infinite_loop.c -o infinite_loop
 * Run:      ./infinite_loop        (in Windows PowerShell:  .\infinite_loop)
 *
 * THIS PROGRAM DOES NOT STOP BY ITSELF.
 * To stop it: click inside the terminal, hold Ctrl and press C.
 *
 * Try:
 *   1. Run it. Then stop it: click inside the terminal, hold Ctrl and press
 *      C.
 *   2. Compile it with -Wall. Does the compiler warn you? (No. It checks
 *      spelling, not thinking.)
 *   3. Fix it: add the missing line count++; inside the loop.
 */
#include <stdio.h>

int main(void) {
    int count = 1;

    while (count <= 3) {
        printf("%d\n", count);
        // count never changes
    }

    printf("Done\n");
    return 0;
}
