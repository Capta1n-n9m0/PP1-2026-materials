/*
 * 16_bubble_sort.c  -  CSCI 1101, class 10
 *
 * What it does: The whole bubble sort: the pass from 15_one_pass.c,
 *   repeated N - 1 times. The array is printed after every pass, so you can
 *   watch the large numbers bubble to the end.
 *
 * Compile:  gcc -Wall 16_bubble_sort.c -o bubble_sort
 * Run:      ./bubble_sort        (in Windows PowerShell:  .\bubble_sort)
 *
 * Try:
 *   1. Sort {9, 7, 5, 3, 1}. How many passes change something?
 *   2. Sort {1, 2, 3, 4, 5}. Does any pass change something?
 *   3. Change > to < in the if. What order do you get?
 */
#include <stdio.h>

#define N 5

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(void) {
    int a[N] = {5, 3, 8, 4, 2};
    // N numbers need at most N - 1 passes
    for (int pass = 1; pass < N; pass++) {
        // after each pass one more number is in its place at the end,
        // so each pass can stop one pair earlier: j < N - pass
        for (int j = 0; j < N - pass; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        printf("pass %d: ", pass);
        print_array(a, N);
    }
    return 0;
}
