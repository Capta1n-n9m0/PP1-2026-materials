/*
 * 08_count_multiples_of_3.c
 *
 * Counts how many of the numbers 1 to 20 can be divided by 3.
 * i % 3 is the remainder after dividing i by 3. If it is 0, i can be divided by 3.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 08_count_multiples_of_3.c -o count3
 *     ./count3          (in Windows PowerShell: .\count3)
 *
 * Try:
 *   1. Run it. You should see Count: 6. (They are 3, 6, 9, 12, 15, 18.)
 *   2. Print each number that is counted: add printf("%d ", i); next to count++;
 *   3. Count the numbers from 1 to 100 that can be divided by 7. You should see 14.
 */
#include <stdio.h>

int main(void) {
    int count = 0;

    for (int i = 1; i <= 20; i++) {
        // Is the remainder 0? Then count this number.
        if (i % 3 == 0) {
            count++;
        }
    }

    printf("Count: %d\n", count);
    return 0;
}
