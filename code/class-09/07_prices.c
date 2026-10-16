/*
 * 07_prices.c  -  CSCI 1101, class 9
 *
 * What it does: An array of double values: three prices. It changes one
 *   price and prints all three with two decimals.
 *
 * Compile:  gcc -Wall 07_prices.c -o prices
 * Run:      ./prices        (in Windows PowerShell:  .\prices)
 *
 * Try:
 *   1. Add a fourth price.
 *   2. Raise every price by 10 percent with a loop: prices[i] = prices[i] *
 *      1.1;
 */
#include <stdio.h>

int main(void) {
    double prices[3] = {2.50, 1.20, 4.00};

    prices[1] = 1.35;

    for (int i = 0; i < 3; i++) {
        printf("item %d: %.2f AZN\n", i, prices[i]);
    }
    return 0;
}
