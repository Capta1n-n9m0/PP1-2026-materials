CSCI 1101 - Class 10 - Search, min-max and bubble sort

These are the programs from the class. Open the folder in VS Code,
pick a file, read the comment at the top, compile it, run it,
and then do the "Try" list. Changing a program is the best way to learn it.

Files 19 and 20 are the solutions of the two tasks. Try the task first.

01_recap_array.c               The recap question from the start of class: an array of five numbers, one element printed, then the sum made by a loop.
02_print_array.c               A function that prints any array of whole numbers.
03_sum_array.c                 A function that adds up the elements of an array and returns the sum.
04_double_all.c                A function that doubles every element of an array.
05_search.c                    Linear search, written in main: look at every element, one by one, until the wanted number is found.
06_find.c                      Linear search as a function: find returns the index of the first element equal to target, or -1 if there is none.
07_bug_find_else.c             A common mistake in search: the else returns -1 inside the loop, so only the first element is ever checked.
08_count.c                     Counting: how many times does a value appear? Ten dice rolls, and a function that counts how many are 6.
09_max.c                       The largest element: start with the first element as the best so far, then look at the others one by one.
10_bug_max_zero.c              A common mistake: max starts at 0 instead of a[0].
11_min_max.c                   The smallest and the largest in one loop, as two functions: min_of and max_of.
12_min_position.c              Not the smallest value but WHERE it is: pos remembers the index of the smallest so far.
13_bug_swap_no_temp.c          A swap that does not work: a[0] = a[1]; then a[1] = a[0]; Both elements end up 7: the 3 was lost on the first line.
14_swap.c                      Swapping two elements the right way, with a third box called temp.
15_one_pass.c                  One pass of bubble sort: compare each pair of neighbours, from the left, and swap them if they are in the wrong order.
16_bubble_sort.c               The whole bubble sort: the pass from 15_one_pass.c, repeated N - 1 times.
17_sort_function.c             Bubble sort as a function, bubble_sort(a, n).
18_bubble_early_exit.c         An extra (optional): bubble sort that stops early.
19_task_index_of_max.c         Solution of the task: int index_of_max(int a[], int n) returns the index of the largest element.
20_task_contains.c             Solution of the second task: int contains(int a[], int n, int x) returns 1 if x is in the array and 0 if it is not.
