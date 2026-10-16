/*
 * 05_days_in_month.c  -  CSCI 1101, class 9
 *
 * What it does: An array filled with a list in braces: the number of days
 *   in each month (not a leap year). It prints the days of February and of
 *   December.
 *
 * Compile:  gcc -Wall 05_days_in_month.c -o days_in_month
 * Run:      ./days_in_month        (in Windows PowerShell:  .\days_in_month)
 *
 * Try:
 *   1. Print the days of June. Which index is June?
 *   2. Ask the user for a month number 1 to 12 with scanf, and print its
 *      days. Careful: month 1 is index 0.
 */
#include <stdio.h>

int main(void) {
    int days[12] = {31, 28, 31, 30,
                    31, 30, 31, 31,
                    30, 31, 30, 31};

    printf("Feb: %d\n", days[1]);
    printf("Dec: %d\n", days[11]);
    return 0;
}
