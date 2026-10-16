/*
 * 12_factorial_loop.c
 *
 * Factorial with a loop, inside a function (class 6's running product).
 * Compare with 11_factorial_rec.c: same answers, written with recursion.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 12_factorial_loop.c -o factloop
 *     ./factloop          (in Windows PowerShell: .\factloop)
 *
 * Try:
 *   1. Run it. You should see 4! = 24 and 5! = 120.
 *   2. Add a loop in main that prints factorial(0) to factorial(10), one per line.
 *   3. Which version do you find easier to read, this one or the recursive one?
 */
#include <stdio.h>

int factorial(int n) {
    // A product starts at 1.
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main(void) {
    printf("4! = %d\n", factorial(4));
    printf("5! = %d\n", factorial(5));
    return 0;
}
