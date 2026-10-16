/*
 * 11_min_max.c  -  CSCI 1101, class 10
 *
 * What it does: The smallest and the largest in one loop, as two functions:
 *   min_of and max_of. A week of temperatures.
 *
 * Compile:  gcc -Wall 11_min_max.c -o min_max
 * Run:      ./min_max        (in Windows PowerShell:  .\min_max)
 *
 * Try:
 *   1. Add an eighth day colder than all the others.
 *   2. Print the difference between the warmest and the coldest day.
 *   3. Write double average(int a[], int n) and print the average too.
 */
#include <stdio.h>

#define N 7

int min_of(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int max_of(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main(void) {
    int temps[N] = {14, 17, 11, 19, 16, 9, 13};
    printf("coldest: %d\n", min_of(temps, N));
    printf("warmest: %d\n", max_of(temps, N));
    return 0;
}
