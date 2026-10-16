/*
 * 12_classify.c  -  CSCI 1101, class 11
 *
 * What it does: The program of file 09 again, now with ctype.h. It also
 *   prints the character as a capital, and the value of a digit.
 *
 * Compile:  gcc -Wall 12_classify.c -o classify
 * Run:      ./classify        (in Windows PowerShell:  .\classify)
 *
 * Try:
 *   1. Run it with g, G, 4 and #.
 *   2. For a small letter, also print its place in the alphabet.
 *   3. Add a branch for isspace (it needs fgets or getchar to see a space:
 *      try it later).
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    printf("Type one character: ");
    scanf(" %c", &c);

    if (isupper(c)) {
        printf("capital letter\n");
    } else if (islower(c)) {
        printf("small, capital %c\n", toupper(c));
    } else if (isdigit(c)) {
        printf("digit, value %d\n", c - '0');
    } else {
        printf("something else\n");
    }
    return 0;
}
