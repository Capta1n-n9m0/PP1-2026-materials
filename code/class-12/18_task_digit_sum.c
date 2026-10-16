/*
 * 18_task_digit_sum.c  -  CSCI 1101, class 12
 *
 * What it does: Solution of the first task: a function that adds up the
 *   digit characters of a string, so "2026" gives 2 + 0 + 2 + 6 = 10.
 *
 * Compile:  gcc -Wall 18_task_digit_sum.c -o task_digit_sum
 * Run:      ./task_digit_sum        (in Windows PowerShell:  .\task_digit_sum)
 *
 * Try:
 *   1. Call it with "999". Work out the answer first.
 *   2. Skip characters that are not digits, so "a1b2" gives 3.
 *   3. Write it again for an int: 2026 % 10, 2026 / 10, and so on.
 */
#include <stdio.h>

int digit_sum(char s[]) {
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        sum += s[i] - '0';
    }
    return sum;
}

int main(void) {
    printf("%d\n", digit_sum("2026"));
    printf("%d\n", digit_sum("999"));
    return 0;
}
