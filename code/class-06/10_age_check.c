/*
 * 10_age_check.c
 *
 * Asks for an age. If the age is below 0 or above 120, it asks again.
 * It keeps asking until the age is good.
 *
 * How to run it (in the VS Code terminal, in this folder):
 *     gcc -Wall 10_age_check.c -o age
 *     ./age          (in Windows PowerShell: .\age)
 *
 * Try:
 *   1. Run it and type -5, then 200, then 19. You should see Invalid twice, then Accepted: 19.
 *   2. Run it and type 0. Accepted at once: the loop runs zero times.
 *   3. Test the edges: 120 is accepted, 121 is not.
 *   4. Type only numbers. If you type a letter, the program goes round for ever: press Ctrl+C.
 */
#include <stdio.h>

int main(void) {
    int age;

    printf("Enter age: ");
    // Ask once, before the loop.
    scanf("%d", &age);

    // The condition describes the BAD input: below 0 OR above 120.
    while (age < 0 || age > 120) {
        printf("Invalid. Try again: ");
        // This scanf is the update: it is the only line that can make the condition false.
        scanf("%d", &age);
    }

    // After the loop we KNOW that the age is good.
    printf("Accepted: %d\n", age);
    return 0;
}
