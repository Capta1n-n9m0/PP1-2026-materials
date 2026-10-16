/*
 * 15_atoi.c  -  CSCI 1101, class 12
 *
 * What it does: atoi, from stdlib.h, does the same job: text to int. It
 *   stops at the first character that is not a digit, and gives 0 when
 *   there is no number at the start.
 *
 * Compile:  gcc -Wall 15_atoi.c -o atoi
 * Run:      ./atoi        (in Windows PowerShell:  .\atoi)
 *
 * Try:
 *   1. Try atoi(" 42"), with spaces before the number.
 *   2. Try atoi("3.99"). What happens to the part after the point?
 *   3. Read a word with scanf and print atoi of it, times 2.
 */
#include <stdio.h>
#include <stdlib.h>   // atoi lives here, not in string.h

int main(void) {
    printf("%d\n", atoi("2026") + 1);   // 2027
    printf("%d\n", atoi("-45"));        // a minus sign is fine
    printf("%d\n", atoi("12abc"));      // stops at 'a': 12
    printf("%d\n", atoi("abc"));        // no number at the start: 0
    return 0;
}
