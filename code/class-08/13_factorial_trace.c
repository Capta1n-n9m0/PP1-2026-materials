/*
 * 13_factorial_trace.c
 *
 * The recursive factorial, with printf lines that show every call
 * starting (on the way down) and every call returning (on the way back up).
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 13_factorial_trace.c -o facttrace
 *     ./facttrace          (in Windows PowerShell: .\facttrace)
 *
 * Try:
 *   1. Run it. Four lines "starts" (4, 3, 2, 1), then four lines "returns" (1, 2, 6, 24).
 *   2. Change factorial(4) to factorial(6). Predict the last "returns" line first: 720.
 *   3. Draw it on paper as a stack of boxes, one box per call, before you run it.
 */
#include <stdio.h>

int factorial(int n) {
    printf("factorial(%d) starts\n", n);
    if (n <= 1) {
        printf("factorial(%d) returns 1\n", n);
        return 1;
    }
    // This call must finish before the multiplication can happen.
    int result = n * factorial(n - 1);
    printf("factorial(%d) returns %d\n", n, result);
    return result;
}

int main(void) {
    printf("Answer: %d\n", factorial(4));
    return 0;
}
