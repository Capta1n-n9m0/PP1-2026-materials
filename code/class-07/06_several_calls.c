/*
 * 06_several_calls.c  -  CSCI 1101, class 7
 *
 * What it does: Calls inside calls: two calls added up, a call whose
 *   argument is another call, and a call whose argument is a sum.
 *
 * Compile:  gcc -Wall 06_several_calls.c -o several_calls
 * Run:      ./several_calls        (in Windows PowerShell:  .\several_calls)
 *
 * Try:
 *   1. Before you run it, predict all three lines.
 *   2. Add a line that prints square(square(3)).
 *   3. Change int a = 3; to int a = 5; Which lines change?
 */
#include <stdio.h>

int square(int x) {
    return x * x;
}

int main(void) {
    int a = 3;
    printf("%d\n", square(a) + square(4));
    printf("%d\n", square(square(2)));
    printf("%d\n", square(a + 1));
    return 0;
}
