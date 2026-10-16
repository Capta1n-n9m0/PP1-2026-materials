/*
 * 02_sum_to_n.c
 *
 * Asks for a number n. Then adds 1 + 2 + ... + n.
 * The same loop as in 01, but YOU choose where it stops.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 02_sum_to_n.c -o sum_to_n
 *     ./sum_to_n          (in Windows PowerShell: .\sum_to_n)
 *
 * Try:
 *   1. Run it and type 5. You should see Sum = 15.
 *   2. Run it and type 100. You should see Sum = 5050.
 *   3. Run it and type 0. The loop runs zero times. What is the sum?
 *   4. Change it so that it adds only the even numbers: start at 2 and use i += 2.
 */
#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;

    printf("Add the numbers from 1 to: ");
    // Read n from the keyboard.
    scanf("%d", &n);

    // i goes 1, 2, 3, ... up to n.
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
