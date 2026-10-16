// expect: error   (this file has a bug on purpose: see below)
/*
 * 18_bug_assign_string.c  -  CSCI 1101, class 11
 *
 * What it does: A common mistake: a whole array cannot be given a new value
 *   with =, and a string is an array. gcc refuses to compile word = "dog";.
 *   Class 12 shows the library function that copies a string.
 *
 * Compile:  gcc -Wall 18_bug_assign_string.c -o bug_assign_string
 * Run:      ./bug_assign_string        (in Windows PowerShell:  .\bug_assign_string)
 *
 * Try:
 *   1. Read the error.
 *   2. Change the word to dog box by box, with three lines.
 *   3. Remember class 9: int b[3]; b = a; did not compile either.
 */
#include <stdio.h>

int main(void) {
    char word[] = "cat";    // = with a string is fine HERE, when the array is made
    word = "dog";           // WRONG: a whole array cannot be assigned later
    printf("%s\n", word);
    return 0;
}
