/*
 * 18_continue_odds.c
 *
 * Prints only the odd numbers from 1 to 10. Every even number is skipped with continue.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 18_continue_odds.c -o odds
 *     ./odds          (in Windows PowerShell: .\odds)
 *
 * Try:
 *   1. Run it. You should see 1 3 5 7 9.
 *   2. Change it so that it prints only the even numbers.
 *   3. Write it without continue: print when i % 2 != 0.
 */
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        // i % 2 == 0 means: i is even. Skip it.
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
