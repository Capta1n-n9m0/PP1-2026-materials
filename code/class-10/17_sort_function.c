/*
 * 17_sort_function.c  -  CSCI 1101, class 10
 *
 * What it does: Bubble sort as a function, bubble_sort(a, n). It changes
 *   the array of main, like double_all did. Eight exam marks, sorted from
 *   low to high.
 *
 * Compile:  gcc -Wall 17_sort_function.c -o sort_function
 * Run:      ./sort_function        (in Windows PowerShell:  .\sort_function)
 *
 * Try:
 *   1. Sort an array of 3 numbers with the same function.
 *   2. Sort from high to low: change one character.
 *   3. After sorting, print the smallest and the largest mark. Which
 *      indexes are they at?
 */
#include <stdio.h>

#define N 8

void bubble_sort(int a[], int n) {
    for (int pass = 1; pass < n; pass++) {
        for (int j = 0; j < n - pass; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(void) {
    int marks[N] = {72, 95, 61, 88, 79, 54, 90, 67};
    print_array(marks, N);
    bubble_sort(marks, N);
    print_array(marks, N);
    return 0;
}
