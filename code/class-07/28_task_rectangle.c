/*
 * 28_task_rectangle.c  -  CSCI 1101, class 7
 *
 * What it does: Solution of task 3: print_rectangle(width, height) prints a
 *   rectangle of stars. It calls print_stars once for every row: a function
 *   that calls a function.
 *
 * Compile:  gcc -Wall 28_task_rectangle.c -o task_rectangle
 * Run:      ./task_rectangle        (in Windows PowerShell:  .\task_rectangle)
 *
 * Try:
 *   1. Print a 10 by 2 rectangle.
 *   2. What does print_rectangle(4, 0) print? Why?
 *   3. Write print_triangle(n): rows of 1, 2, 3, ... n stars.
 */
#include <stdio.h>

void print_stars(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

void print_rectangle(int width, int height) {
    for (int row = 0; row < height; row++) {
        print_stars(width);
    }
}

int main(void) {
    print_rectangle(6, 3);
    return 0;
}
