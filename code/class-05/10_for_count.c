/*
 * 10_for_count.c  -  CSCI 1101, class 5
 *
 * What it does: Counts from 1 to 5 with a for loop. Start, check and update
 *   are all on one line.
 *
 * Compile:  gcc -Wall 10_for_count.c -o for_count
 * Run:      ./for_count        (in Windows PowerShell:  .\for_count)
 *
 * Try:
 *   1. Make it print 1 to 10. How many characters did you change?
 *   2. Make it print 0 to 5.
 *   3. Make it print 10 to 20.
 *   4. Change "%d " to "%d\n". What changes on the screen?
 */
#include <stdio.h>

int main(void) {
    //   START       CHECK    UPDATE
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);          // BODY
    }

    printf("\n");                  // so the prompt gets its own line
    return 0;
}
