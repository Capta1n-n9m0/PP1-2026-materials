/*
 * 29_task_celsius.c  -  CSCI 1101, class 7
 *
 * What it does: Solution of task 4: celsius_to_fahrenheit(c) gives back c *
 *   9 / 5 + 32, with double values.
 *
 * Compile:  gcc -Wall 29_task_celsius.c -o task_celsius
 * Run:      ./task_celsius        (in Windows PowerShell:  .\task_celsius)
 *
 * Try:
 *   1. Try 100 (water boils: 212) and 0 (it freezes: 32).
 *   2. Try -40. Something special happens.
 *   3. Write the other direction: fahrenheit_to_celsius(f) = (f - 32) * 5 /
 *      9.
 */
#include <stdio.h>

double celsius_to_fahrenheit(double c) {
    return c * 9 / 5 + 32;
}

int main(void) {
    double c;
    printf("Celsius: ");
    scanf("%lf", &c);
    printf("Fahrenheit: %.1f\n", celsius_to_fahrenheit(c));
    return 0;
}
