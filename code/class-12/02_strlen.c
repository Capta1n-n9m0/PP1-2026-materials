/*
 * 02_strlen.c  -  CSCI 1101, class 12
 *
 * What it does: strlen counts the characters of a string, up to the end
 *   mark. sizeof gives the size of the whole array. They are different
 *   numbers.
 *
 * Compile:  gcc -Wall 02_strlen.c -o strlen
 * Run:      ./strlen        (in Windows PowerShell:  .\strlen)
 *
 * Try:
 *   1. Change "Baku" to "Sumgait". Which number changes? Which does not?
 *   2. Make the array char city[5]. What does sizeof say now?
 *   3. Print strlen("") and say why it is 0.
 */
#include <stdio.h>
#include <string.h>   // strlen, strcpy, strcat, strcmp live here

int main(void) {
    char city[20] = "Baku";
    // strlen returns a size_t (a whole number type for sizes).
    // (int) turns it into an int, so %d prints it.
    printf("strlen: %d\n", (int) strlen(city));   // characters before '\0'
    printf("sizeof: %d\n", (int) sizeof(city));   // boxes in the array
    return 0;
}
