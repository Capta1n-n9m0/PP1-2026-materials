/*
 * 14_swap.c  -  CSCI 1101, class 10
 *
 * What it does: Swapping two elements the right way, with a third box
 *   called temp. It prints 7 3.
 *
 * Compile:  gcc -Wall 14_swap.c -o swap
 * Run:      ./swap        (in Windows PowerShell:  .\swap)
 *
 * Try:
 *   1. Swap a[0] and a[3] in an array of 4 numbers.
 *   2. Swap the same two elements twice. What do you get?
 */
#include <stdio.h>

int main(void) {
    int a[2] = {3, 7};
    int temp = a[0];   // 1. save the 3 in a safe place
    a[0] = a[1];       // 2. now a[0] can take the 7
    a[1] = temp;       // 3. and a[1] gets the saved 3
    printf("%d %d\n", a[0], a[1]);
    return 0;
}
