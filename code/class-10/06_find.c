/*
 * 06_find.c  -  CSCI 1101, class 10
 *
 * What it does: Linear search as a function: find returns the index of the
 *   first element equal to target, or -1 if there is none. main searches
 *   for 16 and for 7.
 *
 * Compile:  gcc -Wall 06_find.c -o find
 * Run:      ./find        (in Windows PowerShell:  .\find)
 *
 * Try:
 *   1. Search for 4 and for 42, the first and the last element.
 *   2. Put 16 in the array twice. Which index does find return?
 *   3. Read the target with scanf and search for it.
 */
#include <stdio.h>

// Returns the index of target in a, or -1 if it is not there.
int find(int a[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            return i;      // found: return ends the function at once
        }
    }
    return -1;             // only reached after checking ALL elements
}

int main(void) {
    int a[6] = {4, 8, 15, 16, 23, 42};
    printf("find 16: %d\n", find(a, 6, 16));
    printf("find 7: %d\n", find(a, 6, 7));
    return 0;
}
