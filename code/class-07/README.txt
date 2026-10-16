CSCI 1101 - Class 7 - Functions

These are the programs from the class. Open the folder in VS Code,
pick a file, read the comment at the top, compile it, run it,
and then do the "Try" list. Changing a program is the best way to learn it.

Files 26 to 29 are the solutions of the four tasks. Try the task first.

01_recap_loop.c                The recap question from the start of class: a counter inside a loop.
02_stars_copy.c                Prints three rows of stars, 3, 5 and 7 long, WITHOUT a function.
03_stars_function.c            The same three rows of stars, WITH a function.
04_square.c                    Our first function with a result: square takes a whole number and gives back that number times itself.
05_call_flow.c                 The same square function, with printf lines that show the jumps: from main into square, and back to main with the answer.
06_several_calls.c             Calls inside calls: two calls added up, a call whose argument is another call, and a call whose argument is a sum.
07_bug_after_main.c            THIS PROGRAM DOES NOT COMPILE, on purpose.
08_prototype.c                 The function is below main, but a prototype above main tells gcc its name, its parameters and what it gives back.
09_add.c                       A function with two parameters.
10_power.c                     power(base, exp) multiplies base by itself exp times, with a loop inside the function.
11_average.c                   Two average functions.
12_greet.c                     A function with no parameters and no result: void greet(void).
13_print_vs_return.c           Printing is not returning.
14_bug_void_value.c            THIS PROGRAM DOES NOT COMPILE, on purpose.
15_max.c                       max gives back the larger of two numbers.
16_is_even.c                   is_even gives back 1 (yes) or 0 (no).
17_factorial.c                 Class 6 factorial, now as a function.
18_letter.c                    A function that gives back a letter grade for a score, with the else-if chain of class 4.
19_read_between.c              The input check of class 6 as a function: read_between(low, high) keeps asking until the number is between low and high, then gives it back.
20_report.c                    The worked example: a whole program split into functions.
21_report_all_in_main.c        The same program as 20_report.c, all inside main.
22_bug_no_return.c             THIS PROGRAM HAS A BUG ON PURPOSE.
23_bug_wrong_args.c            THIS PROGRAM DOES NOT COMPILE, on purpose.
24_bug_semicolon_header.c      THIS PROGRAM DOES NOT COMPILE, on purpose.
25_bug_no_brackets.c           THIS PROGRAM HAS A BUG ON PURPOSE.
26_task_cube.c                 Solution of task 1: int cube(int x) gives back x times x times x.
27_task_sign.c                 Solution of task 2: int sign(int n) gives back -1 for a negative number, 0 for zero and 1 for a positive number.
28_task_rectangle.c            Solution of task 3: print_rectangle(width, height) prints a rectangle of stars.
29_task_celsius.c              Solution of task 4: celsius_to_fahrenheit(c) gives back c * 9 / 5 + 32, with double values.
