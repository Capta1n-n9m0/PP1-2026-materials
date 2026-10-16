/*
 * 21_task_even_count.c  -  CSCI 1101, class 9
 *
 * What it does: Solution of task 3: counts how many values in the array are
 *   even.
 *
 * Compile:  gcc -Wall 21_task_even_count.c -o task_even_count
 * Run:      ./task_even_count        (in Windows PowerShell:  .\task_even_count)
 *
 * Try:
 *   1. Count the odd values too.
 *   2. Print the even values, not just how many.
 */
#include <stdio.h>

int main(void) {
    int a[8] = {4, 7, 10, 3, 6, 6, 1, 12};

    int even = 0;
    for (int i = 0; i < 8; i++) {
        if (a[i] % 2 == 0) {
            even++;
        }
    }
    printf("even values: %d\n", even);
    return 0;
}
