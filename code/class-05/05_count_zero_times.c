/*
 * 05_count_zero_times.c  -  CSCI 1101, class 5
 *
 * What it does: The same loop, but count starts at 10. The check is false
 *   the very first time, so the body runs zero times. Only Done is printed.
 *
 * Compile:  gcc -Wall 05_count_zero_times.c -o count_zero_times
 * Run:      ./count_zero_times        (in Windows PowerShell:  .\count_zero_times)
 *
 * Try:
 *   1. Before you run it: what will it print?
 *   2. Change 10 to 3. How many numbers are printed now?
 *   3. Change 10 to 4. And now?
 */
#include <stdio.h>

int main(void) {
    int count = 10;

    while (count <= 3) {
        printf("%d\n", count);
        count++;
    }

    printf("Done\n");
    return 0;
}
