/*
 * 12_pin.c
 *
 * Keeps asking for a PIN until you type the right one. The right PIN is 1234.
 * This is Task 5 from class.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 12_pin.c -o pin
 *     ./pin          (in Windows PowerShell: .\pin)
 *
 * Try:
 *   1. Run it and type 1111, then 4321, then 1234. You should see Wrong twice, then Welcome.
 *   2. Change the right PIN to your own number.
 *   3. Count the wrong tries, and at the end print how many there were.
 */
#include <stdio.h>

int main(void) {
    int pin;

    printf("PIN: ");
    scanf("%d", &pin);

    // pin != 1234 means: the PIN is NOT 1234. That is the bad input.
    while (pin != 1234) {
        printf("Wrong. Try again: ");
        scanf("%d", &pin);
    }

    printf("Welcome\n");
    return 0;
}
