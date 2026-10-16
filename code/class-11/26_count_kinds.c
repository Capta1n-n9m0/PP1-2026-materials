/*
 * 26_count_kinds.c  -  CSCI 1101, class 11
 *
 * What it does: Reads a line with fgets and counts its letters, digits and
 *   spaces with isalpha, isdigit and the space character.
 *
 * Compile:  gcc -Wall 26_count_kinds.c -o count_kinds
 * Run:      ./count_kinds        (in Windows PowerShell:  .\count_kinds)
 *
 * Try:
 *   1. Run it with the line: Room B102, 16:00
 *   2. Also count the capitals with isupper.
 *   3. Count "other" characters: not a letter, not a digit, not a space.
 */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char line[100];
    printf("A line: ");
    fgets(line, 100, stdin);

    int letters = 0, digits = 0, spaces = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        if (isalpha(line[i])) {
            letters++;
        } else if (isdigit(line[i])) {
            digits++;
        } else if (line[i] == ' ') {
            spaces++;
        }
    }
    printf("letters %d, digits %d, spaces %d\n", letters, digits, spaces);
    return 0;
}
