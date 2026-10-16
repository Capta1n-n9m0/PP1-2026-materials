/*
 * 06_trace_while.c  -  CSCI 1101, class 5
 *
 * What it does: The loop we traced on paper: it prints 1 2 3 4, and after
 *   the loop x is 5, not 4.
 *
 * Compile:  gcc -Wall 06_trace_while.c -o trace_while
 * Run:      ./trace_while        (in Windows PowerShell:  .\trace_while)
 *
 * Try:
 *   1. Before you run it, trace it on paper: one row per round.
 *   2. Change x = x + 1 to x = x + 2. Trace it first, then run it.
 *   3. Change the start to int x = 4. How many rounds now?
 */
#include <stdio.h>

int main(void) {
    int x = 1;

    while (x <= 4) {
        printf("%d ", x);
        x = x + 1;
    }

    printf("\nAfter the loop x is %d\n", x);
    return 0;
}
