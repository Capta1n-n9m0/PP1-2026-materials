/*
 * 01_hello_copy_paste.c  -  CSCI 1101, class 5
 *
 * What it does: Prints Hello five times WITHOUT a loop: the same line,
 *   copied five times.
 *
 * Compile:  gcc -Wall 01_hello_copy_paste.c -o hello_copy_paste
 * Run:      ./hello_copy_paste        (in Windows PowerShell:  .\hello_copy_paste)
 *
 * Try:
 *   1. Make it print Hello 8 times. How many lines did you add?
 *   2. Now think: how would you make it print Hello 1000 times?
 */
#include <stdio.h>

int main(void) {
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    return 0;
}
