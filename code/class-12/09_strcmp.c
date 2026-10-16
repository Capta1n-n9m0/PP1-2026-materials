/*
 * 09_strcmp.c  -  CSCI 1101, class 12
 *
 * What it does: strcmp compares two strings letter by letter. It gives 0
 *   when they are equal, a negative number when the first comes first in
 *   the dictionary order of the computer, a positive number when it comes
 *   later.
 *
 * Compile:  gcc -Wall 09_strcmp.c -o strcmp
 * Run:      ./strcmp        (in Windows PowerShell:  .\strcmp)
 *
 * Try:
 *   1. Compare "cat" and "car". Which is first? Why?
 *   2. Compare "apple" and "Apple". Capital letters come before small ones.
 *   3. Compare "cat" and "cats".
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    // Only the SIGN matters: negative, zero or positive.
    // Here it prints -1, 1 and 0, but another computer may print
    // other negative and positive numbers.
    printf("%d\n", strcmp("apple", "banana"));  // negative: apple first
    printf("%d\n", strcmp("banana", "apple"));  // positive: banana later
    printf("%d\n", strcmp("apple", "apple"));   // zero: equal
    printf("%d\n", strcmp("Zoo", "apple"));     // negative: capitals come first
    return 0;
}
