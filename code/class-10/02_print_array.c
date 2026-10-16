/*
 * 02_print_array.c  -  CSCI 1101, class 10
 *
 * What it does: A function that prints any array of whole numbers. It gets
 *   the array and, separately, how many elements it has. main calls it for
 *   two arrays of different sizes.
 *
 * Compile:  gcc -Wall 02_print_array.c -o print_array
 * Run:      ./print_array        (in Windows PowerShell:  .\print_array)
 *
 * Try:
 *   1. Make a third array of 2 numbers and print it with the same function.
 *   2. Call print_array(primes, 3). What is printed? Why?
 *   3. Change the function to print the numbers with a comma between them.
 */
#include <stdio.h>

// int a[]  the array: empty brackets, the function works for any size
// int n    how many elements: the array does not carry its size,
//          so we send it as a second argument
void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(void) {
    int primes[5] = {2, 3, 5, 7, 11};
    int ages[3] = {18, 19, 21};

    print_array(primes, 5);   // the name of the array, no brackets
    print_array(ages, 3);
    return 0;
}
