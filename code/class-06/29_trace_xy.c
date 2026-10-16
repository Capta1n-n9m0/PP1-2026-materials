/*
 * 29_trace_xy.c
 *
 * The tracing exercise from class. Trace it on paper FIRST. Then run it to check.
 * Make a table: one row for each round, one column for x and one for y.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 29_trace_xy.c -o trace
 *     ./trace          (in Windows PowerShell: .\trace)
 *
 * Try:
 *   1. On paper: what are x and y after each round? Then run it. You should see x=8 y=12.
 *   2. Change x < 8 to x <= 8. Trace first. Then run: x=10 y=20.
 *   3. Put x < 8 back. Start with x = 1 and use x += 3. Trace first. Then run: x=10 y=12.
 */
#include <stdio.h>

int main(void) {
    int x = 2;
    int y = 0;

    while (x < 8) {
        // First y, then x. The order matters.
        y += x;
        x += 2;
    }

    printf("x=%d y=%d\n", x, y);
    return 0;
}
