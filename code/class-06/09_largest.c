/*
 * 09_largest.c
 *
 * Reads n numbers and prints the largest one.
 * The box "largest" remembers the largest number seen so far.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 09_largest.c -o largest
 *     ./largest          (in Windows PowerShell: .\largest)
 *
 * Try:
 *   1. Run it, type 5, then 3 9 -2 14 6. You should see Largest: 14.
 *   2. Run it, type 3, then -5 -2 -9. You should see Largest: -2.
 *   3. Change it to find the SMALLEST number.
 *   4. Why do we not start with largest = 0? Try it with -5 -2 -9 and see.
 */
#include <stdio.h>

int main(void) {
    int n, value, largest;

    printf("How many values? ");
    scanf("%d", &n);
    scanf("%d", &largest);      // the largest so far

    // The first number is already read, so this loop reads the other n - 1 numbers.
    for (int i = 1; i < n; i++) {
        scanf("%d", &value);
        // Is the new number larger than the largest so far? Then remember it.
        if (value > largest) {
            largest = value;
        }
    }
    printf("Largest: %d\n", largest);
    return 0;
}
