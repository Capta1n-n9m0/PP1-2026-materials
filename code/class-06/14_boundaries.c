/*
 * 14_boundaries.c
 *
 * Four loops that look almost the same. Count the numbers that each one prints.
 * Two print exactly 10 numbers. One prints 11. One prints 9.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 14_boundaries.c -o boundaries
 *     ./boundaries          (in Windows PowerShell: .\boundaries)
 *
 * Try:
 *   1. Run it and count the numbers in each line.
 *   2. Write a fifth loop that prints 10 9 8 7 6 5 4 3 2 1.
 *   3. Write a loop that prints exactly 100 numbers. Check the first one and the last one.
 */
#include <stdio.h>

int main(void) {
    // 0 to 9: ten numbers.
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 1 to 10: ten numbers.
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 0 to 10: ELEVEN numbers. One too many.
    for (int i = 0; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 1 to 9: NINE numbers. One too few.
    for (int i = 1; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
