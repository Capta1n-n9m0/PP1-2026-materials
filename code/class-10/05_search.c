/*
 * 05_search.c  -  CSCI 1101, class 10
 *
 * What it does: Linear search, written in main: look at every element, one
 *   by one, until the wanted number is found. pos starts at -1, which means
 *   not found yet.
 *
 * Compile:  gcc -Wall 05_search.c -o search
 * Run:      ./search        (in Windows PowerShell:  .\search)
 *
 * Try:
 *   1. Change target to 42. What is printed?
 *   2. Change target to 7. What is printed?
 *   3. Remove the break. Does the answer change? Does the loop do more
 *      work?
 */
#include <stdio.h>

#define N 6

int main(void) {
    int a[N] = {4, 8, 15, 16, 23, 42};
    int target = 23;
    int pos = -1;          // -1 is not a real index: it means "not found yet"

    for (int i = 0; i < N; i++) {
        if (a[i] == target) {
            pos = i;       // remember WHERE we found it
            break;         // found: no need to look further
        }
    }

    if (pos == -1) {
        printf("%d not found\n", target);
    } else {
        printf("%d found at index %d\n", target, pos);
    }
    return 0;
}
