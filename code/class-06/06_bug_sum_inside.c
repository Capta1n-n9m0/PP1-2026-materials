// expect: error   (this file has a bug on purpose: see below)
/*
 * 06_bug_sum_inside.c
 *
 * THIS PROGRAM HAS A BUG ON PURPOSE. It does NOT compile.
 * The box "sum" is made inside the loop. A box made inside { } is gone after the }.
 * gcc says: error: 'sum' undeclared (first use in this function)
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 06_bug_sum_inside.c -o sum_inside
 *     ./sum_inside          (in Windows PowerShell: .\sum_inside)
 *
 * Try:
 *   1. Compile it and read the error. Which line does it point at?
 *   2. Fix it: move int sum = 0; up, above the for line. Compile and run. You should see Sum = 15.
 */
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        // THE BUG: sum is made here, inside the braces of the loop.
        int sum = 0;
        sum += i;
    }

    // Here, after the loop, sum does not exist any more. The error points at this line.
    printf("Sum = %d\n", sum);
    return 0;
}
