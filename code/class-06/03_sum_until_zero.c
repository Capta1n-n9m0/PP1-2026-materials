/*
 * 03_sum_until_zero.c
 *
 * Adds up the numbers that you type. You type 0 to say "I am done".
 * We do not know how many numbers are coming, so this is a while loop.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 03_sum_until_zero.c -o sum_until_zero
 *     ./sum_until_zero          (in Windows PowerShell: .\sum_until_zero)
 *
 * Try:
 *   1. Run it and type: 5 10 -3 8 0  then Enter. You should see Sum = 20.
 *   2. Run it and type only 0. The loop runs zero times. You should see Sum = 0.
 *   3. Add a counter: int count = 0; before the loop and count++; inside. Print how many numbers were typed.
 *   4. Change the stop number from 0 to -1.
 */
#include <stdio.h>

int main(void) {
    int value;
    int sum = 0;

    printf("Type numbers. Type 0 to stop.\n");
    // Read the first number, before the loop.
    scanf("%d", &value);

    // Go on while the number is not 0.
    while (value != 0) {
        // Add the number to the total.
        sum += value;
        scanf("%d", &value);
    }
    printf("Sum = %d\n", sum);
    return 0;
}
