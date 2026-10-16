/*
 * 04_declare.c  -  CSCI 1101, class 9
 *
 * What it does: Makes an array of 5 ints, puts a value into three of its
 *   boxes one at a time, and prints them. The first box is a[0], the last
 *   is a[4].
 *
 * Compile:  gcc -Wall 04_declare.c -o declare
 * Run:      ./declare        (in Windows PowerShell:  .\declare)
 *
 * Try:
 *   1. Put 99 into a[4] and print it.
 *   2. Change a[1] to a[1] + 5 and print it again.
 *   3. Print a[0] + a[2]. Predict first.
 */
#include <stdio.h>

int main(void) {
    int a[5];       // an array called a: 5 boxes, a[0] to a[4]

    a[0] = 10;      // the FIRST box is number 0
    a[1] = 20;
    a[4] = 50;      // the LAST box is number 4, not 5

    printf("first: %d\n", a[0]);
    printf("second: %d\n", a[1]);
    printf("last: %d\n", a[4]);
    return 0;
}
