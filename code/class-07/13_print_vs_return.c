/*
 * 13_print_vs_return.c  -  CSCI 1101, class 7
 *
 * What it does: Printing is not returning. square_print prints the answer
 *   and gives nothing back. square gives the answer back, so main can add
 *   two of them.
 *
 * Compile:  gcc -Wall 13_print_vs_return.c -o print_vs_return
 * Run:      ./print_vs_return        (in Windows PowerShell:  .\print_vs_return)
 *
 * Try:
 *   1. Change the call square_print(5) to printf("%d\n", square(5)). Same
 *      output?
 *   2. Try to write int t = square_print(3); and compile. Read the error.
 */
#include <stdio.h>

void square_print(int x) {
    printf("%d\n", x * x);
}

int square(int x) {
    return x * x;
}

int main(void) {
    square_print(5);
    int total = square(3) + square(4);
    printf("total = %d\n", total);
    return 0;
}
