/*
 * 11_factorial_rec.c
 *
 * Factorial with recursion.  4! = 4 x 3!   and   3! = 3 x 2!  ...  and 1! = 1.
 * Compare with 12_factorial_loop.c: same answers, written with a loop.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 11_factorial_rec.c -o factrec
 *     ./factrec          (in Windows PowerShell: .\factrec)
 *
 * Try:
 *   1. Run it. You should see 4! = 24 and 5! = 120.
 *   2. Print factorial(12). You should see 479001600.
 *   3. Print factorial(13). You get 1932053504, which is WRONG: an int is too small (class 6).
 *   4. Print factorial(0). You get 1, because 0 <= 1. Mathematicians agree: 0! is 1.
 */
#include <stdio.h>

int factorial(int n) {
    // Base case: 1! is 1 (and 0! too).
    if (n <= 1) {
        return 1;
    }
    // Step closer: n! is n times (n-1)!
    return n * factorial(n - 1);
}

int main(void) {
    printf("4! = %d\n", factorial(4));
    printf("5! = %d\n", factorial(5));
    return 0;
}
