/*
 * 20_task_contains.c  -  CSCI 1101, class 10
 *
 * What it does: Solution of the second task: int contains(int a[], int n,
 *   int x) returns 1 if x is in the array and 0 if it is not. It reads a
 *   number and says yes or no.
 *
 * Compile:  gcc -Wall 20_task_contains.c -o task_contains
 * Run:      ./task_contains        (in Windows PowerShell:  .\task_contains)
 *
 * Try:
 *   1. Try the task yourself first, before you read this file.
 *   2. Write contains with the find function: return find(a, n, x) != -1;
 *   3. Type a number that is in the array twice. What is printed?
 */
#include <stdio.h>

int contains(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return 1;
        }
    }
    return 0;
}

int main(void) {
    int lucky[5] = {3, 7, 13, 21, 42};
    int x;
    printf("Number: ");
    scanf("%d", &x);
    if (contains(lucky, 5, x)) {
        printf("yes, lucky\n");
    } else {
        printf("no\n");
    }
    return 0;
}
