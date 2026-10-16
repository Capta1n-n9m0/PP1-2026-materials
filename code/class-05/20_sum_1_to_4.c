/*
 * 20_sum_1_to_4.c  -  CSCI 1101, class 5
 *
 * What it does: Adds up 1 + 2 + 3 + 4 in a box called sum. Each round adds
 *   i to sum. It prints 10. Friday starts here.
 *
 * Compile:  gcc -Wall 20_sum_1_to_4.c -o sum_1_to_4
 * Run:      ./sum_1_to_4        (in Windows PowerShell:  .\sum_1_to_4)
 *
 * Try:
 *   1. Trace it on paper first: sum after every round.
 *   2. Add up 1 to 10. (55)
 *   3. Add up 1 to 100. (5050)
 *   4. Print sum inside the loop as well, to see it grow.
 */
#include <stdio.h>

int main(void) {
    int sum = 0;

    for (int i = 1; i <= 4; i++) {
        sum += i;
    }

    printf("%d\n", sum);
    return 0;
}
