/*
 * 08_prototype.c  -  CSCI 1101, class 7
 *
 * What it does: The function is below main, but a prototype above main
 *   tells gcc its name, its parameters and what it gives back. Now it
 *   compiles.
 *
 * Compile:  gcc -Wall 08_prototype.c -o prototype
 * Run:      ./prototype        (in Windows PowerShell:  .\prototype)
 *
 * Try:
 *   1. Delete the prototype line. Compile. You get the error of
 *      07_bug_after_main.c.
 *   2. Change the prototype to int square(int); without the x. Does it
 *      still compile?
 */
#include <stdio.h>

// The prototype: the first line of the function, with a semicolon.
// It tells gcc: "a function called square exists; it takes an int and gives back an int".
int square(int x);

int main(void) {
    int y = square(5);
    printf("%d\n", y);
    return 0;
}

// The real function, below main.
int square(int x) {
    return x * x;
}
