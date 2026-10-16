/*
 * 11_ctype_true.c  -  CSCI 1101, class 11
 *
 * What it does: What do the is... functions give back? 0 for "no", and some
 *   number that is not 0 for "yes". It is not always 1: here isalpha gives
 *   2. So write if (isdigit(c)), never if (isdigit(c) == 1).
 *
 * Compile:  gcc -Wall 11_ctype_true.c -o ctype_true
 * Run:      ./ctype_true        (in Windows PowerShell:  .\ctype_true)
 *
 * Try:
 *   1. Print isupper of a capital and of a small letter.
 *   2. Print islower of the letter b. Is it 1?
 *   3. Write if (isalpha('x') == 1) and see what happens.
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    // "yes" is any number that is not 0, "no" is 0
    printf("%d\n", isdigit('7'));
    printf("%d\n", isalpha('x'));     // 2 here, not 1
    printf("%d\n", isdigit('x'));
    return 0;
}
