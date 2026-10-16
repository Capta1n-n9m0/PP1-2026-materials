/*
 * 11_average.c  -  CSCI 1101, class 7
 *
 * What it does: Two average functions. average_int works with int, so the
 *   .5 is thrown away: integer division again. average works with double
 *   and keeps it.
 *
 * Compile:  gcc -Wall 11_average.c -o average
 * Run:      ./average        (in Windows PowerShell:  .\average)
 *
 * Try:
 *   1. Call both with 7 and 9. Now they agree. Why?
 *   2. In average, change / 2 to / 2.0. Does anything change?
 *   3. Change the %.2f to %d. Compile with -Wall and read the warning.
 */
#include <stdio.h>

int average_int(int a, int b) {
    return (a + b) / 2;
}

double average(double a, double b) {
    return (a + b) / 2;
}

int main(void) {
    printf("int version: %d\n", average_int(7, 8));
    printf("double version: %.2f\n", average(7, 8));
    return 0;
}
