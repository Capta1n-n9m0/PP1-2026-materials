/*
 * 08_count.c  -  CSCI 1101, class 10
 *
 * What it does: Counting: how many times does a value appear? Ten dice
 *   rolls, and a function that counts how many are 6.
 *
 * Compile:  gcc -Wall 08_count.c -o count
 * Run:      ./count        (in Windows PowerShell:  .\count)
 *
 * Try:
 *   1. Count the 1s instead of the 6s.
 *   2. Print how many times each number from 1 to 6 appears, with a loop
 *      around count.
 *   3. Write int count_above(int a[], int n, int limit).
 */
#include <stdio.h>

#define N 10

int count(int a[], int n, int value) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == value) {
            c++;
        }
    }
    return c;
}

int main(void) {
    int rolls[N] = {3, 6, 2, 6, 1, 6, 4, 2, 5, 6};
    printf("sixes: %d\n", count(rolls, N, 6));
    printf("twos: %d\n", count(rolls, N, 2));
    return 0;
}
