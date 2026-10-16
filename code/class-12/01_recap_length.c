/*
 * 01_recap_length.c  -  CSCI 1101, class 12
 *
 * What it does: The recap question from the start of class: a loop walks
 *   along a string until it meets the end mark, counting the characters. It
 *   prints length = 4.
 *
 * Compile:  gcc -Wall 01_recap_length.c -o recap_length
 * Run:      ./recap_length        (in Windows PowerShell:  .\recap_length)
 *
 * Try:
 *   1. Before you run it, say what it prints.
 *   2. Change "Baku" to "Ganja". What is printed now?
 *   3. Change the string to "" (nothing between the quotes). What is the
 *      length?
 */
#include <stdio.h>

int main(void) {
    char city[20] = "Baku";   // B a k u \0, then empty boxes
    int i = 0;
    while (city[i] != '\0') {  // stop at the end mark
        i++;
    }
    printf("length = %d\n", i);
    return 0;
}
