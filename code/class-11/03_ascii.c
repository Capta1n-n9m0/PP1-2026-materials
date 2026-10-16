/*
 * 03_ascii.c  -  CSCI 1101, class 11
 *
 * What it does: Every character is stored as a small whole number, its
 *   ASCII code. The same value printed with %c shows the character and with
 *   %d shows the code.
 *
 * Compile:  gcc -Wall 03_ascii.c -o ascii
 * Run:      ./ascii        (in Windows PowerShell:  .\ascii)
 *
 * Try:
 *   1. Add a line for the character z. Which code do you expect?
 *   2. Print the code of the character @.
 *   3. What is the difference between the code of a and the code of A?
 */
#include <stdio.h>

int main(void) {
    // the same value twice: %c shows it as a character, %d as its number
    printf("%c = %d\n", 'A', 'A');
    printf("%c = %d\n", 'B', 'B');
    printf("%c = %d\n", 'a', 'a');
    printf("%c = %d\n", '0', '0');
    printf("%c = %d\n", '9', '9');
    printf("[%c] = %d\n", ' ', ' ');   // the space has a code too: 32
    return 0;
}
