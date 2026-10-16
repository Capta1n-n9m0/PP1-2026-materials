/*
 * 14_above_average.c  -  CSCI 1101, class 9
 *
 * What it does: Why we need the array: reads 5 scores, finds the average,
 *   and THEN counts how many scores are above it. It needs every score
 *   twice, so it must keep them all. Try the input 7 9 6 10 8
 *
 * Compile:  gcc -Wall 14_above_average.c -o above_average
 * Run:      ./above_average        (in Windows PowerShell:  .\above_average)
 *
 * Try:
 *   1. Also print the scores that are above the average, not just how many.
 *   2. Count the scores below the average too.
 */
#include <stdio.h>

#define N 5

int main(void) {
    int scores[N];

    printf("Enter %d scores: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += scores[i];
    }
    double avg = (double) sum / N;

    int above = 0;
    for (int i = 0; i < N; i++) {
        if (scores[i] > avg) {
            above++;
        }
    }
    printf("average: %.1f\n", avg);
    printf("above average: %d\n", above);
    return 0;
}
