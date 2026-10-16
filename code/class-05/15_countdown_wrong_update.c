/*
 * 15_countdown_wrong_update.c  -  CSCI 1101, class 5
 *
 * What it does: A count-down with the wrong update: i++ instead of i--. i
 *   goes 5, 6, 7, ... and i >= 1 stays true. It does not stop.
 *
 * Compile:  gcc -Wall 15_countdown_wrong_update.c -o countdown_wrong_update
 * Run:      ./countdown_wrong_update        (in Windows PowerShell:  .\countdown_wrong_update)
 *
 * THIS PROGRAM DOES NOT STOP BY ITSELF.
 * To stop it: click inside the terminal, hold Ctrl and press C.
 *
 * Try:
 *   1. Before you run it: which of the four parts is wrong?
 *   2. Run it, then stop it with Ctrl+C.
 *   3. Fix it.
 */
#include <stdio.h>

int main(void) {
    for (int i = 5; i >= 1; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
