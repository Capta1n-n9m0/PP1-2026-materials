/*
 * 02_hello_loop.c  -  CSCI 1101, class 5
 *
 * What it does: Prints Hello five times WITH a loop: one printf, and a line
 *   that says "do this 5 times".
 *
 * Compile:  gcc -Wall 02_hello_loop.c -o hello_loop
 * Run:      ./hello_loop        (in Windows PowerShell:  .\hello_loop)
 *
 * Try:
 *   1. Change 5 to 8. Run it again.
 *   2. Change 5 to 1000. You changed one number. Compare with
 *      01_hello_copy_paste.c.
 *   3. Change "Hello" to your name.
 */
#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        printf("Hello\n");
    }
    return 0;
}
