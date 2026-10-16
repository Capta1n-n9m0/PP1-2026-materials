/*
 * 03_same_name.c
 *
 * main has a box called x. f has a box called x too.
 * They are two DIFFERENT boxes. Changing one does not touch the other.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 03_same_name.c -o same
 *     ./same          (in Windows PowerShell: .\same)
 *
 * Try:
 *   1. Run it. You should see 5, then 100, then 5 again.
 *   2. In f, change the name x to y (in both lines). Nothing else changes on the screen.
 *   3. Call f() twice. You see "in f: x = 100" twice: f makes a new x every time.
 */
#include <stdio.h>

void f(void) {
    // f's own x. It is made when f starts and gone when f ends.
    int x = 100;
    printf("in f: x = %d\n", x);
}

int main(void) {
    // main's own x.
    int x = 5;
    printf("main: x = %d\n", x);
    f();
    // Still 5: f never touched this box.
    printf("main: x = %d\n", x);
    return 0;
}
