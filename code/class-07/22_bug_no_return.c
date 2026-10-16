// expect: warning   (this file has a bug on purpose: see below)
/*
 * 22_bug_no_return.c  -  CSCI 1101, class 7
 *
 * What it does: THIS PROGRAM HAS A BUG ON PURPOSE. max has no return for
 *   the case where a is not larger. gcc warns: control reaches end of
 *   non-void function. It still builds, and max(3, 9) gives a wrong answer.
 *
 * Compile:  gcc -Wall 22_bug_no_return.c -o bug_no_return
 * Run:      ./bug_no_return        (in Windows PowerShell:  .\bug_no_return)
 *
 * Try:
 *   1. Compile with -Wall and read the warning. Which line does it point
 *      at?
 *   2. Run it. Is max(3, 9) right?
 *   3. Fix it: add return b; before the closing brace of max.
 */
#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    }
}

int main(void) {
    printf("max(9, 3) = %d\n", max(9, 3));
    printf("max(3, 9) = %d\n", max(3, 9));
    return 0;
}
