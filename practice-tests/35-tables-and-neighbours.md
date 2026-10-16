# Practice · Tables and neighbours

## (mc) L1 · One answer per column
`int pts[PLAYERS][ROUNDS]` has a row per player and a column per round. You want the **total of each round**. Which loop goes outside?
- The player loop.
* The round loop.
- Either one: the totals come out the same.
- No loop: one line is enough.
> The outside loop is the thing you want one answer for. One total per round is one answer per column, so the round loop goes outside and the inner loop goes down the players. Class 14, slides 28 to 30.

## (mc) L1 · What a neighbour is
Which cells are the neighbours of a cell in the middle of a grid?
- Only the cells above, below, left and right: 4 cells.
* The 8 cells that touch it, across and diagonally.
- All the cells in the same row and column.
- The 9 cells of the 3 by 3 box, the cell itself included.
> The neighbours are the cells that touch it: above, below, left, right, and the four diagonal ones. That is 8. The cell itself is in the middle of the 3 by 3 box and is not its own neighbour. Class 14, slides 32 and 33.

## (mc) L1 · What is_inside answers
```
int is_inside(int r, int c) {
    return r >= 0 && r < ROWS && c >= 0 && c < COLS;
}
```

With `ROWS` 4 and `COLS` 5, which call gives 0?
- `is_inside(0, 0)`
- `is_inside(3, 4)`
- `is_inside(2, 2)`
* `is_inside(4, 0)`
> The rows go from 0 to `ROWS - 1`, so from 0 to 3. Row 4 does not exist, so `is_inside(4, 0)` is 0. (3, 4) is the bottom-right corner, still on the grid. Class 14, slide 38.

## (mc) L2 · The best of each round
```
int pts[3][2] = {{5, 9},
                 {8, 2},
                 {6, 7}};
for (int r = 0; r < 2; r++) {
    int best = pts[0][r];
    for (int p = 1; p < 3; p++) {
        if (pts[p][r] > best) {
            best = pts[p][r];
        }
    }
    printf("%d\n", best);
}
```

What does it print?
- `9` and `8`
- `9` and `7`
* `8` and `9`
- `14` and `10`
> The round loop is outside, so there is one answer per column. Column 0 holds 5, 8 and 6: the best is 8. Column 1 holds 9, 2 and 7: the best is 9. 14 and 10 are the totals of the first two rows, a different question. Class 14, slide 29.

## (mc) L2 · An edge cell
A grid has 4 rows and 5 columns. How many neighbours does the cell in row 3, column 2 have?
- `3`
* `5`
- `8`
- `6`
> Row 3 is the bottom row, so there is no row below. Column 2 is not at a side, so this is an edge cell, not a corner. Its neighbours: three in row 2 and two in row 3, left and right. 5. Class 14, slides 34, 35 and 40.

## (mc) L2 · Past the left edge
```
int g[3][4] = {{1, 2, 3, 4},
               {5, 6, 7, 8},
               {9, 10, 11, 12}};
int r = 2;
int c = 0;
printf("%d\n", g[r][c - 1]);
```

There is no column -1. What happens on the course's gcc?
- gcc stops with an error.
- It prints 0.
* It prints 8.
- It prints 9.
> C does not check. In memory the rows sit one after another, so the box before the first cell of row 2 is the last cell of row 1, which holds 8. No error and no warning: a wrong neighbour that looks right. Test `is_inside` before you read. Class 14, slides 36 and 37.

## (fib) L3 · How many positions
The two loops `dr` from -1 to 1 and `dc` from -1 to 1 visit every position of the 3 by 3 box around a cell, the cell itself included. How many times does the inner body run for one cell? Type the number.

Times: [9]

> 3 values of `dr` times 3 values of `dc` is 9. One of them is `dr` 0 and `dc` 0, the cell itself, which is skipped: 8 neighbours are left. Class 14, slide 33.

## (fib) L3 · Skip the cell itself
Complete the line that skips the cell itself and goes on with the next `dc`. Type the keyword only.

```
if (dr == 0 && dc == 0) {
    [continue];
}
```

> `continue` skips the rest of this round of the loop and goes on with the next one, as in class 6. `break` would leave the inner loop and skip the remaining neighbours. Class 14, slide 39.

## (fib) L3 · A corner
How many neighbours does a corner cell have, in any grid of at least 2 rows and 2 columns? Type the number.

Neighbours: [3]

> A corner cell touches one cell across, one cell up or down, and one diagonal. The other five positions are off the grid. Edges have 5, middle cells 8. Class 14, slides 35 and 40.
