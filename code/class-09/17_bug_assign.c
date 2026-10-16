// expect: error   (this file has a bug on purpose: see below)
/*
 * 17_bug_assign.c  -  CSCI 1101, class 9
 *
 * What it does: THIS PROGRAM DOES NOT COMPILE, on purpose. It tries to copy
 *   one array into another with b = a; C does not allow that.
 *
 * Compile:  gcc -Wall 17_bug_assign.c -o bug_assign
 * Run:      ./bug_assign        (in Windows PowerShell:  .\bug_assign)
 *
 * Try:
 *   1. Compile it and read the error.
 *   2. Fix it with a loop: b[i] = a[i]; (see 18_copy_loop.c).
 */
#include <stdio.h>

int main(void) {
    int a[3] = {1, 2, 3};
    int b[3];

    b = a;
    printf("%d %d %d\n", b[0], b[1], b[2]);
    return 0;
}
