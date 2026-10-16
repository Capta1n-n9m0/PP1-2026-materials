/*
 * 09_read_char.c  -  CSCI 1101, class 11
 *
 * What it does: Reads one character and says whether it is a small letter,
 *   a capital, a digit or something else, by comparing it with the first
 *   and the last character of each group.
 *
 * Compile:  gcc -Wall 09_read_char.c -o read_char
 * Run:      ./read_char        (in Windows PowerShell:  .\read_char)
 *
 * Try:
 *   1. Run it with a, Q, 5 and ? as input.
 *   2. Remove the space before %c in the scanf. Does it still work here?
 *   3. Add a group: say "space" when the character is a space. (scanf with
 *      " %c" skips spaces: why does that make it hard?)
 */
#include <stdio.h>

int main(void) {
    char c;
    printf("Type one character: ");
    scanf(" %c", &c);     // the space before %c skips spaces and Enter keys

    // the letters and the digits have codes in a row, so a range test works
    if (c >= 'a' && c <= 'z') {
        printf("%c is a small letter\n", c);
    } else if (c >= 'A' && c <= 'Z') {
        printf("%c is a capital letter\n", c);
    } else if (c >= '0' && c <= '9') {
        printf("%c is a digit\n", c);
    } else {
        printf("%c is something else\n", c);
    }
    return 0;
}
