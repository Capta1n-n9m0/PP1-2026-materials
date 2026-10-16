/*
 * 20_task_double_all.c  -  CSCI 1101, class 9
 *
 * What it does: Solution of task 2: doubles every value IN the array with
 *   one loop, then prints the array with a second loop.
 *
 * Compile:  gcc -Wall 20_task_double_all.c -o task_double_all
 * Run:      ./task_double_all        (in Windows PowerShell:  .\task_double_all)
 *
 * Try:
 *   1. Add 1 to every value instead.
 *   2. Make every negative value 0 (use an if inside the loop). Put some
 *      negative values in the list first.
 */
#include <stdio.h>

int main(void) {
    int a[6] = {3, 8, 1, 5, 9, 2};

    for (int i = 0; i < 6; i++) {
        a[i] = a[i] * 2;
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
