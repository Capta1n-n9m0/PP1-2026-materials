CSCI 1101 - Class 11 - Characters and strings

These are the programs from the class. Open the folder in VS Code,
pick a file, read the comment at the top, compile it, run it,
and then do the "Try" list. Changing a program is the best way to learn it.

Files 08 and 18 do not compile, and files 15 and 20 get a warning: the bug is the point.
Files 28 and 29 are the solutions of the two tasks. Try the task first.

01_recap_stop_at_zero.c        The recap question from the start of class: a loop that walks along an array and stops when it meets a 0.
02_char_basics.c               Three char variables: a letter, a digit and a space.
03_ascii.c                     Every character is stored as a small whole number, its ASCII code.
04_alphabet.c                  A for loop whose counter is a char: it goes from A to Z, one letter at a time, because the letters have codes that follow each other.
05_char_arith.c                Arithmetic on characters.
06_case_by_hand.c              Turning a small letter into a capital by hand: subtract a, add A.
07_digit_value.c               The character 7 is not the number 7: its code is 55.
08_bug_char_quotes.c           A common mistake: a char written with double quotes.
09_read_char.c                 Reads one character and says whether it is a small letter, a capital, a digit or something else, by comparing it with the first and the last character of each group.
10_ctype.c                     The library ctype.h does these tests for you: isdigit, isalpha, isupper, islower answer yes or no; toupper and tolower change a letter and leave everything else alone.
11_ctype_true.c                What do the is.
12_classify.c                  The program of file 09 again, now with ctype.h.
13_string_boxes.c              A string is an array of char that ends with the character \0.
14_null_char.c                 The string "hi" takes three boxes: h, i and the \0, whose code is 0.
15_bug_no_room.c               A common mistake: "cat" needs 4 boxes (c, a, t and \0), but the array has only 3.
16_print_string.c              Printing a string with %s inside a sentence, and one character of it with %c.
17_change_letter.c             A string is an array, so you can change one box: cat becomes bat, then bar.
18_bug_assign_string.c         A common mistake: a whole array cannot be given a new value with =, and a string is an array.
19_scanf_string.c              Reads a name with scanf and %s.
20_bug_scanf_amp.c             A common mistake: an & before the array name in scanf.
21_fgets.c                     Reads a whole line, spaces included, with fgets(line, 50, stdin).
22_length_loop.c               The length of a string, counted by hand: walk along the boxes until the \0.
23_length_function.c           The length as a function.
24_remove_newline.c            After fgets the line ends with \n.
25_count_vowels.c              Counts the vowels in a string with a loop that stops at \0.
26_count_kinds.c               Reads a line with fgets and counts its letters, digits and spaces with isalpha, isdigit and the space character.
27_to_upper.c                  A function that turns every letter of a string into a capital, in place: it changes the caller's array, like double_all in class 10.
28_task_count_char.c           Solution of the first task: int count_char(char s[], char c) returns how many times the character c is in the string s.
29_task_backwards.c            Solution of the second task: print a string backwards.
