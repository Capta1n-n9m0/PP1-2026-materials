/*
 * 28_task_count_char.c  -  CSCI 1101, class 11
 *
 * What it does: Solution of the first task: int count_char(char s[], char
 *   c) returns how many times the character c is in the string s.
 *
 * Compile:  gcc -Wall 28_task_count_char.c -o task_count_char
 * Run:      ./task_count_char        (in Windows PowerShell:  .\task_count_char)
 *
 * Try:
 *   1. Try the task yourself first, before you read this file.
 *   2. Count the n in "banana".
 *   3. Make it count A and a as the same letter (tolower).
 */
#include <stdio.h>

int count_char(char s[], char c) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            count++;
        }
    }
    return count;
}

int main(void) {
    printf("%d\n", count_char("banana", 'a'));
    printf("%d\n", count_char("banana", 'z'));
    return 0;
}
