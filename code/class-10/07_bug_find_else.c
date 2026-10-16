// expect: warning   (this file has a bug on purpose: see below)
/*
 * 07_bug_find_else.c  -  CSCI 1101, class 10
 *
 * What it does: A common mistake in search: the else returns -1 inside the
 *   loop, so only the first element is ever checked. 16 is in the array,
 *   but find says -1. gcc warns too.
 *
 * Compile:  gcc -Wall 07_bug_find_else.c -o bug_find_else
 * Run:      ./bug_find_else        (in Windows PowerShell:  .\bug_find_else)
 *
 * Try:
 *   1. Compile it with -Wall and read the warning.
 *   2. Run it: find 16 says -1. Why?
 *   3. Fix it: delete the else, and put return -1; after the loop.
 */
#include <stdio.h>

int find(int a[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            return i;
        } else {
            return -1;
        }
    }
}

int main(void) {
    int a[6] = {4, 8, 15, 16, 23, 42};
    printf("find 4: %d\n", find(a, 6, 4));
    printf("find 16: %d\n", find(a, 6, 16));
    return 0;
}
