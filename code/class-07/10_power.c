/*
 * 10_power.c  -  CSCI 1101, class 7
 *
 * What it does: power(base, exp) multiplies base by itself exp times, with
 *   a loop inside the function. The order of the arguments matters:
 *   power(2, 3) is 8 but power(3, 2) is 9.
 *
 * Compile:  gcc -Wall 10_power.c -o power
 * Run:      ./power        (in Windows PowerShell:  .\power)
 *
 * Try:
 *   1. Print power(2, 10).
 *   2. Print power(5, 0). Why is it 1? Look at where result starts.
 *   3. Swap the two parameters in the first line: int power(int exp, int
 *      base). What changes?
 */
#include <stdio.h>

// base: the number to multiply. exp: how many times.
int power(int base, int exp) {
    int result = 1;              // a product starts at 1 (class 6)
    for (int i = 1; i <= exp; i++) {
        result *= base;          // result = result * base
    }
    return result;
}

int main(void) {
    // The FIRST value goes into base, the SECOND into exp.
    printf("power(2, 3) = %d\n", power(2, 3));
    printf("power(3, 2) = %d\n", power(3, 2));
    printf("power(10, 0) = %d\n", power(10, 0));   // the loop runs zero times
    return 0;
}
