/*
 * 10_password.c  -  CSCI 1101, class 12
 *
 * What it does: The right way to ask "are these two strings equal?":
 *   strcmp(a, b) == 0. The program reads a word and lets you in only if it
 *   is ada2026.
 *
 * Compile:  gcc -Wall 10_password.c -o password
 * Run:      ./password        (in Windows PowerShell:  .\password)
 *
 * Try:
 *   1. Run it twice: once with ada2026, once with ADA2026.
 *   2. Give three tries with a for loop, and stop when the password is
 *      right.
 *   3. Print "too short" when the word has fewer than 6 letters (strlen).
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char word[20];
    printf("Password: ");
    scanf("%19s", word);
    if (strcmp(word, "ada2026") == 0) {
        printf("Welcome\n");
    } else {
        printf("Wrong password\n");
    }
    return 0;
}
