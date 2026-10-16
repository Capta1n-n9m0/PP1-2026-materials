/*
 * 33_quiz_style.c
 *
 * The three quiz-style questions from class, in one program.
 * Write your three answers on paper FIRST. Then run it to check.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 33_quiz_style.c -o quiz
 *     ./quiz          (in Windows PowerShell: .\quiz)
 *
 * Try:
 *   1. Q1 should print 1 2 3. Q2 should print 5 6. Q3 should print 10.
 *   2. In Q2, change x++ to ++x. Now you should see 6 6.
 *   3. In Q3, change sum += k to sum *= k and start sum at 1. You should see 24.
 */
#include <stdio.h>

int main(void) {
    // Q1
    int i = 1;
    while (i <= 3) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Q2
    int x = 5;
    printf("%d ", x++);
    printf("%d\n", x);

    // Q3
    int sum = 0;
    for (int k = 1; k <= 4; k++) {
        sum += k;
    }
    printf("%d\n", sum);
    return 0;
}
