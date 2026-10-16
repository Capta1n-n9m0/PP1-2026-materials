/*
 * 20_table_grid.c
 *
 * A LOOK AHEAD: a loop inside a loop. You do not need this for Quiz 2.
 * The outer loop makes the rows. For every row, the inner loop makes 5 columns.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 20_table_grid.c -o grid
 *     ./grid          (in Windows PowerShell: .\grid)
 *
 * Try:
 *   1. Run it. You should see 3 rows with 5 numbers each.
 *   2. Make it 10 rows and 10 columns: the full multiplication table.
 *   3. How many times does the inner printf run for 3 rows and 5 columns?
 */
#include <stdio.h>

int main(void) {
    // The outer loop: row is 1, 2, 3.
    for (int row = 1; row <= 3; row++) {
        // The inner loop runs completely for EVERY row: col is 1, 2, 3, 4, 5.
        for (int col = 1; col <= 5; col++) {
            // %4d prints the number in a space 4 characters wide, so the columns line up.
            printf("%4d", row * col);
        }
        // End of the row: go to a new line.
        printf("\n");
    }
    return 0;
}
