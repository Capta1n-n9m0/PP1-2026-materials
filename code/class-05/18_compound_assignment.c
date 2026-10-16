/*
 * 18_compound_assignment.c  -  CSCI 1101, class 5
 *
 * What it does: The five short forms: += -= *= /= %=. x starts at 10 and is
 *   changed five times.
 *
 * Compile:  gcc -Wall 18_compound_assignment.c -o compound_assignment
 * Run:      ./compound_assignment        (in Windows PowerShell:  .\compound_assignment)
 *
 * Try:
 *   1. Before you run it, write down x after every line.
 *   2. Why is 44 / 5 equal to 8 and not 8.8?
 *   3. Start x at 7 instead of 10. Predict all five values, then run.
 */
#include <stdio.h>

int main(void) {
    int x = 10;

    x += 3;   printf("%d\n", x);   // x = x + 3
    x -= 2;   printf("%d\n", x);   // x = x - 2
    x *= 4;   printf("%d\n", x);   // x = x * 4
    x /= 5;   printf("%d\n", x);   // x = x / 5   (int: no decimals)
    x %= 2;   printf("%d\n", x);   // x = x % 2   (the remainder)
    return 0;
}
