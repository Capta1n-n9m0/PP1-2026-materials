/*
 * 11_month_check.c
 *
 * Asks for a month number. Only 1 to 12 is accepted.
 * The same idea as the age check, with a different condition.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 11_month_check.c -o month
 *     ./month          (in Windows PowerShell: .\month)
 *
 * Try:
 *   1. Run it and type 0, then 13, then 7. You should see Invalid twice, then Month 7 accepted.
 *   2. Change it to ask for a day of the week, 1 to 7.
 *   3. Change it to ask for a mark from 0 to 100.
 */
#include <stdio.h>

int main(void) {
    int month;

    printf("Month (1-12): ");
    scanf("%d", &month);

    // Bad input: below 1 OR above 12.
    while (month < 1 || month > 12) {
        printf("Invalid. Try again: ");
        scanf("%d", &month);
    }

    printf("Month %d accepted\n", month);
    return 0;
}
