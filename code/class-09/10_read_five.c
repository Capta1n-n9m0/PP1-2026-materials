/*
 * 10_read_five.c  -  CSCI 1101, class 9
 *
 * What it does: Reads 5 whole numbers from the keyboard into an array, then
 *   prints them back. Type 5 numbers with spaces between them and press
 *   Enter, for example: 4 8 15 16 23
 *
 * Compile:  gcc -Wall 10_read_five.c -o read_five
 * Run:      ./read_five        (in Windows PowerShell:  .\read_five)
 *
 * Try:
 *   1. Run it and type the numbers on five separate lines. Does it still
 *      work?
 *   2. Print them back in one line with a space between them.
 *   3. Remove the & in the scanf. Compile with -Wall. What does gcc say?
 */
#include <stdio.h>

int main(void) {
    int a[5];

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);   // &a[i]: put the number INTO box i. The & is needed.
    }

    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
