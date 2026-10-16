/*
 * 11_first_name.c  -  CSCI 1101, class 12
 *
 * What it does: Reads two names and prints the one that comes first in
 *   alphabetical order, using the sign of strcmp.
 *
 * Compile:  gcc -Wall 11_first_name.c -o first_name
 * Run:      ./first_name        (in Windows PowerShell:  .\first_name)
 *
 * Try:
 *   1. Type the same name twice. What is printed?
 *   2. Type aysel and Murad. Which comes first? Why?
 *   3. Read three names and print the first of the three.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[20], b[20];
    printf("Two names: ");
    scanf("%19s %19s", a, b);
    if (strcmp(a, b) < 0) {
        printf("First: %s\n", a);
    } else {
        printf("First: %s\n", b);
    }
    return 0;
}
