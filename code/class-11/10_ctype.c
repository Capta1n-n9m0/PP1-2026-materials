/*
 * 10_ctype.c  -  CSCI 1101, class 11
 *
 * What it does: The library ctype.h does these tests for you: isdigit,
 *   isalpha, isupper, islower answer yes or no; toupper and tolower change
 *   a letter and leave everything else alone.
 *
 * Compile:  gcc -Wall 10_ctype.c -o ctype
 * Run:      ./ctype        (in Windows PowerShell:  .\ctype)
 *
 * Try:
 *   1. Print toupper of the character ! . What comes out?
 *   2. Add a line that uses islower.
 *   3. Test isalpha on the digit 3.
 */
#include <stdio.h>
#include <ctype.h>     // isdigit, isalpha, isupper, islower, toupper, tolower

int main(void) {
    printf("%c %c\n", toupper('g'), tolower('Q'));   // G q
    printf("%c %c\n", toupper('G'), toupper('7'));   // already big, not a letter: unchanged

    // the is... functions are made to be used in an if
    if (isdigit('7')) {
        printf("7 is a digit\n");
    }
    if (isupper('Q')) {
        printf("Q is a capital\n");
    }
    if (!isalpha('?')) {               // ! means "not"
        printf("? is not a letter\n");
    }
    return 0;
}
