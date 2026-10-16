/*
 * 26_task_cube.c  -  CSCI 1101, class 7
 *
 * What it does: Solution of task 1: int cube(int x) gives back x times x
 *   times x. main reads a number and prints its cube.
 *
 * Compile:  gcc -Wall 26_task_cube.c -o task_cube
 * Run:      ./task_cube        (in Windows PowerShell:  .\task_cube)
 *
 * Try:
 *   1. Try 3, then -2, then 0.
 *   2. Write cube with the help of square: return x * square(x);
 */
#include <stdio.h>

int cube(int x) {
    return x * x * x;
}

int main(void) {
    int n;
    printf("Number: ");
    scanf("%d", &n);
    printf("Cube: %d\n", cube(n));
    return 0;
}
