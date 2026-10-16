/*
 * 08_double_return.c
 *
 * The fix for 06_double_it.c: the function RETURNS the new value,
 * and main decides to keep it:  x = double_it(x);
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 08_double_return.c -o double2
 *     ./double2          (in Windows PowerShell: .\double2)
 *
 * Try:
 *   1. Run it. You should see after: x = 10.
 *   2. Change the call line to just  double_it(x);  What does it print now? (5: the answer is thrown away.)
 *   3. Write  x = double_it(double_it(x));  Predict first: 20.
 */
#include <stdio.h>

// Gets a copy, gives back the doubled value.
int double_it(int n) {
    return n * 2;
}

int main(void) {
    int x = 5;
    // The returned value goes into main's own x.
    x = double_it(x);
    printf("after: x = %d\n", x);
    return 0;
}
