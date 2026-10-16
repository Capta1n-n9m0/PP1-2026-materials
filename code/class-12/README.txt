CSCI 1101 - Class 12 - String manipulation and conversions

These are the programs from the class. Open the folder in VS Code,
pick a file, read the comment at the top, compile it, run it,
and then do the "Try" list. Changing a program is the best way to learn it.

Files 18 and 19 are the solutions of the two tasks. Try the task first.

01_recap_length.c              The recap question from the start of class: a loop walks along a string until it meets the end mark, counting the characters.
02_strlen.c                    strlen counts the characters of a string, up to the end mark.
03_strlen_loop.c               A loop from 0 to strlen(word) visits every character of a string.
04_bug_assign.c                You cannot put a new string into an array with =.
05_strcpy.c                    strcpy copies a string into an array: strcpy(to, from).
06_strcat.c                    strcat adds one string to the end of another: strcat(to, more).
07_bug_strcat_room.c           An array of 6 boxes cannot hold "Hi there!" (9 letters and the end mark).
08_bug_compare_eq.c            Comparing two strings with == does not compare the letters.
09_strcmp.c                    strcmp compares two strings letter by letter.
10_password.c                  The right way to ask "are these two strings equal?": strcmp(a, b) == 0.
11_first_name.c                Reads two names and prints the one that comes first in alphabetical order, using the sign of strcmp.
12_reverse.c                   A function that turns a string around in place: swap the first and the last character, then the second and the second-to-last, until the two indexes meet.
13_palindrome.c                A palindrome reads the same from both ends, like level.
14_digits_to_int.c             Turns the text "2026" into the number 2026 by hand: for each digit character, multiply what you have by 10 and add the digit.
15_atoi.c                      atoi, from stdlib.h, does the same job: text to int.
16_int_to_string.c             Turns the number 472 into the text "472" by hand: n % 10 is the last digit, n / 10 drops it.
17_sprintf.c                   sprintf works like printf, but it writes into a string instead of the screen.
18_task_digit_sum.c            Solution of the first task: a function that adds up the digit characters of a string, so "2026" gives 2 + 0 + 2 + 6 = 10.
19_task_email.c                Solution of the second task: reads a user name and builds an e-mail address with strcpy and strcat, in an array big enough for both parts.
