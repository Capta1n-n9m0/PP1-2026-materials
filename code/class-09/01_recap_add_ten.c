/*
 * 01_recap_add_ten.c  -  CSCI 1101, class 9
 *
 * What it does: The recap question from the start of class: a function
 *   changes its parameter. Does the caller's x change? It prints 5, because
 *   the function got a copy.
 *
 * Compile:  gcc -Wall 01_recap_add_ten.c -o recap_add_ten
 * Run:      ./recap_add_ten        (in Windows PowerShell:  .\recap_add_ten)
 *
 * Try:
 *   1. Before you run it, say what it prints.
 *   2. Make add_ten return n, and write x = add_ten(x); in main. What does
 *      it print now?
 */
#include <stdio.h>

void add_ten(int n) {
    n = n + 10;
}

int main(void) {
    int x = 5;
    add_ten(x);
    printf("%d\n", x);
    return 0;
}
