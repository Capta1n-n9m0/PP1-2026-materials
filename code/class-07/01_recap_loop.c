/*
 * 01_recap_loop.c  -  CSCI 1101, class 7
 *
 * What it does: The recap question from the start of class: a counter
 *   inside a loop. It counts the numbers from 1 to 10 that can be divided
 *   by 4. It prints 2.
 *
 * Compile:  gcc -Wall 01_recap_loop.c -o recap_loop
 * Run:      ./recap_loop        (in Windows PowerShell:  .\recap_loop)
 *
 * Try:
 *   1. Before you run it, say what it prints.
 *   2. Change 10 to 20. What does it print now?
 *   3. Change i % 4 to i % 3. Predict, then run.
 */
#include <stdio.h>

int main(void) {
    int count = 0;
    for (int i = 1; i <= 10; i++) {
        if (i % 4 == 0) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
