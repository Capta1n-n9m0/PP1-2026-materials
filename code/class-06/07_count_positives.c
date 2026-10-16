/*
 * 07_count_positives.c
 *
 * Reads n numbers. Counts how many of them are positive (greater than 0).
 * A counter: add 1, but only when something is true.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 07_count_positives.c -o count
 *     ./count          (in Windows PowerShell: .\count)
 *
 * Try:
 *   1. Run it, type 5, then 3 -1 0 7 -4. You should see Positive values: 2. (0 is not positive.)
 *   2. Run it, type 3, then -2 -5 0. You should see Positive values: 0.
 *   3. Change it to count the NEGATIVE numbers.
 *   4. Add a second counter for zeros, and print both.
 */
#include <stdio.h>

int main(void) {
    // Nothing is counted yet, so the counter starts at 0.
    int count = 0;
    int n, value;

    printf("How many values? ");
    scanf("%d", &n);

    // The loop runs n times.
    for (int i = 0; i < n; i++) {
        // Read one number. The box "value" is used again in every round.
        scanf("%d", &value);
        // An if INSIDE a loop: the question is asked again in every round.
        if (value > 0) {
            count++;
        }
    }
    printf("Positive values: %d\n", count);
    return 0;
}
