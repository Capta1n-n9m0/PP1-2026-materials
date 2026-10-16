/*
 * 27_bug_off_by_one.c
 *
 * THIS PROGRAM HAS A BUG ON PURPOSE.
 * We want the numbers 1 to 10. The 10 is missing. This is called an off-by-one error.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 27_bug_off_by_one.c -o off_by_one
 *     ./off_by_one          (in Windows PowerShell: .\off_by_one)
 *
 * Try:
 *   1. Run it. You should see 1 to 9.
 *   2. Fix it in one character: < becomes <=.
 */
#include <stdio.h>

int main(void) {
    // THE BUG: i < 10 stops at 9. Test the last value: is 10 < 10 true? No.
    for (int i = 1; i < 10; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
