/*
 * 18_bubble_early_exit.c  -  CSCI 1101, class 10
 *
 * What it does: An extra (optional): bubble sort that stops early. If a
 *   whole pass makes no swap, the array is sorted and the loop stops. An
 *   array that is almost sorted needs only 2 passes, not 4.
 *
 * Compile:  gcc -Wall 18_bubble_early_exit.c -o bubble_early_exit
 * Run:      ./bubble_early_exit        (in Windows PowerShell:  .\bubble_early_exit)
 *
 * Try:
 *   1. Sort {5, 4, 3, 2, 1}. How many passes now?
 *   2. Sort {1, 2, 3, 4, 5}. How many passes?
 *   3. Remove the line if (!swapped) break; and count the passes again.
 */
#include <stdio.h>

#define N 5

int main(void) {
    int a[N] = {1, 2, 3, 5, 4};
    int passes = 0;
    for (int pass = 1; pass < N; pass++) {
        int swapped = 0;              // no swap in this pass yet
        for (int j = 0; j < N - pass; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;          // something moved
            }
        }
        passes++;
        if (!swapped) {               // a whole pass with no swap:
            break;                    // the array is sorted, stop
        }
    }
    printf("passes: %d\n", passes);
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
