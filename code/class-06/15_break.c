/*
 * 15_break.c
 *
 * break means: leave the loop NOW.
 * The loop wants to go from 1 to 10, but it stops when i is 6.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 15_break.c -o break
 *     ./break          (in Windows PowerShell: .\break)
 *
 * Try:
 *   1. Run it. You should see 1 2 3 4 5.
 *   2. Change i == 6 to i == 8. You should see 1 2 3 4 5 6 7.
 *   3. Move the printf line above the if. Now what is printed? Why?
 */
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        // When i is 6 we leave the loop. 6 is not printed: the break comes before the printf.
        if (i == 6) {
            break;
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
