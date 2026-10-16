/*
 * 18_fib_calls.c
 *
 * Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8, 13, ... Each one is the sum of the two before it.
 * The recursive version is short, but it is SLOW: fib(n) calls fib(n-1) AND fib(n-2),
 * and they ask the same questions again and again.
 * The global box calls counts every call (the only global in this week's code).
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 18_fib_calls.c -o fib
 *     ./fib          (in Windows PowerShell: .\fib)
 *
 * Try:
 *   1. Run it. fib(30) = 832040, and it took 2692537 calls.
 *   2. Try fib(35) and fib(40). Watch how long you wait.
 *   3. Print fib(1) to fib(10) in a loop in main. Check them against the list above.
 */
#include <stdio.h>

// Global, so that every call can add one to it.
int calls = 0;

int fib(int n) {
    calls++;
    // Two base cases: fib(0) is 0, fib(1) is 1.
    if (n <= 1) {
        return n;
    }
    // Two recursive calls.
    return fib(n - 1) + fib(n - 2);
}

int main(void) {
    printf("fib(30) = %d\n", fib(30));
    printf("calls: %d\n", calls);
    return 0;
}
