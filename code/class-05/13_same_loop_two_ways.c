/*
 * 13_same_loop_two_ways.c  -  CSCI 1101, class 5
 *
 * What it does: The same counting, written with while and then with for.
 *   Both lines of output are 1 2 3 4 5.
 *
 * Compile:  gcc -Wall 13_same_loop_two_ways.c -o same_loop_two_ways
 * Run:      ./same_loop_two_ways        (in Windows PowerShell:  .\same_loop_two_ways)
 *
 * Try:
 *   1. Find the four parts (start, check, body, update) in each loop.
 *   2. Change both loops so that they print 1 to 8.
 *   3. After the while loop, print i. After the for loop, try to print j.
 *      Which one compiles?
 */
#include <stdio.h>

int main(void) {
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    for (int j = 1; j <= 5; j++) {
        printf("%d ", j);
    }
    printf("\n");
    return 0;
}
