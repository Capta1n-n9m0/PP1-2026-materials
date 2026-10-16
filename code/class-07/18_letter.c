/*
 * 18_letter.c  -  CSCI 1101, class 7
 *
 * What it does: A function that gives back a letter grade for a score, with
 *   the else-if chain of class 4. It returns a char, so main prints it with
 *   %c.
 *
 * Compile:  gcc -Wall 18_letter.c -o letter
 * Run:      ./letter        (in Windows PowerShell:  .\letter)
 *
 * Try:
 *   1. Call letter(90) and letter(89). Where is the border?
 *   2. Add a grade E for 50 to 59.
 *   3. What does letter(150) give? Should it?
 */
#include <stdio.h>

char letter(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    }
    return 'F';
}

int main(void) {
    printf("95 -> %c\n", letter(95));
    printf("72 -> %c\n", letter(72));
    printf("40 -> %c\n", letter(40));
    return 0;
}
