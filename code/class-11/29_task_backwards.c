/*
 * 29_task_backwards.c  -  CSCI 1101, class 11
 *
 * What it does: Solution of the second task: print a string backwards.
 *   First find the length, then walk from the last letter to the first.
 *
 * Compile:  gcc -Wall 29_task_backwards.c -o task_backwards
 * Run:      ./task_backwards        (in Windows PowerShell:  .\task_backwards)
 *
 * Try:
 *   1. Try the task yourself first, before you read this file.
 *   2. Print "level" backwards. What do you notice?
 *   3. Write int is_palindrome(char s[]) that returns 1 if the word reads
 *      the same both ways.
 */
#include <stdio.h>

int main(void) {
    char s[] = "stressed";
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
