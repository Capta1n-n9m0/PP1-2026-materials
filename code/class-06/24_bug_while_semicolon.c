// expect: warning   (this file has a bug on purpose: see below)
/*
 * 24_bug_while_semicolon.c
 *
 * THIS PROGRAM HAS A BUG ON PURPOSE.
 * A semicolon after while (...). The body is empty, so x never changes.
 * The program hangs and prints NOTHING.
 *
 * THIS PROGRAM NEVER STOPS. To stop it: click in the terminal and press Ctrl+C.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 24_bug_while_semicolon.c -o while_semicolon
 *     ./while_semicolon          (in Windows PowerShell: .\while_semicolon)
 *
 * Try:
 *   1. Compile it and read the warning. Run it. Nothing happens. Press Ctrl+C.
 *   2. Delete the semicolon. Run again. You should see 1 to 5.
 */
#include <stdio.h>

int main(void) {
    int x = 1;

    // THE BUG: the ; is the body. x stays 1 for ever.
    while (x <= 5);
    {
        printf("%d\n", x);
        x++;
    }
    return 0;
}
