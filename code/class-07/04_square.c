/*
 * 04_square.c  -  CSCI 1101, class 7
 *
 * What it does: Our first function with a result: square takes a whole
 *   number and gives back that number times itself. This is the program
 *   typed in class.
 *
 * Compile:  gcc -Wall 04_square.c -o square
 * Run:      ./square        (in Windows PowerShell:  .\square)
 *
 * Try:
 *   1. Add a line that prints square(10).
 *   2. Call square(-4). Is the answer negative?
 *   3. Write a second function, int cube(int x), above main, and call it.
 */
#include <stdio.h>

// int      the type of the answer it gives back
// square   the name of the function
// int x    the parameter: a box that gets the value you send in
int square(int x) {
    return x * x;   // return: give this value back to whoever called
}

int main(void) {
    int y = square(5);   // the call: x gets 5, the answer 25 goes into y
    printf("square(5) = %d\n", y);

    // You can use a call straight inside printf.
    printf("square(7) = %d\n", square(7));
    return 0;
}
