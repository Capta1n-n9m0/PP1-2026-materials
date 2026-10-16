/*
 * 22_length_loop.c  -  CSCI 1101, class 11
 *
 * What it does: The length of a string, counted by hand: walk along the
 *   boxes until the \0. The same loop as the recap, with \0 in place of the
 *   0.
 *
 * Compile:  gcc -Wall 22_length_loop.c -o length_loop
 * Run:      ./length_loop        (in Windows PowerShell:  .\length_loop)
 *
 * Try:
 *   1. Change the word and run it again.
 *   2. What is the length of the empty string ""?
 *   3. Write the loop as a for loop.
 */
#include <stdio.h>

int main(void) {
    char s[] = "cat";
    int len = 0;

    while (s[len] != '\0') {
        len++;
    }
    printf("length of %s: %d\n", s, len);
    return 0;
}
