/*
 * 04_average.c
 *
 * Reads n whole numbers. Prints their sum and their average.
 * A running total, and then one division after the loop.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 04_average.c -o average
 *     ./average          (in Windows PowerShell: .\average)
 *
 * Try:
 *   1. Run it, type 4, then 10 20 30 5. You should see Sum = 65 and Average = 16.25.
 *   2. Run it, type 3, then 5 -2 8. You should see Average = 3.67.
 *   3. Take away (double) and run with 3, then 5 -2 8. What happens to the average? Why? Put it back.
 */
#include <stdio.h>

int main(void) {
    int n, value;
    int sum = 0;

    printf("How many values? ");
    scanf("%d", &n);

    // This loop runs n times: i is 0, 1, ..., n - 1.
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        // Add the new number to the total.
        sum += value;
    }
    printf("Sum = %d\n", sum);
    // (double)sum turns the total into a decimal number first, so the division keeps its decimals.
    printf("Average = %.2f\n", (double)sum / n);
    return 0;
}
