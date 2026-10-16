/*
 * 14_null_char.c  -  CSCI 1101, class 11
 *
 * What it does: The string "hi" takes three boxes: h, i and the \0, whose
 *   code is 0. The program prints the code of each box.
 *
 * Compile:  gcc -Wall 14_null_char.c -o null_char
 * Run:      ./null_char        (in Windows PowerShell:  .\null_char)
 *
 * Try:
 *   1. Before you run it, write down the three numbers.
 *   2. Make the string "Hi". Which number changes?
 *   3. Print s[3]. Why is that a mistake?
 */
#include <stdio.h>

int main(void) {
    char s[] = "hi";      // 3 boxes: 'h', 'i', '\0'

    printf("%c %c\n", s[0], s[1]);
    printf("%d %d %d\n", s[0], s[1], s[2]);   // the codes: 104 105 0
    return 0;
}
