/*
 * 23_length_function.c  -  CSCI 1101, class 11
 *
 * What it does: The length as a function. It gets the string but no size:
 *   the \0 tells the loop where to stop. Compare class 10, where every
 *   array function needed n.
 *
 * Compile:  gcc -Wall 23_length_function.c -o length_function
 * Run:      ./length_function        (in Windows PowerShell:  .\length_function)
 *
 * Try:
 *   1. Call length on your own name.
 *   2. Call length(" "), a string with one space. What is printed?
 *   3. Write int count_spaces(char s[]) in the same shape.
 */
#include <stdio.h>

// no size parameter: a string carries its own end, the '\0'
int length(char s[]) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

int main(void) {
    char city[] = "Baku";
    printf("%d\n", length(city));
    printf("%d\n", length("Programming"));   // a string in quotes works too
    printf("%d\n", length(""));              // the empty string: only the '\0'
    return 0;
}
