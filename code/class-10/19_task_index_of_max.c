/*
 * 19_task_index_of_max.c  -  CSCI 1101, class 10
 *
 * What it does: Solution of the task: int index_of_max(int a[], int n)
 *   returns the index of the largest element. Goals scored in six matches;
 *   the best match is index 3.
 *
 * Compile:  gcc -Wall 19_task_index_of_max.c -o task_index_of_max
 * Run:      ./task_index_of_max        (in Windows PowerShell:  .\task_index_of_max)
 *
 * Try:
 *   1. Try the task yourself first, before you read this file.
 *   2. Make two matches share the most goals. Which index is returned?
 *   3. Use index_of_max to print the goals of the best match.
 */
#include <stdio.h>

int index_of_max(int a[], int n) {
    int pos = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[pos]) {
            pos = i;
        }
    }
    return pos;
}

int main(void) {
    int goals[6] = {1, 0, 3, 4, 2, 1};
    printf("best match: index %d\n", index_of_max(goals, 6));
    return 0;
}
