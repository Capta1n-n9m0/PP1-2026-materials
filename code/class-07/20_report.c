/*
 * 20_report.c  -  CSCI 1101, class 7
 *
 * What it does: The worked example: a whole program split into functions.
 *   main reads like a list of steps: for three students, read a score from
 *   0 to 100, then print a report line with the letter grade.
 *
 * Compile:  gcc -Wall 20_report.c -o report
 * Run:      ./report        (in Windows PowerShell:  .\report)
 *
 * Try:
 *   1. Run it with 95, 72 and 40.
 *   2. Type 120 for one score. Which function catches it?
 *   3. Make it five students. How many lines did you change?
 *   4. Change the report line to also say PASS or FAIL. Which function do
 *      you change?
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

char letter(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    }
    return 'F';
}

void print_report(int n, int score) {
    printf("Student %d: %d points, ", n, score);
    printf("grade %c\n", letter(score));
}

int main(void) {
    for (int i = 1; i <= 3; i++) {
        printf("Score of student %d: ", i);
        int score = read_between(0, 100);
        print_report(i, score);
    }
    return 0;
}
