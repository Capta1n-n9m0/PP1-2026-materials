/*
 * 05_call_flow.c  -  CSCI 1101, class 7
 *
 * What it does: The same square function, with printf lines that show the
 *   jumps: from main into square, and back to main with the answer.
 *
 * Compile:  gcc -Wall 05_call_flow.c -o call_flow
 * Run:      ./call_flow        (in Windows PowerShell:  .\call_flow)
 *
 * Try:
 *   1. Before you run it, write down the four lines you expect, in order.
 *   2. Add a second call, square(3), and watch the order of the lines.
 *   3. Remove the return line. Compile with -Wall. What does gcc say?
 */
#include <stdio.h>

int square(int x) {
    printf("  square got %d\n", x);
    int result = x * x;
    printf("  square gives back %d\n", result);
    return result;
}

int main(void) {
    printf("main: before the call\n");
    int y = square(5);
    printf("main: got %d\n", y);
    return 0;
}
