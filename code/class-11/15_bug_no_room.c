// expect: warning   (this file has a bug on purpose: see below)
/*
 * 15_bug_no_room.c  -  CSCI 1101, class 11
 *
 * What it does: A common mistake: "cat" needs 4 boxes (c, a, t and \0), but
 *   the array has only 3. There is no end mark, so %s goes on printing
 *   whatever lies in memory after the array: here, on the course compiler,
 *   the word dog. On another computer it can print something else. gcc
 *   -Wall says nothing; gcc -Wall -Wextra warns.
 *
 * Compile:  gcc -Wall 15_bug_no_room.c -o bug_no_room
 * Run:      ./bug_no_room        (in Windows PowerShell:  .\bug_no_room)
 *
 * Try:
 *   1. Run it. Which word is printed on the first line?
 *   2. Compile it with gcc -Wall -Wextra and read the warning.
 *   3. Fix it: write char word[4] or char word[].
 */
#include <stdio.h>

int main(void) {
    char next[] = "dog";
    char word[3] = "cat";     // WRONG: no room for the '\0'. Needs 4 boxes.

    printf("%s\n", word);     // %s does not know where to stop
    printf("%s\n", next);
    return 0;
}
