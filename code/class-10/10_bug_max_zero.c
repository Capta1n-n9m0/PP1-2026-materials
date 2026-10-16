/*
 * 10_bug_max_zero.c  -  CSCI 1101, class 10
 *
 * What it does: A common mistake: max starts at 0 instead of a[0]. With
 *   winter temperatures, all below zero, it prints 0, a temperature that is
 *   not in the array. The right answer is -2. gcc does not warn.
 *
 * Compile:  gcc -Wall 10_bug_max_zero.c -o bug_max_zero
 * Run:      ./bug_max_zero        (in Windows PowerShell:  .\bug_max_zero)
 *
 * Try:
 *   1. Run it. Is 0 in the array?
 *   2. Fix it: int max = temps[0];
 *   3. Why did the same program work for 12, 45, 7, 30, 19?
 */
#include <stdio.h>

#define N 5

int main(void) {
    int temps[N] = {-5, -2, -9, -4, -7};
    int max = 0;
    for (int i = 0; i < N; i++) {
        if (temps[i] > max) {
            max = temps[i];
        }
    }
    printf("warmest: %d\n", max);
    return 0;
}
