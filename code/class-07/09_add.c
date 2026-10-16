/*
 * 09_add.c  -  CSCI 1101, class 7
 *
 * What it does: A function with two parameters. The first value goes into
 *   a, the second into b.
 *
 * Compile:  gcc -Wall 09_add.c -o add
 * Run:      ./add        (in Windows PowerShell:  .\add)
 *
 * Try:
 *   1. Call add(10, -3). What does it print?
 *   2. Write int subtract(int a, int b). Does subtract(10, 3) give the same
 *      as subtract(3, 10)?
 */
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    printf("%d\n", add(2, 3));
    printf("%d\n", add(10, 20));
    return 0;
}
