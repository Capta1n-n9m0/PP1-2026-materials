// expect: error
/*
 * 02_bug_scope.c
 *
 * A program with a bug on purpose: it does NOT compile.
 * The box result is made inside square. It lives only inside square.
 * main cannot see it.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 02_bug_scope.c -o scope
 *     You will get: error: 'result' undeclared (first use in this function)
 *
 * Try:
 *   1. Compile it and read the error. Which line does gcc point at?
 *   2. Fix it the right way: in main, write  int r = square(5);
 *      and print r instead of result. You should see 25.
 *   3. Now call the box in main "result" too:  int result = square(5);
 *      It works. It is a different box that happens to have the same name.
 */
#include <stdio.h>

int square(int x) {
    // result is made here. It lives until the } of square.
    int result = x * x;
    return result;
}

int main(void) {
    // The value 25 comes back, but nobody keeps it.
    square(5);
    // BUG: there is no box called result in main.
    printf("%d\n", result);
    return 0;
}
