/*
 * 21_report_all_in_main.c  -  CSCI 1101, class 7
 *
 * What it does: The same program as 20_report.c, all inside main. It works,
 *   and it prints the same. Compare how easy it is to read and to change.
 *
 * Compile:  gcc -Wall 21_report_all_in_main.c -o report_all_in_main
 * Run:      ./report_all_in_main        (in Windows PowerShell:  .\report_all_in_main)
 *
 * Try:
 *   1. Find the three jobs (read, grade, print) in this main. Where does
 *      each start and end?
 *   2. Make it five students. Then compare with 20_report.c.
 */
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 3; i++) {
        int score;
        char grade;
        printf("Score of student %d: ", i);
        scanf("%d", &score);
        while (score < 0 || score > 100) {
            printf("Type 0 to 100: ");
            scanf("%d", &score);
        }
        if (score >= 90) {
            grade = 'A';
        } else if (score >= 80) {
            grade = 'B';
        } else if (score >= 70) {
            grade = 'C';
        } else if (score >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }
        printf("Student %d: %d points, grade %c\n", i, score, grade);
    }
    return 0;
}
