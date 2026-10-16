/*
 * 07_add_one_same_name.c
 *
 * Even when the parameter has the SAME name as main's variable,
 * it is a different box. add_one changes its own x, not main's x.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 07_add_one_same_name.c -o addone
 *     ./addone          (in Windows PowerShell: .\addone)
 *
 * Try:
 *   1. Run it. You should see inside: x = 6, then after: x = 5.
 *   2. Rename the parameter to y (in all three places inside add_one). Same output.
 *   3. Make add_one return x + 1, and in main write  x = add_one(x);  Now main's x is 6.
 */
#include <stdio.h>

// This x belongs to add_one. It is a copy.
void add_one(int x) {
    x = x + 1;
    printf("inside: x = %d\n", x);
}

int main(void) {
    // This x belongs to main.
    int x = 5;
    add_one(x);
    printf("after: x = %d\n", x);
    return 0;
}
