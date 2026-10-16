/*
 * 17_predict_x_plus_plus.c  -  CSCI 1101, class 5
 *
 * What it does: The prediction from class. The first printf gets the old
 *   value of x, and then x grows by 1.
 *
 * Compile:  gcc -Wall 17_predict_x_plus_plus.c -o predict_x_plus_plus
 * Run:      ./predict_x_plus_plus        (in Windows PowerShell:  .\predict_x_plus_plus)
 *
 * Try:
 *   1. Predict first. Then run.
 *   2. Change x++ to ++x. Predict first. Then run.
 */
#include <stdio.h>

int main(void) {
    int x = 5;

    printf("%d ", x++);
    printf("%d\n", x);
    return 0;
}
