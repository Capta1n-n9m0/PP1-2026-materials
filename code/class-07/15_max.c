/*
 * 15_max.c  -  CSCI 1101, class 7
 *
 * What it does: max gives back the larger of two numbers. It has two return
 *   lines: the first one that runs ends the function. max3 uses max twice.
 *
 * Compile:  gcc -Wall 15_max.c -o max
 * Run:      ./max        (in Windows PowerShell:  .\max)
 *
 * Try:
 *   1. Call max(5, 5). Which return runs?
 *   2. Call max(-3, -8).
 *   3. Write min(a, b) the same way.
 */
#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;   // if this runs, the function ENDS here
    }
    return b;       // we only get here when a > b was false
}

// max3 uses max twice: first the larger of a and b, then that against c.
int max3(int a, int b, int c) {
    return max(max(a, b), c);
}

int main(void) {
    printf("max(3, 9) = %d\n", max(3, 9));
    printf("max(9, 3) = %d\n", max(9, 3));
    printf("max3(4, 11, 7) = %d\n", max3(4, 11, 7));
    return 0;
}
