/*
 * 09_max.c  -  CSCI 1101, class 10
 *
 * What it does: The largest element: start with the first element as the
 *   best so far, then look at the others one by one. It prints max = 45.
 *
 * Compile:  gcc -Wall 09_max.c -o max
 * Run:      ./max        (in Windows PowerShell:  .\max)
 *
 * Try:
 *   1. Put the biggest number first. Does it still work?
 *   2. Put the biggest number last. Does it still work?
 *   3. Change it to find the smallest element.
 */
#include <stdio.h>

#define N 5

int main(void) {
    int a[N] = {12, 45, 7, 30, 19};
    int max = a[0];                 // the best so far: the first element
    for (int i = 1; i < N; i++) {   // so the loop can start at 1
        if (a[i] > max) {
            max = a[i];             // a new best
        }
    }
    printf("max = %d\n", max);
    return 0;
}
