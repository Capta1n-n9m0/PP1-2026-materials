# Practice · Math functions

## (mc) L1 · The line you need
Which line do you need at the top of the program to use `sqrt`?
- `#include <stdio.h>`
* `#include <math.h>`
- `#include <sqrt.h>`
- No extra line is needed.
> The math functions come from `math.h`. `stdio.h` only gives `printf` and `scanf`. There is no `sqrt.h`.

## (mc) L1 · Square root
Which function gives the square root?
- `root(x)`
- `sq(x)`
* `sqrt(x)`
- `pow(x)`
> `sqrt` is short for square root. `sqrt(16.0)` is 4.

## (mc) L1 · Power
How do you write 2 to the power 5 in C?
- `2 ^ 5`
- `2 ** 5`
* `pow(2, 5)`
- `power(2, 5)`
> `pow(a, b)` is a to the power b. `pow(2, 5)` is 32. `^` means something else in C, and `**` is not C.

## (mc) L2 · Round, ceil, floor
What are `round(3.6)`, `ceil(3.2)` and `floor(3.8)`, in that order?
- 3, 3, 3
- 4, 3, 4
* 4, 4, 3
- 3, 4, 4
> `round` goes to the nearest whole number: 3.6 → 4. `ceil` always rounds up: 3.2 → 4. `floor` always rounds down: 3.8 → 3.

## (mc) L2 · Printing what sqrt gives
Why does the slide print `round(3.6)` with `%.0f` and not with `%d`?
- Because `%d` cannot print 4.
* Because `round` gives back a `double`, and a `double` needs an `f` hole.
- Because `%.0f` is faster.
- It is a mistake on the slide.
> All the math functions give back a `double`, even `round`. `%d` would print rubbish. `%.0f` prints a `double` with no digits after the point: `4`.

## (mc) L2 · The -lm error
On Linux you compile a program that uses `sqrt` and get `undefined reference to 'sqrt'`. What is the fix?
- Add `#include <stdio.h>`.
- Rename the function to `root`.
- Use `%lf` in `printf`.
* Add `-lm` to the end of the compile command.
> On Linux and WSL the math library must be asked for by name: `gcc -Wall file.c -o file -lm`. That error message always means "add `-lm`".

## (fib) L3 · Square root of 81
Complete the line so it prints `9.00`: printf("%.2f\n", [sqrt(81)|sqrt(81.0)]);
> `sqrt(81)` gives 9, printed with two decimals as `9.00`.

## (fib) L3 · Three to the power four
Complete the line so it prints `81.00`: printf("%.2f\n", [pow(3, 4)|pow(3,4)]);
> `pow(3, 4)` is 3 × 3 × 3 × 3 = 81.

## (fib) L3 · Diagonal of a rectangle
A rectangle has width `w` and height `h`. Complete the line that computes the diagonal: double d = sqrt([w * w + h * h|w*w + h*h|w*w+h*h|pow(w, 2) + pow(h, 2)|pow(w,2) + pow(h,2)|pow(w,2)+pow(h,2)|h * h + w * w|h*h + w*w|h*h+w*w]);
> Pythagoras: the diagonal is the square root of w² + h². In C, `sqrt(w * w + h * h)`.
