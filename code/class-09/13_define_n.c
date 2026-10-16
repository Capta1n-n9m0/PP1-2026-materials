/*
 * 13_define_n.c  -  CSCI 1101, class 9
 *
 * What it does: The sum and average program again, with the size written
 *   ONCE at the top: #define N 5. To change the size, change one line. Try
 *   the input 7 9 6 10 8
 *
 * Compile:  gcc -Wall 13_define_n.c -o define_n
 * Run:      ./define_n        (in Windows PowerShell:  .\define_n)
 *
 * Try:
 *   1. Change N to 3 and run it. How many numbers does it ask for now?
 *   2. Remove (double) and compile with -Wall. What does gcc say? Why?
 */
#include <stdio.h>

// #define N 5 means: everywhere below, gcc reads N as 5.
// No = and no ; on this line. N is in capitals by habit.
#define N 5

int main(void) {
    int scores[N];

    printf("Enter %d scores: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += scores[i];
    }
    printf("average: %.1f\n", (double) sum / N);   // (double): a real division
    return 0;
}
