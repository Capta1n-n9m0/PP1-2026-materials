/*
 * 16_continue.c
 *
 * continue means: skip the rest of THIS round, and go on with the next round.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 16_continue.c -o continue
 *     ./continue          (in Windows PowerShell: .\continue)
 *
 * Try:
 *   1. Run it. You should see 1 2 4 5.
 *   2. Change continue to break. You should see 1 2.
 *   3. Skip two numbers: use if (i == 2 || i == 4).
 */
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        // When i is 3, the printf below is skipped. Then the loop goes on with 4.
        if (i == 3) {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
