CSCI 1101 - Class 13 - Multidimensional arrays

These are the programs from the class. Open the folder in VS Code,
pick a file, read the comment at the top, compile it, run it,
and then do the "Try" list. Changing a program is the best way to learn it.

Files 14 and 15 are the solutions of the two tasks. Try the task first.

01_recap_row.c                 The recap from the start of class: one array of 4 temperatures, a loop that prints them all.
02_table.c                     A two-dimensional array: 3 rows and 4 columns of int, filled with an initializer list, one pair of braces per row.
03_missing_zero.c              In an initializer list, every box you do not give a value becomes 0.
04_order.c                     Two loops, one inside the other.
05_print_grid.c                Prints the whole temperature table with two loops: t[r][c] for every row r and every column c.
06_define_labels.c             The same table with #define ROWS and COLS, so the sizes are written once.
07_fill.c                      Fills a table with a loop instead of a list: box [r][c] gets (r + 1) * (c + 1).
08_row_sums.c                  The sum of every row: the sum starts at 0 before the inner loop and is printed after it.
09_col_sums.c                  The sum of every column: now the outer loop is the column and the inner loop goes down the rows.
10_read_grid.c                 Reads a table of 2 rows and 3 columns from the keyboard with scanf, row by row, then prints it.
11_past_the_row.c              C does not check the column number.
12_bug_le_rows.c               A loop with r <= ROWS goes one row too far.
13_char_grid.c                 A table of char: a small board of 3 rows and 5 columns.
14_task_below_zero.c           Solution of the first task: count the boxes of the temperature table that are below zero, and print where each one is.
15_task_row_max.c              Solution of the second task: the largest value of every row.
