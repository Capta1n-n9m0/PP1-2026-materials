/*
 * 17_power_rec.c
 *
 * base to the power exp, with recursion.
 * 2 to the 10 = 2 x (2 to the 9), and anything to the power 0 is 1.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 17_power_rec.c -o power
 *     ./power          (in Windows PowerShell: .\power)
 *
 * Try:
 *   1. Run it. You should see 1024 and 81.
 *   2. Swap the arguments: power(10, 2). You get 100, not 1024. The order matters.
 *   3. Print power(5, 0). You should see 1: the base case at once.
 */
#include <stdio.h>

int power(int base, int exp) {
    // Base case: anything to the power 0 is 1.
    if (exp == 0) {
        return 1;
    }
    // Step closer: one fewer multiplication.
    return base * power(base, exp - 1);
}

int main(void) {
    printf("2 to the 10 = %d\n", power(2, 10));
    printf("3 to the 4 = %d\n", power(3, 4));
    return 0;
}
