/*
 * 06_strcat.c  -  CSCI 1101, class 12
 *
 * What it does: strcat adds one string to the end of another: strcat(to,
 *   more). Two calls make "Ada Lovelace" out of "Ada", a space and
 *   "Lovelace".
 *
 * Compile:  gcc -Wall 06_strcat.c -o strcat
 * Run:      ./strcat        (in Windows PowerShell:  .\strcat)
 *
 * Try:
 *   1. Add a third strcat that puts "!" at the end.
 *   2. Print strlen(full) before and after each strcat.
 *   3. Read a first name and a last name with scanf and join them.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char full[30] = "Ada";     // 30 boxes: room for the whole result
    strcat(full, " ");         // "Ada "
    strcat(full, "Lovelace");  // "Ada Lovelace"
    printf("%s\n", full);
    printf("%d characters\n", (int) strlen(full));
    return 0;
}
