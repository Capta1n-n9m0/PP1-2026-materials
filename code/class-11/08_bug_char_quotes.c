// expect: error   (this file has a bug on purpose: see below)
/*
 * 08_bug_char_quotes.c  -  CSCI 1101, class 11
 *
 * What it does: A common mistake: a char written with double quotes. "A" is
 *   a string, not one character, so gcc refuses to compile this file.
 *
 * Compile:  gcc -Wall 08_bug_char_quotes.c -o bug_char_quotes
 * Run:      ./bug_char_quotes        (in Windows PowerShell:  .\bug_char_quotes)
 *
 * Try:
 *   1. Read the error. Which line does it name?
 *   2. Fix it with single quotes and run the program.
 *   3. Write char c = 'AB'; and read what gcc says now.
 */
#include <stdio.h>

int main(void) {
    char c = "A";        // WRONG: double quotes make a string. Use 'A'.
    printf("%c\n", c);
    return 0;
}
