# Practice · Table loops

## (mc) L1 · Two loops
```
for (int r = 0; r < 2; r++) {
    for (int c = 0; c < 3; c++) {
        printf("%d ", r + c);
    }
    printf("\n");
}
```

What does it print?
- `0 1` then `1 2` then `2 3`
* `0 1 2` then `1 2 3`
- `0 1 2 1 2 3` on one line
- `0 0 0` then `1 1 1`
> The outer loop runs for rows 0 and 1. For each row the inner loop runs for columns 0, 1, 2 and prints `r + c`. After every row, `printf("\n")` starts a new line. Class 13, slides 18 to 20.

## (mc) L1 · Visit every box
`int t[ROWS][COLS];` Which pair of loops visits every box exactly once?
- `for (r = 0; r <= ROWS; r++)` and inside it `for (c = 0; c <= COLS; c++)`
- `for (r = 1; r < ROWS; r++)` and inside it `for (c = 1; c < COLS; c++)`
* `for (r = 0; r < ROWS; r++)` and inside it `for (c = 0; c < COLS; c++)`
- `for (r = 0; r < COLS; r++)` and inside it `for (c = 0; c < ROWS; c++)`
> Rows go from 0 to `ROWS - 1` and columns from 0 to `COLS - 1`, so both loops start at 0 and use `<`. With `<=` the loops go one row and one column too far; starting at 1 skips row 0 and column 0. Class 13, slides 20 and 40.

## (mc) L2 · Where the largest starts
You print the largest value of every row of `t`. Where does `int max = t[r][0];` go?
* Inside the outer loop, before the inner loop.
- Above both loops, once.
- Inside the inner loop.
- After both loops.
> Every row needs a fresh start, so `max` is set at the start of each row, inside the outer loop. It starts at the first box of that row, `t[r][0]`, and the inner loop compares the other boxes with it. Class 13, slides 45 and 46.

## (mc) L2 · Column sums
```
int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
for (int c = 0; c < 3; c++) {
    int sum = 0;
    for (int r = 0; r < 2; r++) {
        sum += a[r][c];
    }
    printf("%d ", sum);
}
```

What does it print?
- `6 15`
- `21`
- `1 5 9`
* `5 7 9`
> The outer loop is the column, so there is one sum per column: 1 + 4 = 5, 2 + 5 = 7, 3 + 6 = 9. `6 15` would be the row sums. Class 13, slides 32 and 33.

## (mc) L2 · Count the even boxes
```
int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
int even = 0;
for (int r = 0; r < 2; r++) {
    for (int c = 0; c < 3; c++) {
        if (a[r][c] % 2 == 0) {
            even++;
        }
    }
}
printf("%d\n", even);
```

What does it print?
- `2`
* `3`
- `6`
- `12`
> The `if` runs once for every box. The even values are 2, 4 and 6, so `even` is 3. It starts at 0 once, before both loops, because it counts the whole table. Class 13, slides 43 and 44.

## (mc) L1 · Why %4d
A program prints a table with `printf("%4d", t[r][c]);`. Why `%4d` and not `%d`?
- `%4d` prints only the first 4 numbers.
- `%4d` prints every number 4 times.
* `%4d` gives every number 4 places, so the columns line up.
- `%4d` is needed for numbers below 0.
> `%4d` pads every number to 4 places. Short and long numbers, and even `-1`, take the same width, so the columns stay straight. Class 13, slide 20.

## (fib) L2 · The inner loop
The outer loop is `for (int r = 0; r < ROWS; r++)`. Complete the inner loop so that it visits every column. Type only the comparison sign.

```
for (int c = 0; c [<] COLS; c++)
```

> The columns go from 0 to `COLS - 1`, so the loop runs while `c < COLS`. With `<=` it would read one column too far, and C would not warn you. Class 13, slides 20 and 40.

## (fib) L2 · A fresh sum
In a program that prints the sum of every row, which value does `sum` get at the start of each row? Type only the number.

```
int sum = [0];
```

> Each row starts again from 0. The line goes inside the outer loop, before the inner loop. If it is above both loops, the sums keep growing from row to row. Class 13, slides 27 to 31.

## (fib) L3 · One row too far
A table has 3 rows. A loop over the rows says `r <= 3` and starts at `r = 0`. How many times does the loop run? Type only the number.

Times: [4]

> `r` takes 0, 1, 2 and 3: four times. There is no row 3, so the last round reads memory outside the table, and gcc does not warn. Write `r < 3`. Class 13, slides 39 and 40.
