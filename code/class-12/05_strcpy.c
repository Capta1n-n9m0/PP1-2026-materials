/*
 * 05_strcpy.c  -  CSCI 1101, class 12
 *
 * What it does: strcpy copies a string into an array: strcpy(to, from). The
 *   same array gets a second name later. The old name is gone.
 *
 * Compile:  gcc -Wall 05_strcpy.c -o strcpy
 * Run:      ./strcpy        (in Windows PowerShell:  .\strcpy)
 *
 * Try:
 *   1. Copy your own name into name.
 *   2. Make a second array other and copy name into it with strcpy(other,
 *      name).
 *   3. What happens if the array is char name[3]? Read what gcc says.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char name[20];
    strcpy(name, "Leyla");   // to, from: copies L e y l a and the '\0'
    printf("%s\n", name);
    strcpy(name, "Murad");   // the old name is overwritten
    printf("%s\n", name);
    return 0;
}
