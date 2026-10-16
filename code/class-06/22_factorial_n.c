/*
 * 22_factorial_n.c
 *
 * Asks for n and prints n factorial.
 * Careful: an int box is not endless. From 13 on, the answer is WRONG and gcc says nothing.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 22_factorial_n.c -o fact
 *     ./fact          (in Windows PowerShell: .\fact)
 *
 * Try:
 *   1. Run it with 5, 10 and 12. You should see 120, 3628800 and 479001600. All correct.
 *   2. Run it with 13. You should see 1932053504. That is WRONG: the real value is 6227020800.
 *   3. Run it with 17. The answer is even negative.
 *   4. The largest number an int can hold is 2147483647. 13! is bigger, so it does not fit.
 */
#include <stdio.h>

int main(void) {
    int n;
    int fact = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // The running product.
        fact *= i;
    }
    printf("%d! = %d\n", n, fact);
    return 0;
}
