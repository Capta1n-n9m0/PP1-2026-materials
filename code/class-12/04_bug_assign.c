// expect: error   (this file has a bug on purpose: see below)
/*
 * 04_bug_assign.c  -  CSCI 1101, class 12
 *
 * What it does: You cannot put a new string into an array with =. gcc stops
 *   with an error: assignment to expression with array type. The fix is
 *   strcpy, in the next file.
 *
 * Compile:  gcc -Wall 04_bug_assign.c -o bug_assign
 * Run:      ./bug_assign        (in Windows PowerShell:  .\bug_assign)
 *
 * Try:
 *   1. Compile it and read the error. Which line does it point at?
 *   2. Replace the line with strcpy(name, "Leyla"); and add #include
 *      <string.h>.
 *   3. Is char name[20] = "Leyla"; at the declaration allowed? Try it.
 */
#include <stdio.h>

int main(void) {
    char name[20];
    name = "Leyla";
    printf("%s\n", name);
    return 0;
}
