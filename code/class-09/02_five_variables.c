/*
 * 02_five_variables.c  -  CSCI 1101, class 9
 *
 * What it does: Five quiz scores in five separate variables, WITHOUT an
 *   array. It prints the five scores and their average.
 *
 * Compile:  gcc -Wall 02_five_variables.c -o five_variables
 * Run:      ./five_variables        (in Windows PowerShell:  .\five_variables)
 *
 * Try:
 *   1. Add a sixth score. How many lines did you change?
 *   2. Imagine 35 students. How many variables would you need?
 */
#include <stdio.h>

int main(void) {
    int s0 = 7, s1 = 9, s2 = 6, s3 = 10, s4 = 8;

    printf("%d %d %d %d %d\n", s0, s1, s2, s3, s4);
    int sum = s0 + s1 + s2 + s3 + s4;
    printf("average: %.1f\n", sum / 5.0);
    return 0;
}
