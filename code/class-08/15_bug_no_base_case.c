// expect: warning
/*
 * 15_bug_no_base_case.c
 *
 * A program with a bug on purpose: countdown has NO base case.
 * It calls itself for ever: 3, 2, 1, 0, -1, -2, ...
 * Every call needs a little memory (the "stack"). After about 43,000 calls
 * the memory runs out and Windows stops the program. There is no message:
 * it just ends.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 15_bug_no_base_case.c -o nobase
 *     gcc warns: infinite recursion detected [-Winfinite-recursion]
 *     ./nobase          (in Windows PowerShell: .\nobase)
 *
 * Try:
 *   1. Compile it and read the warning. gcc saw the problem before you ran it.
 *   2. Run it. Numbers fly past, then it stops, somewhere around -43000.
 *      In PowerShell, type  $LASTEXITCODE  and press Enter: -1073741571 means "stack overflow".
 *   3. Fix it: add the base case from 10_countdown.c.
 */
#include <stdio.h>

void countdown(int n) {
    printf("%d\n", n);
    // BUG: nothing ever stops this call.
    countdown(n - 1);
}

int main(void) {
    countdown(3);
    return 0;
}
