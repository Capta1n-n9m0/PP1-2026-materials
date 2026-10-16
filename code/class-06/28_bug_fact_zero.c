/*
 * 28_bug_fact_zero.c
 *
 * THIS PROGRAM HAS A BUG ON PURPOSE.
 * fact starts at 0. Anything times 0 is 0, so fact stays 0.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 28_bug_fact_zero.c -o fact_zero
 *     ./fact_zero          (in Windows PowerShell: .\fact_zero)
 *
 * Try:
 *   1. Run it. You should see 0.
 *   2. Change the 0 to 1. Run again. You should see 120.
 *   3. Rule: when you add, start at 0. When you multiply, start at 1.
 */
#include <stdio.h>

int main(void) {
    int n = 5;
    // THE BUG: a product must start at 1.
    int fact = 0;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d\n", fact);
    return 0;
}
