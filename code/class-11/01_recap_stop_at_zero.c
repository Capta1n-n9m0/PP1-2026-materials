/*
 * 01_recap_stop_at_zero.c  -  CSCI 1101, class 11
 *
 * What it does: The recap question from the start of class: a loop that
 *   walks along an array and stops when it meets a 0. It prints 4 8 15 16
 *   23 and then count: 5. Strings work exactly like this, with a special
 *   character in place of the 0.
 *
 * Compile:  gcc -Wall 01_recap_stop_at_zero.c -o recap_stop_at_zero
 * Run:      ./recap_stop_at_zero        (in Windows PowerShell:  .\recap_stop_at_zero)
 *
 * Try:
 *   1. Before you run it, say what it prints.
 *   2. Put the 0 in box 2 instead (and 15 in box 5). What is printed now?
 *   3. Why is this loop a while loop and not a for loop from 0 to 6?
 */
#include <stdio.h>

int main(void) {
    // the last box holds 0: it marks the end of the useful numbers
    int a[6] = {4, 8, 15, 16, 23, 0};
    int i = 0;

    // walk along the array until we meet the 0
    while (a[i] != 0) {
        printf("%d ", a[i]);
        i++;
    }
    // i stopped on the box that holds 0, so i is how many numbers came before it
    printf("\ncount: %d\n", i);
    return 0;
}
