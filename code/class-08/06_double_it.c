/*
 * 06_double_it.c
 *
 * Call-by-value. double_it gets a COPY of x's value, in its own box n.
 * It doubles n. main's x does not change.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 06_double_it.c -o double
 *     ./double          (in Windows PowerShell: .\double)
 *
 * Try:
 *   1. Run it. You should see inside: n = 10, then after: x = 5.
 *   2. Change x to 21. Predict both lines before you run it.
 *   3. Call double_it(x) three times in a row. Is x doubled three times? (No: still 21.)
 *   4. For the fix, open 08_double_return.c.
 */
#include <stdio.h>

// n is a NEW box. It gets a copy of the value that main sends.
void double_it(int n) {
    // This changes the copy, not main's x.
    n = n * 2;
    printf("inside: n = %d\n", n);
}

int main(void) {
    int x = 5;
    // The value 5 is copied into n.
    double_it(x);
    printf("after: x = %d\n", x);
    return 0;
}
