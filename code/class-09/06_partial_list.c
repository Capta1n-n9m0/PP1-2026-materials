/*
 * 06_partial_list.c  -  CSCI 1101, class 9
 *
 * What it does: A list in braces that is shorter than the array. The boxes
 *   with no value in the list get 0. A list of just {0} fills the whole
 *   array with zeros.
 *
 * Compile:  gcc -Wall 06_partial_list.c -o partial_list
 * Run:      ./partial_list        (in Windows PowerShell:  .\partial_list)
 *
 * Try:
 *   1. Change {1, 2} to {1, 2, 3, 4, 5}. What changes?
 *   2. Make b an array of 8 and print all 8.
 */
#include <stdio.h>

int main(void) {
    int a[5] = {1, 2};
    int b[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
