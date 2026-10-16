/*
 * 26_bug_missing_update.c
 *
 * THIS PROGRAM HAS A BUG ON PURPOSE.
 * The update is missing. i stays 1, so i <= 5 is true for ever.
 * gcc gives NO warning for this bug.
 *
 * THIS PROGRAM NEVER STOPS. To stop it: click in the terminal and press Ctrl+C.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 26_bug_missing_update.c -o no_update
 *     ./no_update          (in Windows PowerShell: .\no_update)
 *
 * Try:
 *   1. Run it. It prints 1 for ever. Press Ctrl+C.
 *   2. Add i++; after the printf. Run again. You should see 1 to 5.
 */
#include <stdio.h>

int main(void) {
    int i = 1;

    while (i <= 5) {
        // THE BUG: after this line there should be i++;
        printf("%d\n", i);
    }
    return 0;
}
