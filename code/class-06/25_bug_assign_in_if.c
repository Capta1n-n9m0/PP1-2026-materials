// expect: warning   (this file has a bug on purpose: see below)
/*
 * 25_bug_assign_in_if.c
 *
 * THIS PROGRAM HAS A BUG ON PURPOSE.
 * if (i = 3) has ONE equals sign. It does not ask a question. It puts 3 into i.
 * So i never gets past 3, and the loop never ends.
 *
 * THIS PROGRAM NEVER STOPS. To stop it: click in the terminal and press Ctrl+C.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 25_bug_assign_in_if.c -o assign
 *     ./assign          (in Windows PowerShell: .\assign)
 *
 * Try:
 *   1. Compile it and read the warning: suggest parentheses around assignment used as truth value.
 *   2. Run it. It prints three for ever. Press Ctrl+C.
 *   3. Change = to ==. Run again. You should see three, once.
 */
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        // THE BUG: = puts 3 into i in every round. It should be ==.
        if (i = 3) {
            printf("three\n");
        }
    }
    return 0;
}
