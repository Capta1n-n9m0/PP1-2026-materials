/*
 * 30_trace_halving.c
 *
 * Another loop to trace on paper. n is cut in half again and again.
 * Remember: int divided by int throws the decimals away. 5 / 2 is 2.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 30_trace_halving.c -o halving
 *     ./halving          (in Windows PowerShell: .\halving)
 *
 * Try:
 *   1. On paper first. Then run it. You should see n=1 steps=3.
 *   2. Start with n = 100. Trace first. Then run: n=1 steps=6.
 *   3. Change n > 1 to n > 0. What changes?
 */
#include <stdio.h>

int main(void) {
    int n = 10;
    int steps = 0;

    while (n > 1) {
        // Whole-number division: 10 -> 5 -> 2 -> 1.
        n = n / 2;
        steps++;
    }

    printf("n=%d steps=%d\n", n, steps);
    return 0;
}
