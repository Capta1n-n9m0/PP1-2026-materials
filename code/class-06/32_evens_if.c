/*
 * 32_evens_if.c
 *
 * Task 2 from class, the second way: look at every number, print it only if it is even.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 32_evens_if.c -o evens_if
 *     ./evens_if          (in Windows PowerShell: .\evens_if)
 *
 * Try:
 *   1. Run it and type 10. You should see 2 4 6 8 10.
 *   2. Change it to print the numbers that can be divided by 5.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // The remainder after dividing by 2 is 0: i is even.
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
