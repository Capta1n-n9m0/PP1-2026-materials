/*
 * 13_pin_three_tries.c
 *
 * Like a bank card: you get only 3 tries for the PIN (1234).
 * A for loop counts the tries. break leaves the loop early when the PIN is right.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 13_pin_three_tries.c -o pin3
 *     ./pin3          (in Windows PowerShell: .\pin3)
 *
 * Try:
 *   1. Run it and type 1111, then 1234. You should see Welcome after the second try.
 *   2. Run it and type 1, 2, 3. You should see Card blocked.
 *   3. Give the user 5 tries. How many numbers do you change?
 */
#include <stdio.h>

int main(void) {
    int pin;
    int ok = 0;          // 0: not right yet

    // At most 3 rounds: tries is 1, 2, 3.
    for (int tries = 1; tries <= 3; tries++) {
        printf("PIN (try %d of 3): ", tries);
        scanf("%d", &pin);
        // Right PIN? Remember that (ok = 1) and leave the loop.
        if (pin == 1234) {
            ok = 1;
            break;       // right: stop asking
        }
    }

    // After the loop: did we leave because the PIN was right?
    if (ok == 1) {
        printf("Welcome\n");
    } else {
        printf("Card blocked\n");
    }
    return 0;
}
