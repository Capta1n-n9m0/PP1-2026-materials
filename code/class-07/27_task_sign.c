/*
 * 27_task_sign.c  -  CSCI 1101, class 7
 *
 * What it does: Solution of task 2: int sign(int n) gives back -1 for a
 *   negative number, 0 for zero and 1 for a positive number.
 *
 * Compile:  gcc -Wall 27_task_sign.c -o task_sign
 * Run:      ./task_sign        (in Windows PowerShell:  .\task_sign)
 *
 * Try:
 *   1. Try -7, 0 and 12.
 *   2. Use sign in a loop in main to print the sign of -2, -1, 0, 1, 2.
 */
#include <stdio.h>

int sign(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0) {
        return 0;
    }
    return 1;
}

int main(void) {
    int n;
    printf("Number: ");
    scanf("%d", &n);
    printf("Sign: %d\n", sign(n));
    return 0;
}
