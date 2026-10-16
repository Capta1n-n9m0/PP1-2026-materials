/*
 * 03_sum_array.c  -  CSCI 1101, class 10
 *
 * What it does: A function that adds up the elements of an array and
 *   returns the sum. main uses it to print the sum and the average of five
 *   quiz marks.
 *
 * Compile:  gcc -Wall 03_sum_array.c -o sum_array
 * Run:      ./sum_array        (in Windows PowerShell:  .\sum_array)
 *
 * Try:
 *   1. Add a sixth mark. Which two numbers must you change?
 *   2. Print the average with %.1f instead of %.2f.
 *   3. Write a function int count_even(int a[], int n) and call it.
 */
#include <stdio.h>

#define N 5

int sum_array(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main(void) {
    int marks[N] = {7, 9, 6, 10, 8};
    int total = sum_array(marks, N);
    printf("sum = %d\n", total);
    printf("average = %.2f\n", (double) total / N);
    return 0;
}
