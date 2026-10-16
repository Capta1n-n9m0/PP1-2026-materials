/*
 * 13_string_boxes.c  -  CSCI 1101, class 11
 *
 * What it does: A string is an array of char that ends with the character
 *   \0. The same word is made twice: box by box, and with a string in
 *   double quotes, which adds the \0 for you.
 *
 * Compile:  gcc -Wall 13_string_boxes.c -o string_boxes
 * Run:      ./string_boxes        (in Windows PowerShell:  .\string_boxes)
 *
 * Try:
 *   1. Change the box w[1] to 'a' and print w again.
 *   2. Make a third string with your own name and print it.
 *   3. In w, put '\0' in box 2 instead of 'l'. What is printed?
 */
#include <stdio.h>

int main(void) {
    // box by box: 5 letters and the end mark '\0' (the "null character")
    char w[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    // the same thing, the short way: gcc counts the boxes and adds the '\0'
    char s[] = "hello";

    printf("%s\n", w);     // %s prints characters until it meets '\0'
    printf("%s\n", s);
    return 0;
}
