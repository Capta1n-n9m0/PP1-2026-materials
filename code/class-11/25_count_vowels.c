/*
 * 25_count_vowels.c  -  CSCI 1101, class 11
 *
 * What it does: Counts the vowels in a string with a loop that stops at \0.
 *   tolower makes A and a count the same.
 *
 * Compile:  gcc -Wall 25_count_vowels.c -o count_vowels
 * Run:      ./count_vowels        (in Windows PowerShell:  .\count_vowels)
 *
 * Try:
 *   1. Before you run it, count the vowels yourself.
 *   2. Count the consonants too (letters that are not vowels: use isalpha).
 *   3. Read the sentence with fgets instead.
 */
#include <stdio.h>
#include <ctype.h>

int count_vowels(char s[]) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main(void) {
    char s[] = "Azerbaijan";
    printf("vowels in %s: %d\n", s, count_vowels(s));
    return 0;
}
