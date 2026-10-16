// expect: warning
/*
 * 08_while_semicolon_bug.c  -  CSCI 1101, class 5
 *
 * What it does: A semicolon straight after while (...) is an empty body.
 *   The loop repeats NOTHING for ever: the program looks frozen and prints
 *   nothing. The compiler warns about this one.
 *
 * Compile:  gcc -Wall 08_while_semicolon_bug.c -o while_semicolon_bug
 * Run:      ./while_semicolon_bug        (in Windows PowerShell:  .\while_semicolon_bug)
 *
 * THIS PROGRAM DOES NOT STOP BY ITSELF.
 * To stop it: click inside the terminal, hold Ctrl and press C.
 *
 * Try:
 *   1. Compile it with -Wall and read the warning.
 *   2. Run it. Nothing is printed. Stop it with Ctrl+C.
 *   3. Delete the semicolon after (count <= 3). Compile and run again.
 */
#include <stdio.h>

int main(void) {
    int count = 1;

    while (count <= 3);
    {
        printf("%d\n", count);
        count++;
    }
    return 0;
}
