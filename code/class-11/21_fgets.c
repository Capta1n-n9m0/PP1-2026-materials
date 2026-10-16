/*
 * 21_fgets.c  -  CSCI 1101, class 11
 *
 * What it does: Reads a whole line, spaces included, with fgets(line, 50,
 *   stdin). fgets keeps the Enter key: the \n is stored before the \0,
 *   which is why the > is printed on the next line.
 *
 * Compile:  gcc -Wall 21_fgets.c -o fgets
 * Run:      ./fgets        (in Windows PowerShell:  .\fgets)
 *
 * Try:
 *   1. Run it with your full name.
 *   2. Change 50 to 6 and type a long name. What is read?
 *   3. Print the code of line[0] with %d.
 */
#include <stdio.h>

int main(void) {
    char line[50];
    printf("Your full name: ");
    // fgets(where, how many boxes, from where): stdin is the keyboard
    // it reads the whole line, spaces too, and at most 49 characters
    fgets(line, 50, stdin);
    // the < > show where the string starts and ends: the Enter key is inside
    printf("<%s>\n", line);
    return 0;
}
