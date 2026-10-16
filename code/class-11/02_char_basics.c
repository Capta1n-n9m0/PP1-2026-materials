/*
 * 02_char_basics.c  -  CSCI 1101, class 11
 *
 * What it does: Three char variables: a letter, a digit and a space. Each
 *   one holds exactly one character, written in single quotes, and is
 *   printed with %c.
 *
 * Compile:  gcc -Wall 02_char_basics.c -o char_basics
 * Run:      ./char_basics        (in Windows PowerShell:  .\char_basics)
 *
 * Try:
 *   1. Add a fourth char that holds a question mark and print it.
 *   2. Print grade with %d instead of %c. What number do you see?
 *   3. Write char grade = "A"; with double quotes. Read what gcc says.
 */
#include <stdio.h>

int main(void) {
    char grade = 'A';     // one character, in SINGLE quotes
    char digit = '7';     // the character 7, not the number 7
    char space = ' ';     // a space is a character too

    // %c prints one character; the [ ] only show where each one starts and ends
    printf("[%c] [%c] [%c]\n", grade, digit, space);
    return 0;
}
