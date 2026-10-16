/*
 * 04_alphabet.c  -  CSCI 1101, class 11
 *
 * What it does: A for loop whose counter is a char: it goes from A to Z,
 *   one letter at a time, because the letters have codes that follow each
 *   other.
 *
 * Compile:  gcc -Wall 04_alphabet.c -o alphabet
 * Run:      ./alphabet        (in Windows PowerShell:  .\alphabet)
 *
 * Try:
 *   1. Print the small letters a to z instead.
 *   2. Print the alphabet backwards, from Z to A.
 *   3. Print every second letter: A C E G ...
 */
#include <stdio.h>

int main(void) {
    // c++ adds 1 to the code: 'A' (65) becomes 'B' (66), and so on
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
