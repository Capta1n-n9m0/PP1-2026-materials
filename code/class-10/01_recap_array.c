/*
 * 01_recap_array.c  -  CSCI 1101, class 10
 *
 * What it does: The recap question from the start of class: an array of
 *   five numbers, one element printed, then the sum made by a loop. It
 *   prints 8 and then sum = 14.
 *
 * Compile:  gcc -Wall 01_recap_array.c -o recap_array
 * Run:      ./recap_array        (in Windows PowerShell:  .\recap_array)
 *
 * Try:
 *   1. Before you run it, say what it prints.
 *   2. Print a[2]. Which number is it?
 *   3. Change the loop to add only the elements at even positions (0, 2,
 *      4).
 */
#include <stdio.h>

#define N 5

int main(void) {
    int a[N] = {3, 1, 4, 1, 5};
    printf("%d\n", a[0] + a[4]);

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += a[i];
    }
    printf("sum = %d\n", sum);
    return 0;
}
