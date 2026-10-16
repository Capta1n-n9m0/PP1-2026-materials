/*
 * 12_min_position.c  -  CSCI 1101, class 10
 *
 * What it does: Not the smallest value but WHERE it is: pos remembers the
 *   index of the smallest so far. Prices in five shops; the cheapest is
 *   shop 3, at index 2.
 *
 * Compile:  gcc -Wall 12_min_position.c -o min_position
 * Run:      ./min_position        (in Windows PowerShell:  .\min_position)
 *
 * Try:
 *   1. Make two shops share the lowest price. Which one is reported?
 *   2. Change < to <= in the if. Which one is reported now?
 *   3. Find the position of the most expensive shop.
 */
#include <stdio.h>

#define N 5

int main(void) {
    int price[N] = {12, 9, 7, 11, 8};
    int pos = 0;                         // the INDEX of the cheapest so far
    for (int i = 1; i < N; i++) {
        if (price[i] < price[pos]) {     // compare with the price AT pos
            pos = i;
        }
    }
    printf("cheapest: index %d, price %d\n", pos, price[pos]);
    return 0;
}
