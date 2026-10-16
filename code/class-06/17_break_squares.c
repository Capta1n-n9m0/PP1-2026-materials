/*
 * 17_break_squares.c
 *
 * Prints the squares 1, 4, 9, ... and stops when a square is more than 30.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 17_break_squares.c -o squares
 *     ./squares          (in Windows PowerShell: .\squares)
 *
 * Try:
 *   1. Run it. You should see 1 4 9 16 25.
 *   2. Change 30 to 100. What is printed now?
 *   3. Can you write it without break? Hint: for (int i = 1; i * i <= 30; i++)
 */
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        // When i is 6, i * i is 36. That is more than 30, so we leave the loop.
        if (i * i > 30) {
            break;
        }
        printf("%d ", i * i);
    }

    printf("\n");
    return 0;
}
