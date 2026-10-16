// expect: warning   (this file has a bug on purpose: see below)
/*
 * 07_bug_strcat_room.c  -  CSCI 1101, class 12
 *
 * What it does: An array of 6 boxes cannot hold "Hi there!" (9 letters and
 *   the end mark). strcat writes past the end of the array. gcc warns. The
 *   program may still print the text: it is wrong anyway, because it wrote
 *   into memory that is not its own.
 *
 * Compile:  gcc -Wall 07_bug_strcat_room.c -o bug_strcat_room
 * Run:      ./bug_strcat_room        (in Windows PowerShell:  .\bug_strcat_room)
 *
 * Try:
 *   1. Compile it and read the warning: how many bytes, into a region of
 *      what size?
 *   2. Make the array big enough. How many boxes does it need at least?
 *   3. Run it a few times. A wrong program can look right.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char small[6] = "Hi";
    strcat(small, " there!");
    printf("%s\n", small);
    return 0;
}
