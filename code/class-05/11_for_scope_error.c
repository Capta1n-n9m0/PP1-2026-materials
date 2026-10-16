// expect: error
/*
 * 11_for_scope_error.c  -  CSCI 1101, class 5
 *
 * What it does: This program does NOT compile, on purpose. The i of a for
 *   loop lives only inside the loop. After the loop it is gone.
 *
 * Compile:  gcc -Wall 11_for_scope_error.c -o for_scope_error
 * Run:      ./for_scope_error        (in Windows PowerShell:  .\for_scope_error)
 *
 * Try:
 *   1. Compile it and read the error: 'i' undeclared.
 *   2. Fix 1: delete the last printf.
 *   3. Fix 2: write int i; above the loop, and for (i = 1; ...) without the
 *      word int. Now it prints 6. Why 6?
 */
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    printf("%d\n", i);
    return 0;
}
