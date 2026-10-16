/*
 * 16_bug_index_5.c  -  CSCI 1101, class 9
 *
 * What it does: THIS PROGRAM HAS A BUG, on purpose. It prints a[5] of an
 *   array of 5, but the last box is a[4]. It compiles with no warning and
 *   prints some number that is not in the array.
 *
 * Compile:  gcc -Wall 16_bug_index_5.c -o bug_index_5
 * Run:      ./bug_index_5        (in Windows PowerShell:  .\bug_index_5)
 *
 * Try:
 *   1. Compile it with gcc -Wall -O2 16_bug_index_5.c -o bug_index_5 (O is
 *      a capital letter o). Read the warning.
 *   2. Fix it: the last box is a[4].
 */
#include <stdio.h>

int main(void) {
    int a[5] = {10, 20, 30, 40, 50};

    printf("last: %d\n", a[5]);
    return 0;
}
