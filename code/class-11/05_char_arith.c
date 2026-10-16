/*
 * 05_char_arith.c  -  CSCI 1101, class 11
 *
 * What it does: Arithmetic on characters. Adding 1 to a letter gives the
 *   next letter. Subtracting a from a letter gives its place in the
 *   alphabet, counting from 0.
 *
 * Compile:  gcc -Wall 05_char_arith.c -o char_arith
 * Run:      ./char_arith        (in Windows PowerShell:  .\char_arith)
 *
 * Try:
 *   1. Before you run it, write down the four lines you expect.
 *   2. Change x to z. Which number is printed?
 *   3. Print the letter that comes 3 places after the letter in x.
 */
#include <stdio.h>

int main(void) {
    char c = 'a';                 // code 97
    printf("%c\n", c + 1);        // 98 shown as a character: b
    printf("%d\n", c + 1);        // 98 shown as a number
    printf("%c\n", 'A' + 25);     // 65 + 25 = 90: Z

    char x = 'e';
    // 'e' - 'a' is 4 (a is 0, b is 1, ...), so + 1 gives the place counting from 1
    printf("%c: letter %d\n", x, x - 'a' + 1);
    return 0;
}
