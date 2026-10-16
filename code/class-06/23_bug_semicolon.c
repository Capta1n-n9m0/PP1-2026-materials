// expect: warning   (this file has a bug on purpose: see below)
/*
 * 23_bug_semicolon.c
 *
 * THIS PROGRAM HAS A BUG ON PURPOSE.
 * There is a semicolon at the end of the for line. You expect 1 to 5. You get 6, once.
 * gcc -Wall warns: this 'for' clause does not guard...
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 23_bug_semicolon.c -o semicolon
 *     ./semicolon          (in Windows PowerShell: .\semicolon)
 *
 * Try:
 *   1. Compile it and read the warning. Run it. You should see 6.
 *   2. Delete the semicolon after the ). Run again. You should see 1 to 5.
 */
#include <stdio.h>

int main(void) {
    int i;

    // THE BUG: the ; at the end is the whole body of the loop. The loop does NOTHING, five times.
    for (i = 1; i <= 5; i++);
    // This block does not belong to the loop. It runs once, when i is already 6.
    {
        printf("%d\n", i);
    }
    return 0;
}
