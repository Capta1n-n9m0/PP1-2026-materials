/*
 * 04_count_while.c  -  CSCI 1101, class 5
 *
 * What it does: Counts from 1 to 3 with a while loop, then prints Done.
 *   This is the first loop we typed in class.
 *
 * Compile:  gcc -Wall 04_count_while.c -o count_while
 * Run:      ./count_while        (in Windows PowerShell:  .\count_while)
 *
 * Try:
 *   1. Change 3 to 10. What is printed?
 *   2. Change <= to <. What is the last number now? Why?
 *   3. Start count at 0 instead of 1.
 *   4. Move the line printf("Done\n"); inside the loop, under count++. What
 *      changes?
 */
#include <stdio.h>

int main(void) {
    int count = 1;                 // START: a box called count, holding 1

    while (count <= 3) {           // CHECK: is count at most 3?
        printf("%d\n", count);     // BODY: the work that is repeated
        count++;                   // UPDATE: add 1 to count
    }                              // from here C goes BACK UP to the check

    printf("Done\n");              // runs once, after the loop has ended
    return 0;
}
