/*
 * 01_recap_square.c
 *
 * Tuesday's function: square(x) gives back x times x.
 * main adds two squares: 3*3 + 4*4.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 01_recap_square.c -o square
 *     ./square          (in Windows PowerShell: .\square)
 *
 * Try:
 *   1. Run it. You should see 25.
 *   2. Change the sum to square(5) + square(12). You should see 169.
 *   3. Make total square(square(2)). Work it out on paper first: 16.
 */
#include <stdio.h>

// Gets one int, gives back one int.
int square(int x) {
    return x * x;
}

int main(void) {
    // Each call is replaced by the value it returns: 9 + 16.
    int total = square(3) + square(4);
    printf("%d\n", total);
    return 0;
}
