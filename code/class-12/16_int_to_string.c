/*
 * 16_int_to_string.c  -  CSCI 1101, class 12
 *
 * What it does: Turns the number 472 into the text "472" by hand: n % 10 is
 *   the last digit, n / 10 drops it. The digits come out backwards, so the
 *   string is reversed at the end.
 *
 * Compile:  gcc -Wall 16_int_to_string.c -o int_to_string
 * Run:      ./int_to_string        (in Windows PowerShell:  .\int_to_string)
 *
 * Try:
 *   1. Change n to 9050. Trace it on paper first.
 *   2. What happens with n = 0? Fix it so that it prints 0.
 *   3. Use the reverse function of file 12 instead of the last loop.
 */
#include <stdio.h>

int main(void) {
    int n = 472;
    char s[12];              // room for the digits of any int, a sign, '\0'
    int len = 0;
    while (n > 0) {
        s[len] = '0' + n % 10;   // last digit 2 becomes the character '2'
        len++;
        n = n / 10;              // 472 becomes 47
    }
    s[len] = '\0';           // end mark: now s is a string
    printf("backwards: %s\n", s);
    for (int i = 0; i < len / 2; i++) {   // reverse, as in file 12
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
    printf("text: %s\n", s);
    return 0;
}
