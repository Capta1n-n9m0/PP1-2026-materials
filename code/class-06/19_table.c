/*
 * 19_table.c
 *
 * Prints the multiplication table of one number, from x 1 to x 10.
 * n stays the same in every line. i changes. Same code, different value.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 19_table.c -o table
 *     ./table          (in Windows PowerShell: .\table)
 *
 * Try:
 *   1. Run it and type 7. The last line should be 7 x 10 = 70.
 *   2. Make the table go up to 12. Only one number changes.
 *   3. Print the table backwards, from x 10 down to x 1.
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        // Three holes (%d) and three values: n, i, and n * i.
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
