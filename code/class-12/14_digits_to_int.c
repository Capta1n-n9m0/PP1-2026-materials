/*
 * 14_digits_to_int.c  -  CSCI 1101, class 12
 *
 * What it does: Turns the text "2026" into the number 2026 by hand: for
 *   each digit character, multiply what you have by 10 and add the digit.
 *   Then it adds 1, to show it is a real number now.
 *
 * Compile:  gcc -Wall 14_digits_to_int.c -o digits_to_int
 * Run:      ./digits_to_int        (in Windows PowerShell:  .\digits_to_int)
 *
 * Try:
 *   1. Change the text to "907". Trace it on paper first.
 *   2. What happens with "12a"? Stop the loop when s[i] is not a digit.
 *   3. Put the loop in a function int to_int(char s[]).
 */
#include <stdio.h>

int main(void) {
    char s[10] = "2026";     // text: the characters '2' '0' '2' '6'
    int n = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        // s[i] - '0' turns the character '6' into the number 6 (class 11).
        // n * 10 moves what we have one place to the left.
        n = n * 10 + (s[i] - '0');
    }
    printf("n = %d\n", n);
    printf("n + 1 = %d\n", n + 1);   // a real number: we can add to it
    return 0;
}
