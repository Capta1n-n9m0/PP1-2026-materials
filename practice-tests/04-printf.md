# Practice · printf

## (mc) L1 · What %d is
In `printf("Age: %d\n", age);`, what is `%d`?
- Text that is printed as it is.
* A hole that is replaced by the value of `age`.
- A comment.
- A mistake.
> `%d` is a hole. It is not printed. The value of the variable after the comma is put in its place, so the screen shows `Age: 20`.

## (mc) L1 · The hole for a whole number
Which hole prints an `int`?
* `%d`
- `%f`
- `%c`
- `%i` and `%d` are both wrong
> `%d` is for `int`. `%f` is for `double`, `%c` for `char`.

## (mc) L1 · The hole for two decimals
Which hole prints a `double` with exactly two digits after the decimal point?
- `%f`
- `%2f`
* `%.2f`
- `%d`
> `%.2f`: the dot and the 2 say "two digits after the point". Plain `%f` gives six. `%2f` has no dot and does not do what you want.

## (mc) L2 · What plain %f shows
What does this print?

```
double p = 3.75;
printf("%f\n", p);
```
- `3.75`
* `3.750000`
- `4`
- `3`
> Plain `%f` always shows six digits after the point. For `3.75` use `%.2f`.

## (mc) L2 · Two holes
What does this print?

```
int a = 3;
int b = 4;
printf("%d plus %d\n", a, b);
```
- `a plus b`
- `%d plus %d`
- `4 plus 3`
* `3 plus 4`
> The first variable fills the first hole, the second fills the second. So `3 plus 4`.

## (mc) L2 · Wrong hole
What happens with this?

```
double p = 3.75;
printf("%d\n", p);
```
- It prints `3.75`.
- It prints `3`.
* It prints a nonsense number, and with `-Wall` the compiler warns you.
- The program does not compile.
> `%d` is for `int`, but `p` is a `double`. The program compiles and prints rubbish. Compile with `-Wall` and you get a warning telling you the hole and the type do not match.

## (fib) L3 · Print an int
Complete the line so it prints `Year: 2026` from the variable `year`: printf("Year: [%d]\n", year);
> `%d`, because `year` is an `int`.

## (fib) L3 · Print with two decimals
Complete the line so it prints `Height: 1.80` from the `double` variable `h`: printf("Height: [%.2f]\n", h);
> `%.2f`: a `double`, shown with two digits after the point.

## (fib) L3 · Print a character
Complete the line so it prints `Grade: A` from the `char` variable `g`: printf("Grade: [%c]\n", g);
> `%c` is the hole for one character.
