/*
 * 15_one_pass.c  -  CSCI 1101, class 10
 *
 * What it does: One pass of bubble sort: compare each pair of neighbours,
 *   from the left, and swap them if they are in the wrong order. After one
 *   pass the largest number, 8, is at the end.
 *
 * Compile:  gcc -Wall 15_one_pass.c -o one_pass
 * Run:      ./one_pass        (in Windows PowerShell:  .\one_pass)
 *
 * Try:
 *   1. Before you run it, do the pass on paper.
 *   2. Run the pass twice (copy the loop). What does the array look like?
 *   3. Change > to <. Where does the smallest number go?
 */
#include <stdio.h>

#define N 5

int main(void) {
    int a[N] = {5, 3, 8, 4, 2};
    // j goes to N - 2, so that a[j + 1] is still inside the array
    for (int j = 0; j < N - 1; j++) {
        if (a[j] > a[j + 1]) {       // neighbours in the wrong order?
            int temp = a[j];         // then swap them
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
