# Practice · Grids in functions and matrices

## (mc) L1 · Which brackets can be empty
A function gets a grid with 3 columns. Which parameter is right?
- `int g[][]`
* `int g[][3]`
- `int g[3][]`
- `int g[]`
> The first brackets (the rows) can stay empty. The second ones (the columns) must have the number, because C needs the length of a row to find where each row starts. The number of rows comes in as its own parameter, `int rows`. Class 14, slides 8 and 13.

## (mc) L1 · Calling the function
`print_grid` has the header `void print_grid(int g[][4], int rows)`. `main` has `int a[3][4];`. Which call is right?
- `print_grid(a[3][4], 3);`
- `print_grid(a[][4], 3);`
- `print_grid(int a, 3);`
* `print_grid(a, 3);`
> You pass a grid by its name only, with no brackets, and then the number of rows. The brackets belong in the header, not in the call. Class 14, slides 8 and 10.

## (mc) L1 · The square matrix
Which of these is a **square** matrix?
- `int m[2][3];`
* `int m[3][3];`
- `int m[3][1];`
- `int m[9];`
> A square matrix has as many rows as columns: 3 and 3. An array with one size, like nine boxes in a row, is a 1D array, not a grid. Class 14, slide 17.

## (mc) L2 · One row's sum
```
#define COLS 3

int row_sum(int g[][COLS], int r) {
    int sum = 0;
    for (int c = 0; c < COLS; c++) {
        sum += g[r][c];
    }
    return sum;
}
```

`main` has `int a[2][COLS] = {{1, 2, 3}, {4, 5, 6}};`. What is `row_sum(a, 1)`?
- `6`
- `21`
* `15`
- `5`
> The row number `r` is 1, so the loop adds row 1: 4 + 5 + 6 = 15. Rows start at 0, so row 1 is the second row. 6 would be row 0, and 21 the whole grid. Class 14, slides 9 and 15.

## (mc) L2 · The function changes the grid
```
void add_one(int g[][3], int rows) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < 3; c++) {
            g[r][c]++;
        }
    }
}
```

`main` has `int a[2][3] = {{1, 2, 3}, {4, 5, 6}};`, calls `add_one(a, 2);`, then prints `a[0][0]` and `a[1][2]`. What is printed?
- `1 6`
* `2 7`
- `2 6`
- `1 7`
> The grid is not copied: `add_one` adds 1 to every cell of `main`'s own `a`. So the first cell is now 2 and the last cell (row 1, column 2) is now 7. Class 14, slide 14.

## (mc) L2 · The transpose
`m` is `1 2 3 / 4 5 6 / 7 8 9`. After `t[j][i] = m[i][j];` for every `i` and `j`, what are `t[0][2]` and `t[1][0]`?
- `3` and `4`
- `3` and `2`
* `7` and `2`
- `7` and `4`
> In the transpose the two indexes swap places. Row 0, column 2 of `t` is row 2, column 0 of `m`: 7. Row 1, column 0 of `t` is row 0, column 1 of `m`: 2. The rows of `m` are the columns of `t`. Class 14, slide 19.

## (fib) L3 · The other diagonal
`m` is `1 2 3 / 4 5 6 / 7 8 9`. The other diagonal goes from the top right to the bottom left: 3, 5 and 7. Type its sum.

Sum: [15]

> The other diagonal uses the cells in row 0 column 2, row 1 column 1 and row 2 column 0: 3 + 5 + 7 = 15. The column is `N - 1 - i`. Here the main diagonal (1 + 5 + 9) is 15 too. Class 14, slides 21 and 22.

## (fib) L3 · Add two matrices
`x` is `1 2 / 3 4` and `y` is `4 3 / 2 1`. `s` is their sum, cell by cell. Every cell of `s` is the same number. Type it.

Every cell: [5]

> Two matrices are added cell by cell, each cell with the cell in the same place: 1 + 4, 2 + 3, 3 + 2, 4 + 1. All four are 5. Class 14, slide 18.

## (fib) L3 · Transpose in place
To transpose a square matrix in place, you swap each pair once, so the inner loop starts just after the diagonal. Complete the start of the inner loop. Type only what goes after `j = i +`.

```
for (int j = i + [1]; j < N; j++)
```

> With `j = i + 1` only the cells above the diagonal are visited, and each pair is swapped once. If `j` starts at 0, every pair is swapped twice and the matrix comes out unchanged. Class 14, slides 23 to 25.
