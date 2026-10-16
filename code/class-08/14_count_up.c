/*
 * 14_count_up.c
 *
 * Almost countdown, but the printf comes AFTER the recursive call.
 * So nothing is printed on the way down. The numbers come out on the way
 * back up: 1, 2, 3.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 14_count_up.c -o countup
 *     ./countup          (in Windows PowerShell: .\countup)
 *
 * Try:
 *   1. Run it. You should see 1, 2, 3.
 *   2. Move the printf ABOVE the call count_up(n - 1). Now it prints 3, 2, 1.
 *   3. Put a printf both above and below the call. Predict: 3 2 1 1 2 3, one per line.
 */
#include <stdio.h>

void count_up(int n) {
    // Base case: nothing to print.
    if (n == 0) {
        return;
    }
    // First print everything smaller...
    count_up(n - 1);
    // ...then print n.
    printf("%d\n", n);
}

int main(void) {
    count_up(3);
    return 0;
}
