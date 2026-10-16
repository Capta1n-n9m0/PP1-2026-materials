/*
 * 16_post_and_pre_increment.c  -  CSCI 1101, class 5
 *
 * What it does: a++ against ++a, when the value is used in the same line. b
 *   = a++ gives b the OLD value. d = ++c gives d the NEW value.
 *
 * Compile:  gcc -Wall 16_post_and_pre_increment.c -o post_and_pre_increment
 * Run:      ./post_and_pre_increment        (in Windows PowerShell:  .\post_and_pre_increment)
 *
 * Try:
 *   1. Before you run it, write down the four numbers you expect.
 *   2. Change ++ to -- in both lines. Predict, then run.
 */
#include <stdio.h>

int main(void) {
    int a = 5;
    int b = a++;      // first use a (b gets 5), then add 1 to a
    printf("a is %d, b is %d\n", a, b);

    int c = 5;
    int d = ++c;      // first add 1 to c, then use it (d gets 6)
    printf("c is %d, d is %d\n", c, d);
    return 0;
}
