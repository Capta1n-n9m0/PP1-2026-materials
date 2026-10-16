/*
 * 09_swap_fails.c
 *
 * A swap function that does NOT swap main's variables.
 * a and b are copies of x and y. The copies are swapped. x and y are not.
 * Swapping the caller's own boxes needs pointers: class 18.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 09_swap_fails.c -o swap
 *     ./swap          (in Windows PowerShell: .\swap)
 *
 * Try:
 *   1. Run it. You should see  in swap: 7 3  and then  in main: 3 7.
 *      Inside swap, a and b were swapped. In main, x and y were not.
 *   2. Do the swap inside main instead, with a temp box. Now main prints 7 3.
 *   3. Why can a function not just return both numbers? (return gives back ONE value.)
 */
#include <stdio.h>

void swap(int a, int b) {
    // The usual three-line swap, with a temp box.
    int temp = a;
    a = b;
    b = temp;
    printf("in swap: %d %d\n", a, b);
}

int main(void) {
    int x = 3, y = 7;
    // 3 is copied into a, 7 into b.
    swap(x, y);
    printf("in main: %d %d\n", x, y);
    return 0;
}
