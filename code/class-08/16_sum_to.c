/*
 * 16_sum_to.c
 *
 * 1 + 2 + ... + n with recursion.
 * sum_to(4) = 4 + sum_to(3), and sum_to(0) = 0.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 16_sum_to.c -o sumto
 *     ./sumto          (in Windows PowerShell: .\sumto)
 *
 * Try:
 *   1. Run it. You should see 10 and 5050 (the same totals as class 6's loop).
 *   2. Change the base case to  if (n == 1) return 1;  Same answers? Now try sum_to(0). What goes wrong?
 *   3. Write the same function with a for loop and compare.
 */
#include <stdio.h>

int sum_to(int n) {
    // Base case: the sum of nothing is 0.
    if (n == 0) {
        return 0;
    }
    // Step closer: n plus the sum of the smaller ones.
    return n + sum_to(n - 1);
}

int main(void) {
    printf("sum_to(4) = %d\n", sum_to(4));
    printf("sum_to(100) = %d\n", sum_to(100));
    return 0;
}
