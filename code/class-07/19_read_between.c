/*
 * 19_read_between.c  -  CSCI 1101, class 7
 *
 * What it does: The input check of class 6 as a function: read_between(low,
 *   high) keeps asking until the number is between low and high, then gives
 *   it back.
 *
 * Compile:  gcc -Wall 19_read_between.c -o read_between
 * Run:      ./read_between        (in Windows PowerShell:  .\read_between)
 *
 * Try:
 *   1. Run it: type 13, then 0, then 7 for the month.
 *   2. Add a third question: an hour from 0 to 23. One line.
 *   3. Type a letter. It goes round for ever: Ctrl+C. (We only type numbers
 *      for now.)
 */
#include <stdio.h>

int read_between(int low, int high) {
    int value;
    scanf("%d", &value);
    while (value < low || value > high) {
        printf("Type %d to %d: ", low, high);
        scanf("%d", &value);
    }
    return value;
}

int main(void) {
    printf("Month: ");
    int month = read_between(1, 12);
    printf("Day: ");
    int day = read_between(1, 31);
    printf("Date: %d/%d\n", day, month);
    return 0;
}
