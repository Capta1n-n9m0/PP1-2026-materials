/*
 * 19_task_temps.c  -  CSCI 1101, class 9
 *
 * What it does: Solution of task 1: reads the temperatures of the 7 days of
 *   a week into an array, prints them, and prints the average. Try the
 *   input 18 21 19 23 25 22 20
 *
 * Compile:  gcc -Wall 19_task_temps.c -o task_temps
 * Run:      ./task_temps        (in Windows PowerShell:  .\task_temps)
 *
 * Try:
 *   1. Also print the day number next to each temperature: day 1, day 2,
 *      ...
 *   2. Count the days warmer than 20 degrees.
 */
#include <stdio.h>

#define DAYS 7

int main(void) {
    double t[DAYS];

    for (int i = 0; i < DAYS; i++) {
        printf("Day %d: ", i + 1);
        scanf("%lf", &t[i]);
    }

    double sum = 0;
    for (int i = 0; i < DAYS; i++) {
        printf("%.1f ", t[i]);
        sum += t[i];
    }
    printf("\n");
    printf("average: %.1f\n", sum / DAYS);
    return 0;
}
