/*
 * 06_case_by_hand.c  -  CSCI 1101, class 11
 *
 * What it does: Turning a small letter into a capital by hand: subtract a,
 *   add A. The distance between a small letter and its capital is always
 *   32.
 *
 * Compile:  gcc -Wall 06_case_by_hand.c -o case_by_hand
 * Run:      ./case_by_hand        (in Windows PowerShell:  .\case_by_hand)
 *
 * Try:
 *   1. Turn the capital Q into a small q the same way (the other way
 *      round).
 *   2. What happens if c is the digit 5? Try it.
 *   3. Print the difference a - A with %d.
 */
#include <stdio.h>

int main(void) {
    char c = 'g';
    // c - 'a' is the place of g in the alphabet (6); + 'A' moves it to the capitals
    char big = c - 'a' + 'A';

    printf("%c becomes %c\n", c, big);
    printf("%d becomes %d\n", c, big);   // 103 and 71: 32 apart
    return 0;
}
