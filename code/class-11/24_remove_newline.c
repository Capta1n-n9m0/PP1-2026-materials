/*
 * 24_remove_newline.c  -  CSCI 1101, class 11
 *
 * What it does: After fgets the line ends with \n. A loop finds it and puts
 *   \0 in its place, so the Enter key is gone. The length is shown before
 *   and after.
 *
 * Compile:  gcc -Wall 24_remove_newline.c -o remove_newline
 * Run:      ./remove_newline        (in Windows PowerShell:  .\remove_newline)
 *
 * Try:
 *   1. Run it with your full name.
 *   2. Remove the loop. Which line of the output changes?
 *   3. Print the name between < and > after the loop.
 */
#include <stdio.h>

int length(char s[]) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

int main(void) {
    char line[50];
    printf("Your full name: ");
    fgets(line, 50, stdin);
    printf("length %d\n", length(line));

    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == '\n') {
            line[i] = '\0';
        }
    }
    printf("length %d: <%s>\n", length(line), line);
    return 0;
}
