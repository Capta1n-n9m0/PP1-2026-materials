CSCI 1101 - Class 14 - Tables and matrices

These are the programs from the class. Open the folder in VS Code,
pick a file, read the comment at the top, compile it, run it,
and then do the "Try" list. Changing a program is the best way to learn it.

File 03 does not compile on purpose. File 17 is the solution of the task: try the task first.

01_recap_rows.c                The recap question from the start of class: a 2 by 3 grid, and a sum for each row.
02_print_grid.c                One function prints any grid that has 4 columns.
03_bug_no_cols.c               This program does not compile.
04_times_table.c               A function fills the caller's grid with a times table.
05_total.c                     A function adds every cell of a grid and returns the total.
06_matrix_add.c                Adds two 2 by 3 matrices cell by cell: s[i][j] = a[i][j] + b[i][j].
07_transpose.c                 The transpose of a 3 by 3 matrix: row i of m becomes column i of t.
08_diagonals.c                 Adds the main diagonal of a 3 by 3 matrix (the cells where the row and the column are equal, m[i][i]) and the other diagonal (m[i][N - 1 - i]).
09_bug_transpose_twice.c       A wrong transpose "in place": it swaps m[i][j] and m[j][i] for every i and j.
10_transpose_in_place.c        The transpose done in place, correctly: the inner loop starts at j = i + 1, so only the cells above the diagonal are swapped, each pair once.
11_points_table.c              A table of points: 4 players (rows) in 3 rounds (columns).
12_is_inside.c                 is_inside(r, c) answers one question: is the position (r, c) on the grid? It is 1 for (0, 0) and (3, 4), and 0 for (-1, 2) and (2, 5).
13_bug_right_edge.c            Reads the "right neighbour" of a cell on the right edge without checking.
14_count_neighbours.c          For every cell of a 4 by 5 grid, counts how many neighbour cells it has: 3 in a corner, 5 on an edge, 8 in the middle.
15_taken_around.c              A seating chart: 1 is a taken seat, 0 a free one.
16_char_map.c                  A grid of char: each row of the seat map is a string, so map[r][c] is one character.
17_task_count_value.c          Solution of the task: count_value(g, rows, v) counts the cells of a grid that are equal to v.
