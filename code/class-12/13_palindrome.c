/*
 * 13_palindrome.c  -  CSCI 1101, class 12
 *
 * What it does: A palindrome reads the same from both ends, like level. The
 *   function compares the first letter with the last, the second with the
 *   second-to-last, and returns 0 at the first pair that differs.
 *
 * Compile:  gcc -Wall 13_palindrome.c -o palindrome
 * Run:      ./palindrome        (in Windows PowerShell:  .\palindrome)
 *
 * Try:
 *   1. Add check("racecar"); and check("abca"); to main.
 *   2. Is "Level" a palindrome for this function? Why not?
 *   3. Read a word with scanf and say yes or no.
 */
#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {      // only the first half
        if (s[i] != s[n - 1 - i]) {        // its partner from the end
            return 0;                      // one pair differs: no
        }
    }
    return 1;                              // every pair matched: yes
}

// Prints the word and yes or no.
void check(char s[]) {
    if (is_palindrome(s)) {
        printf("%s: yes\n", s);
    } else {
        printf("%s: no\n", s);
    }
}

int main(void) {
    check("level");    // a string in quotes can go straight to a function
    check("kayak");
    check("hello");
    check("abba");
    return 0;
}
