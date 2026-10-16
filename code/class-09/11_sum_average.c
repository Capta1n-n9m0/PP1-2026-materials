/*
 * 11_sum_average.c  -  CSCI 1101, class 9
 *
 * What it does: Reads 5 scores into an array, then adds them up with a loop
 *   and prints the sum and the average. Try the input 7 9 6 10 8
 *
 * Compile:  gcc -Wall 11_sum_average.c -o sum_average
 * Run:      ./sum_average        (in Windows PowerShell:  .\sum_average)
 *
 * Try:
 *   1. Make the average print with 2 decimals.
 *   2. Also print the scores again after the average. You still can: they
 *      are in the array.
 */
#include <stdio.h>

int main(void) {
    int scores[5];

    printf("Enter 5 scores: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &scores[i]);
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }
    printf("sum: %d\n", sum);
    printf("average: %.1f\n", sum / 5.0);
    return 0;
}
