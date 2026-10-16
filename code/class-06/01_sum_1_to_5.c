/*
 * 01_sum_1_to_5.c
 *
 * Adds 1 + 2 + 3 + 4 + 5 and shows the total after every round.
 * The box "sum" is a running total. It is also called an accumulator.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 01_sum_1_to_5.c -o sum
 *     ./sum          (in Windows PowerShell: .\sum)
 *
 * Try:
 *   1. Change int sum = 0; to int sum = 100; and run. You should see Sum = 115.
 *   2. Change i <= 5 to i <= 10. You should see Sum = 55.
 *   3. Delete the printf inside the loop. Now only the last line is printed.
 *   4. Change sum += i; to sum += 2; What is the total now, and why?
 */
#include <stdio.h>

int main(void) {
    // BEFORE the loop: make the box and put 0 in it.
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        // INSIDE the loop: add i to the total. Same as: sum = sum + i;
        sum += i;
        // This line is only here so that you can watch the total grow.
        printf("after %d: sum = %d\n", i, sum);
    }

    // AFTER the loop: use the total.
    printf("Sum = %d\n", sum);
    return 0;
}
