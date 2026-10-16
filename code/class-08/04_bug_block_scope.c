// expect: error
/*
 * 04_bug_block_scope.c
 *
 * A program with a bug on purpose: it does NOT compile.
 * i is made in the brackets of the for. It lives only inside the loop.
 * After the loop, there is no i.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 04_bug_block_scope.c -o block
 *     You will get: error: 'i' undeclared (first use in this function)
 *
 * Try:
 *   1. Compile it and read the error.
 *   2. Fix it: write  int i;  above the loop, and change the for to  for (i = 1; i <= 3; i++)
 *      Now it compiles. After the loop it prints 4: the first value that failed the check.
 *   3. Remember class 6: int sum = 0; inside a loop gave the same error. Same rule.
 */
#include <stdio.h>

int main(void) {
    // i lives from here...
    for (int i = 1; i <= 3; i++) {
        printf("%d\n", i);
    }
    // ...to here. BUG: i is gone.
    printf("After the loop: %d\n", i);
    return 0;
}
