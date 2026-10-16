/*
 * 04_double_all.c  -  CSCI 1101, class 10
 *
 * What it does: A function that doubles every element of an array. Unlike
 *   class 8, where double_it could not change x, this function DOES change
 *   the array in main.
 *
 * Compile:  gcc -Wall 04_double_all.c -o double_all
 * Run:      ./double_all        (in Windows PowerShell:  .\double_all)
 *
 * Try:
 *   1. Before you run it, write down the two lines you expect.
 *   2. Call double_all twice. What is printed?
 *   3. Write void add_to_all(int a[], int n, int k) that adds k to every
 *      element.
 */
#include <stdio.h>

// An int parameter is a copy (class 8). An array is NOT copied:
// the function works on the caller's own elements.
// So a change made here is seen in main. (Why: pointers, later.)
void double_all(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = a[i] * 2;
    }
}

int main(void) {
    int a[3] = {1, 2, 3};
    printf("before: %d %d %d\n", a[0], a[1], a[2]);
    double_all(a, 3);
    printf("after:  %d %d %d\n", a[0], a[1], a[2]);
    return 0;
}
