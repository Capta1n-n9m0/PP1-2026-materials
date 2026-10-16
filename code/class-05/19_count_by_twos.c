/*
 * 19_count_by_twos.c  -  CSCI 1101, class 5
 *
 * What it does: The update does not have to be i++. Here it is i += 2: the
 *   loop counts 0 2 4 6 8 10.
 *
 * Compile:  gcc -Wall 19_count_by_twos.c -o count_by_twos
 * Run:      ./count_by_twos        (in Windows PowerShell:  .\count_by_twos)
 *
 * Try:
 *   1. Count by fives from 0 to 50.
 *   2. Print the odd numbers from 1 to 9.
 *   3. Count DOWN by twos from 10 to 0. Which three parts change?
 */
#include <stdio.h>

int main(void) {
    for (int i = 0; i <= 10; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
