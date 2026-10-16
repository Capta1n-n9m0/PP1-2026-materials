/*
 * 17_sprintf.c  -  CSCI 1101, class 12
 *
 * What it does: sprintf works like printf, but it writes into a string
 *   instead of the screen. snprintf does the same and never writes more
 *   than the size you give it.
 *
 * Compile:  gcc -Wall 17_sprintf.c -o sprintf
 * Run:      ./sprintf        (in Windows PowerShell:  .\sprintf)
 *
 * Try:
 *   1. Make a label "Room B101" from the word Room and the number 101.
 *   2. Print strlen(s) after each sprintf.
 *   3. Give snprintf a size of 8 for msg. What is printed?
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[20];
    sprintf(s, "%d", 472);      // like printf, but into s: "472"
    printf("text: %s\n", s);
    printf("length: %d\n", (int) strlen(s));

    char msg[40];
    // snprintf: the second argument is the size of msg,
    // so it can never write past the end.
    snprintf(msg, sizeof(msg),
             "%s scored %d", "Aysel", 95);
    printf("%s\n", msg);
    return 0;
}
