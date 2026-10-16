/*
 * 13_bug_swap_no_temp.c  -  CSCI 1101, class 10
 *
 * What it does: A swap that does not work: a[0] = a[1]; then a[1] = a[0];
 *   Both elements end up 7: the 3 was lost on the first line. gcc does not
 *   warn.
 *
 * Compile:  gcc -Wall 13_bug_swap_no_temp.c -o bug_swap_no_temp
 * Run:      ./bug_swap_no_temp        (in Windows PowerShell:  .\bug_swap_no_temp)
 *
 * Try:
 *   1. Run it and look at both elements.
 *   2. Trace it on paper: what is a[0] after the first line?
 *   3. Fix it with a third box, as in 14_swap.c.
 */
#include <stdio.h>

int main(void) {
    int a[2] = {3, 7};
    a[0] = a[1];
    a[1] = a[0];
    printf("%d %d\n", a[0], a[1]);
    return 0;
}
