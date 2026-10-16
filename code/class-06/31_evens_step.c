/*
 * 31_evens_step.c
 *
 * Task 2 from class: print the even numbers from 2 to n.
 * Way 1: start at 2 and jump by two.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 31_evens_step.c -o evens
 *     ./evens          (in Windows PowerShell: .\evens)
 *
 * Try:
 *   1. Run it and type 10. You should see 2 4 6 8 10.
 *   2. Run it and type 9. You should see 2 4 6 8.
 *   3. Change it to print the odd numbers from 1 to n.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("n: ");
    scanf("%d", &n);

    // i += 2 means: add 2 to i after every round.
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
