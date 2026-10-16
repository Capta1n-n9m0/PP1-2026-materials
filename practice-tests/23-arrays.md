# Practice · Arrays

## (mc) L1 · What an array is
What is an array?
- A variable that can hold one value of any type.
* A row of boxes with one name, all of the same type, each with a number (its index).
- A list of values of different types, like a number and a letter.
- A function that stores numbers.
> `int scores[5];` is five `int` boxes under the one name `scores`. You reach a box with the name and its index: `scores[2]`. Class 9, slides 19 to 21.

## (mc) L1 · The first box
`int a[10];` makes an array of 10 boxes. Which is the **first** box, and which is the **last**?
- `a[1]` and `a[10]`
- `a[0]` and `a[10]`
* `a[0]` and `a[9]`
- `a[1]` and `a[9]`
> The index starts at 0. An array of N boxes has the indexes 0 to N-1, so 10 boxes go from `a[0]` to `a[9]`. Class 9, slide 25.

## (mc) L1 · Parts of the declaration
```
double prices[3];
```

What does the `3` mean?
- The last index is 3.
- Every box starts with the value 3.
- Every price has 3 decimals.
* The array has 3 boxes.
> `double` is the type of every box, `prices` is the name, and `[3]` is how many boxes there are. The boxes are `prices[0]`, `prices[1]` and `prices[2]`. Class 9, slides 26 and 34.

## (mc) L2 · Add two boxes
```
int f[6] = {5, 2, 8, 2, 6, 1};
printf("%d\n", f[1] + f[4]);
```

What does it print?
- `7`
* `8`
- `10`
- `13`
> Count from 0: `f[1]` is 2 and `f[4]` is 6, so the sum is 8. If you said 13, you took the first and the fourth number (5 + 8): that is counting from 1. Class 9, slides 23 and 24.

## (mc) L2 · A list of zeros
```
int h[3] = {0};
h[1] = 5;
printf("%d %d %d\n", h[0], h[1], h[2]);
```

What does it print?
- `5 0 0`
- `0 5 5`
* `0 5 0`
- `5 5 5`
> `= {0}` sets every box to 0. Then `h[1] = 5;` changes only box 1, the **second** box. So the boxes hold 0, 5, 0. Class 9, slides 27 and 33.

## (mc) L2 · Copying an array
```
int a[3] = {1, 2, 3};
int b[3];
b = a;
```

What happens when you compile this?
- It compiles, and `b` holds 1, 2, 3.
- It compiles, and `b` holds 0, 0, 0.
- It compiles with a warning.
* It does not compile: `error: assignment to expression with array type`.
> A whole array cannot be copied with `=`. Copy it one box at a time in a loop: `for (int i = 0; i < 3; i++) { b[i] = a[i]; }`. Class 9, slides 67 to 69.

## (fib) L3 · The last index
An `int` array is made with room for 30 values. Type the index of its **last** box. Type only the number.

The last index is [29].

> The indexes start at 0, so an array of 30 boxes has the indexes 0 to 29. The last box is number 29, not 30. Class 9, slides 25 and 26.

## (fib) L3 · March
The array `days` holds the days of the 12 months, January first, as in class. Type the index of the box that holds the days of **March**. Type only the number.

March is at index [2].

> Month number = index + 1. January is index 0, February index 1, March index 2. Class 9, slides 30 and 31.

## (fib) L3 · A short list
An `int` array of 6 boxes is made with the list `{4, 9}` in braces. How many of its boxes hold 0? Type only the number.

[4]

> The list fills the first two boxes with 4 and 9. Every box with no value from the list gets 0: the other 4 boxes. Class 9, slides 32 and 33.
