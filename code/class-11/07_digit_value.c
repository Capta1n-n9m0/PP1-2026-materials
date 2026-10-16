/*
 * 07_digit_value.c  -  CSCI 1101, class 11
 *
 * What it does: The character 7 is not the number 7: its code is 55.
 *   Subtracting the character 0 gives the value of the digit, a number you
 *   can calculate with.
 *
 * Compile:  gcc -Wall 07_digit_value.c -o digit_value
 * Run:      ./digit_value        (in Windows PowerShell:  .\digit_value)
 *
 * Try:
 *   1. Before you run it, write down the three numbers you expect.
 *   2. Change d to the character 0. What are the three numbers now?
 *   3. Print the value of the digit 9 plus 1.
 */
#include <stdio.h>

int main(void) {
    char d = '7';                       // the CHARACTER 7, code 55

    printf("%d\n", d);                  // its code: 55
    printf("%d\n", d - '0');            // 55 - 48 = 7: the value of the digit
    printf("%d\n", (d - '0') * 2);      // now it is a number: 14
    return 0;
}
