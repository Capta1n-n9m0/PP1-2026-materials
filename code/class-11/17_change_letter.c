/*
 * 17_change_letter.c  -  CSCI 1101, class 11
 *
 * What it does: A string is an array, so you can change one box: cat
 *   becomes bat, then bar.
 *
 * Compile:  gcc -Wall 17_change_letter.c -o change_letter
 * Run:      ./change_letter        (in Windows PowerShell:  .\change_letter)
 *
 * Try:
 *   1. Turn the word into "car".
 *   2. Put '\0' into box 1. What is printed?
 *   3. Make a string "pin" and change it to "pen".
 */
#include <stdio.h>

int main(void) {
    char word[] = "cat";
    printf("%s\n", word);

    word[0] = 'b';
    printf("%s\n", word);

    word[2] = 'r';
    printf("%s\n", word);
    return 0;
}
