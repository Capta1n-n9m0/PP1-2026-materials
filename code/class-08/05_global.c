/*
 * 05_global.c
 *
 * A global variable: made OUTSIDE every function, at the top.
 * Every function can see it and change it.
 * You should know it exists. For now, do not use it in your own programs:
 * pass values in with parameters and bring them back with return.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 05_global.c -o global
 *     ./global          (in Windows PowerShell: .\global)
 *
 * Try:
 *   1. Run it. You should see count = 3.
 *   2. Call tick() two more times. You should see count = 5.
 *   3. Add  int count = 0;  as the first line of main. Now main has its OWN count,
 *      and it prints count = 0: main no longer sees the global one.
 */
#include <stdio.h>

// Global: outside every function.
int count = 0;

void tick(void) {
    // Changes the global count.
    count++;
}

int main(void) {
    tick();
    tick();
    tick();
    printf("count = %d\n", count);
    return 0;
}
