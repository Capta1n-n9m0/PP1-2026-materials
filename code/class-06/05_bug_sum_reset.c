/*
 * 05_bug_sum_reset.c
 *
 * THIS PROGRAM HAS A BUG ON PURPOSE.
 * It should print Sum = 15. It prints Sum = 5.
 * The compiler says nothing. The program runs. The answer is wrong.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 05_bug_sum_reset.c -o sum_reset
 *     ./sum_reset          (in Windows PowerShell: .\sum_reset)
 *
 * Try:
 *   1. Run it. You should see Sum = 5.
 *   2. Delete the line sum = 0; inside the loop. Run again. You should see Sum = 15.
 *   3. Rule: set the total to 0 BEFORE the loop, never inside it.
 */
#include <stdio.h>

int main(void) {
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        // THE BUG: this line puts 0 back into sum in EVERY round. The total is lost.
        sum = 0;
        sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
