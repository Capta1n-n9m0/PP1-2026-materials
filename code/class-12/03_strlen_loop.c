/*
 * 03_strlen_loop.c  -  CSCI 1101, class 12
 *
 * What it does: A loop from 0 to strlen(word) visits every character of a
 *   string. It prints the letters of "Baku" with a space after each one.
 *
 * Compile:  gcc -Wall 03_strlen_loop.c -o strlen_loop
 * Run:      ./strlen_loop        (in Windows PowerShell:  .\strlen_loop)
 *
 * Try:
 *   1. Print each letter on its own line.
 *   2. Print the letters backwards: start at strlen(word) - 1 and go down
 *      to 0.
 *   3. Count how many letters are a (lowercase).
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char word[20] = "Baku";
    int n = strlen(word);
    for (int i = 0; i < n; i++) {
        printf("%c ", word[i]);
    }
    printf("\n");
    return 0;
}
