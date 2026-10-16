// expect: warning   (this file has a bug on purpose: see below)
/*
 * 20_bug_scanf_amp.c  -  CSCI 1101, class 11
 *
 * What it does: A common mistake: an & before the array name in scanf. gcc
 *   -Wall warns about the type. Delete the &.
 *
 * Compile:  gcc -Wall 20_bug_scanf_amp.c -o bug_scanf_amp
 * Run:      ./bug_scanf_amp        (in Windows PowerShell:  .\bug_scanf_amp)
 *
 * Try:
 *   1. Read the warning: which argument does it name?
 *   2. Delete the & and compile again.
 *   3. Why does scanf("%d", &n) need the & but scanf("%s", name) does not?
 */
#include <stdio.h>

int main(void) {
    char name[20];
    printf("Your name: ");
    scanf("%s", &name);
    printf("Hello, %s!\n", name);
    return 0;
}
