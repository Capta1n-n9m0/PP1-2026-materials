/*
 * 03_five_array.c  -  CSCI 1101, class 9
 *
 * What it does: The same five scores, WITH an array. One name, scores,
 *   holds all five. A loop prints them and adds them up.
 *
 * Compile:  gcc -Wall 03_five_array.c -o five_array
 * Run:      ./five_array        (in Windows PowerShell:  .\five_array)
 *
 * Try:
 *   1. Add a sixth score: put it in the braces and change 5 to 6 in three
 *      places.
 *   2. Change the first score to 0. Predict the new average, then run.
 *   3. Print the scores with a comma between them.
 */
#include <stdio.h>

int main(void) {
    // One array called scores, with room for 5 int values.
    int scores[5] = {7, 9, 6, 10, 8};

    int sum = 0;
    // i goes 0, 1, 2, 3, 4: exactly the five positions of the array.
    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);   // the value at position i
        sum += scores[i];           // add it to the total
    }
    printf("\n");
    printf("average: %.1f\n", sum / 5.0);   // 5.0, not 5: a real division
    return 0;
}
