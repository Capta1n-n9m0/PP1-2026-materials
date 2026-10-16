/*
 * 10_countdown.c
 *
 * Recursion: a function that calls itself.
 * countdown(3) prints 3, then calls countdown(2), which prints 2, and so on.
 * countdown(0) is the BASE CASE: it prints Go! and does not call again.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 10_countdown.c -o countdown
 *     ./countdown          (in Windows PowerShell: .\countdown)
 *
 * Try:
 *   1. Run it. You should see 3, 2, 1, Go!
 *   2. Call countdown(10). Ten numbers, then Go!
 *   3. Call countdown(0). Only Go!: the base case at once.
 *   4. Change n - 1 to n - 2 and call countdown(3). Predict first. (Careful: 3, 1, -1, ... it
 *      never hits 0 exactly. Press Ctrl+C if it runs, or wait for it to crash.)
 */
#include <stdio.h>

void countdown(int n) {
    // Base case: when to stop.
    if (n == 0) {
        printf("Go!\n");
        return;
    }
    printf("%d\n", n);
    // Step closer: the same job with a smaller number.
    countdown(n - 1);
}

int main(void) {
    countdown(3);
    return 0;
}
