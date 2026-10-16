/*
 * 21_factorial.c
 *
 * 5 factorial is 1 x 2 x 3 x 4 x 5 = 120.
 * A running PRODUCT: like a running total, but with *= and starting at 1.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 21_factorial.c -o fact5
 *     ./fact5          (in Windows PowerShell: .\fact5)
 *
 * Try:
 *   1. Run it. You should see 120.
 *   2. Change n to 6. You should see 720.
 *   3. Add printf("i=%d fact=%d\n", i, fact); inside the loop and watch it grow.
 */
#include <stdio.h>

int main(void) {
    int n = 5;
    // Start at 1, not 0. Multiplying by 1 changes nothing.
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        // Same as: fact = fact * i;
        fact *= i;
    }

    printf("%d\n", fact);
    return 0;
}
