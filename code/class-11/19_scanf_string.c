/*
 * 19_scanf_string.c  -  CSCI 1101, class 11
 *
 * What it does: Reads a name with scanf and %s. There is no & before name.
 *   scanf stops at the first space: type Leyla Aliyeva and only Leyla is
 *   read.
 *
 * Compile:  gcc -Wall 19_scanf_string.c -o scanf_string
 * Run:      ./scanf_string        (in Windows PowerShell:  .\scanf_string)
 *
 * Try:
 *   1. Run it with your first name, then with your full name.
 *   2. Make the array 3 boxes long and type a long name. Why is that
 *      dangerous?
 *   3. Read two words with scanf("%s %s", first, last); into two arrays.
 */
#include <stdio.h>

int main(void) {
    char name[20];            // room for 19 characters and the '\0'
    printf("Your name: ");
    scanf("%s", name);        // NO & : the name of an array already says where it is
                              // %s reads one word: it stops at a space or Enter
    printf("Hello, %s!\n", name);
    return 0;
}
