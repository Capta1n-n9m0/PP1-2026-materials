// expect: warning   (this file has a bug on purpose: see below)
/*
 * 25_bug_no_brackets.c  -  CSCI 1101, class 7
 *
 * What it does: THIS PROGRAM HAS A BUG ON PURPOSE. greet; without () does
 *   not call the function. gcc warns: statement with no effect. Nothing is
 *   printed by it.
 *
 * Compile:  gcc -Wall 25_bug_no_brackets.c -o bug_no_brackets
 * Run:      ./bug_no_brackets        (in Windows PowerShell:  .\bug_no_brackets)
 *
 * Try:
 *   1. Compile with -Wall and read the warning.
 *   2. Run it. How many Hello! lines do you see?
 *   3. Fix it: greet();
 */
#include <stdio.h>

void greet(void) {
    printf("Hello!\n");
}

int main(void) {
    greet();
    greet;
    printf("end\n");
    return 0;
}
