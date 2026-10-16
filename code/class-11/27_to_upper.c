/*
 * 27_to_upper.c  -  CSCI 1101, class 11
 *
 * What it does: A function that turns every letter of a string into a
 *   capital, in place: it changes the caller's array, like double_all in
 *   class 10.
 *
 * Compile:  gcc -Wall 27_to_upper.c -o to_upper
 * Run:      ./to_upper        (in Windows PowerShell:  .\to_upper)
 *
 * Try:
 *   1. Before you run it, write down the line it prints.
 *   2. Write to_lower in the same shape.
 *   3. Make it change only the first letter of the string.
 */
#include <stdio.h>
#include <ctype.h>

// changes the caller's array: an array is not copied (class 10)
void to_upper(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);   // not a letter? toupper leaves it alone
    }
}

int main(void) {
    char s[] = "hello, world 2026";
    to_upper(s);
    printf("%s\n", s);
    return 0;
}
