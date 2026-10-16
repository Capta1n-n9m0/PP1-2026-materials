// expect: warning   (this file has a bug on purpose: see below)
/*
 * 08_bug_compare_eq.c  -  CSCI 1101, class 12
 *
 * What it does: Comparing two strings with == does not compare the letters.
 *   You type yes and it still says no. gcc warns: comparison with string
 *   literal results in unspecified behavior.
 *
 * Compile:  gcc -Wall 08_bug_compare_eq.c -o bug_compare_eq
 * Run:      ./bug_compare_eq        (in Windows PowerShell:  .\bug_compare_eq)
 *
 * Try:
 *   1. Compile it and read the warning.
 *   2. Run it and type yes. What does it print?
 *   3. Fix it with strcmp(answer, "yes") == 0 and add #include <string.h>.
 */
#include <stdio.h>

int main(void) {
    char answer[10];
    printf("Continue? ");
    scanf("%9s", answer);
    if (answer == "yes") {
        printf("OK, going on\n");
    } else {
        printf("Stopping\n");
    }
    return 0;
}
