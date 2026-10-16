/*
 * 15_bug_le.c  -  CSCI 1101, class 9
 *
 * What it does: THIS PROGRAM HAS A BUG, on purpose. The loop says i <= 5,
 *   so it reads a[5]: a box that is NOT in the array. C does not stop you.
 *   The last number printed is whatever happens to be in memory there.
 *
 * Compile:  gcc -Wall 15_bug_le.c -o bug_le
 * Run:      ./bug_le        (in Windows PowerShell:  .\bug_le)
 *
 * Try:
 *   1. Run it two or three times. Is the last number always the same?
 *   2. Fix it: i < 5.
 *   3. Compile with gcc -Wall -O2 15_bug_le.c -o bug_le (O is a capital
 *      letter o). Does gcc see the bug now?
 */
#include <stdio.h>

int main(void) {
    int a[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i <= 5; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
