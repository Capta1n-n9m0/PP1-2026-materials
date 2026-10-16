/*
 * 19_task_email.c  -  CSCI 1101, class 12
 *
 * What it does: Solution of the second task: reads a user name and builds
 *   an e-mail address with strcpy and strcat, in an array big enough for
 *   both parts.
 *
 * Compile:  gcc -Wall 19_task_email.c -o task_email
 * Run:      ./task_email        (in Windows PowerShell:  .\task_email)
 *
 * Try:
 *   1. Run it with your own first name.
 *   2. Make the address with one snprintf instead of strcpy and strcat.
 *   3. Print how many characters the address has.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char user[20];
    char email[40];
    printf("User name: ");
    scanf("%19s", user);
    strcpy(email, user);
    strcat(email, "@ada.edu.az");
    printf("%s\n", email);
    return 0;
}
