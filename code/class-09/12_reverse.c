/*
 * 12_reverse.c  -  CSCI 1101, class 9
 *
 * What it does: Reads 5 numbers and prints them backwards. The second loop
 *   starts at the last index, 4, and goes down to 0. Try the input 1 2 3 4
 *   5
 *
 * Compile:  gcc -Wall 12_reverse.c -o reverse
 * Run:      ./reverse        (in Windows PowerShell:  .\reverse)
 *
 * Try:
 *   1. Change i >= 0 to i > 0. Which number is missing now? Why?
 *   2. Print only the numbers at even positions: 0, 2, 4. (Hint: i += 2.)
 */
#include <stdio.h>

int main(void) {
    int a[5];

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Backwards:");
    for (int i = 4; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}
