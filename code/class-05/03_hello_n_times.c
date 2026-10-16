/*
 * 03_hello_n_times.c  -  CSCI 1101, class 5
 *
 * What it does: Asks how many times, then prints Hello that many times. You
 *   cannot do this with copy and paste: the number is not known when you
 *   write the program.
 *
 * Compile:  gcc -Wall 03_hello_n_times.c -o hello_n_times
 * Run:      ./hello_n_times        (in Windows PowerShell:  .\hello_n_times)
 *
 * Try:
 *   1. Run it and type 3. Run it again and type 10.
 *   2. Type 0. What is printed? Why?
 *   3. Type -2. What is printed? Why?
 */
#include <stdio.h>

int main(void) {
    int n;

    printf("How many times? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Hello\n");
    }
    return 0;
}
