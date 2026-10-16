# Practice · Data types and conversion

## (mc) L1 · Which type for a count
You want a variable for the number of students in a room. Which type?
- `double`
- `char`
* `int`
- `float`
> A count is a whole number. You cannot have 34.5 students. Whole numbers are `int`. Slide 4's rule: `int` for counts, `double` for decimals, `char` for one symbol.

## (mc) L1 · Which type for a price
You want a variable for a price, like 4.50. Which type is the safe choice in this course?
- `int`
- `char`
- `float`
* `double`
> A price has a decimal part, so it needs a decimal type. C has two, `float` and `double`. `double` keeps more digits and is the default in this course. Use `float` only when someone tells you to.

## (mc) L1 · Which type for a letter grade
You want a variable that holds one letter grade, like `A`. Which line is right?
- `int grade = A;`
- `char grade = "A";`
* `char grade = 'A';`
- `double grade = 'A';`
> One symbol is a `char`, and a `char` value is written between **single** quotes: `'A'`. Double quotes `"A"` are for text, which comes next week, and the compiler warns you if you use them here.

## (mc) L2 · Declared but not filled
```
int count;
printf("%d\n", count);
```

What does this print?
- `0`, always.
- Nothing. The compiler refuses to make the program.
* A random number. The box was never given a value.
- The word `count`.
> `int count;` makes the box but puts nothing in it. Whatever old rubbish is in that piece of memory is what you get. It may be 0 today and 4198573 tomorrow. With `-Wall` the compiler warns: `'count' is used uninitialized`. Always give a variable a value before you read it: `int count = 0;`.

## (mc) L2 · The cast
```
int a = 7;
int b = 2;
double result1 = a / b;
double result2 = (double)a / b;
printf("%.2f\n", result1);
printf("%.2f\n", result2);
```

What are the two lines printed?
- `3.50` and `3.50`
* `3.00` and `3.50`
- `3.00` and `3.00`
- `3` and `3.5`
> `a / b` is `int` divided by `int`, so it is 3 before it is stored, and the `double` box just holds `3.00`. `(double)a` turns the 7 into 7.0 **before** the division, so `7.0 / 2` is 3.5. The cast must be on one of the numbers being divided, not on the answer.

## (mc) L2 · Minutes into hours and minutes
```
int minutes = 130;
printf("%d h %d min\n", minutes / 60, minutes % 60);
```

What does this print?
- `2.17 h 10 min`
- `2 h 17 min`
* `2 h 10 min`
- `130 h 0 min`
> `130 / 60` is 2.166..., and the decimal part is thrown away: 2. `130 % 60` is what is left after taking two 60s out of 130: 130 − 120 = 10. So `/` gives the hours and `%` gives the leftover minutes. This is why integer division is useful, not only a trap.

## (fib) L3 · The cast to a decimal type
Complete the cast so the division keeps its decimals. Type only what goes in the brackets, like `(double)`.

```
int total = 7;
int people = 2;
double each = [(double)|( double )|(double )|( double)]total / people;
printf("%.2f\n", each);
```

> `(double)total` turns 7 into 7.0 before the division, so `7.0 / 2` is 3.5 and the line prints `3.50`. Without the cast it prints `3.00`.

## (fib) L3 · The type keyword for a decimal
Complete the declaration of a variable that will hold a height like 1.82. Use the type this course prefers for decimals.

```
[double] height = 1.82;
```

> `double` is the type for numbers with a decimal point in this course. `int` would throw the .82 away, and `float` keeps fewer digits.

## (fib) L3 · The hole for one character
Complete the hole so the letter in `grade` is printed.

```
char grade = 'B';
printf("Grade: [%c]\n", grade);
```

> `%c` is the hole for a `char`. It prints the symbol itself, `B`. If you used `%d` you would see the number the computer uses for `B`, which is 66.
