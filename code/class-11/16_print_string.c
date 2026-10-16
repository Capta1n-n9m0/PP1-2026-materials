/*
 * 16_print_string.c  -  CSCI 1101, class 11
 *
 * What it does: Printing a string with %s inside a sentence, and one
 *   character of it with %c.
 *
 * Compile:  gcc -Wall 16_print_string.c -o print_string
 * Run:      ./print_string        (in Windows PowerShell:  .\print_string)
 *
 * Try:
 *   1. Put your own name in name and run it.
 *   2. Also print the last letter of the name with %c.
 *   3. Print the name twice on one line, with a space between.
 */
#include <stdio.h>

int main(void) {
    char name[] = "Leyla";

    printf("Hello, %s!\n", name);            // %s and the name of the array: the whole string
    printf("First letter: %c\n", name[0]);   // %c and one box: one character
    return 0;
}
