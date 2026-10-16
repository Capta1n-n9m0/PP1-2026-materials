/*
 * 16_is_even.c  -  CSCI 1101, class 7
 *
 * What it does: is_even gives back 1 (yes) or 0 (no). Because 1 is true and
 *   0 is false in C, the call can go straight into an if.
 *
 * Compile:  gcc -Wall 16_is_even.c -o is_even
 * Run:      ./is_even        (in Windows PowerShell:  .\is_even)
 *
 * Try:
 *   1. Change the loop to go from 1 to 10.
 *   2. Write is_odd(n) and use it instead.
 *   3. Replace the body of is_even with the one line return n % 2 == 0;
 *      Does it still work?
 */
#include <stdio.h>

int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    for (int i = 1; i <= 5; i++) {
        if (is_even(i)) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }
    return 0;
}
