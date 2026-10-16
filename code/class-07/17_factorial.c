/*
 * 17_factorial.c  -  CSCI 1101, class 7
 *
 * What it does: Class 6 factorial, now as a function. main uses it in a
 *   loop to print 0! to 10!.
 *
 * Compile:  gcc -Wall 17_factorial.c -o factorial
 * Run:      ./factorial        (in Windows PowerShell:  .\factorial)
 *
 * Try:
 *   1. Why is 0! equal to 1 here? Look at where result starts and how many
 *      times the loop runs.
 *   2. Change the loop in main to go to 13. Is 13! right? (Class 6: an int
 *      is too small.)
 */
#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    for (int n = 0; n <= 10; n++) {
        printf("%d! = %d\n", n, factorial(n));
    }
    return 0;
}
