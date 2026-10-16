/*
 * 12_reverse.c  -  CSCI 1101, class 12
 *
 * What it does: A function that turns a string around in place: swap the
 *   first and the last character, then the second and the second-to-last,
 *   until the two indexes meet. The swap is the one from class 10.
 *
 * Compile:  gcc -Wall 12_reverse.c -o reverse
 * Run:      ./reverse        (in Windows PowerShell:  .\reverse)
 *
 * Try:
 *   1. Reverse "abcd" (an even length). Does it work?
 *   2. Reverse a one-letter string, and an empty one.
 *   3. Read a word with scanf, reverse it and print it.
 */
#include <stdio.h>
#include <string.h>

// No size parameter: a string carries its own end mark, '\0',
// so strlen can find the length.
void reverse(char s[]) {
    int i = 0;               // from the left
    int j = strlen(s) - 1;   // from the right: the last letter
    while (i < j) {
        char temp = s[i];    // the swap from class 10
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main(void) {
    char word[20] = "hello";
    reverse(word);           // the array is not copied: word changes
    printf("%s\n", word);
    return 0;
}
