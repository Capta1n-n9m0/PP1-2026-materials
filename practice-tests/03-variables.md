# Practice · Variables

## (mc) L1 · What a variable is
What is a variable?
- A command that prints.
* A box in memory with a name and a value inside.
- A file ending in `.c`.
- A kind of error.
> A variable is a named box. `int age = 20;` makes a box called `age` with 20 in it.

## (mc) L1 · The type for a whole number
Which type holds a whole number, like 20 or -3?
- `double`
- `char`
* `int`
- `number`
> `int` is for whole numbers. `double` is for numbers with a decimal point. `char` is for one character. `number` is not a C type.

## (mc) L1 · The type for a price
Which type would you use for a price like 4.75?
- `int`
* `double`
- `char`
- `price`
> 4.75 has a decimal point, so `double`. An `int` would throw the .75 away.

## (mc) L2 · What = means
In C, what does `x = x + 1;` do?
- It checks whether x equals x + 1.
- It is an error, because no number equals itself plus one.
* It calculates x + 1 and stores the result back in x.
- It prints x + 1.
> `=` is not "equals". It means "work out the right side, then put the answer in the box on the left". If x was 5, it becomes 6.

## (mc) L2 · Trace it
What does this print?

```
int y = 3;
y = y * 2 + 1;
printf("%d\n", y);
```
- `3`
- `8`
- `6`
* `7`
> Right side first: y is 3, so 3 × 2 = 6, then 6 + 1 = 7. Then 7 is stored in y. Multiplication comes before addition, as in school. 8 is what you get if you add first, which is wrong.

## (mc) L2 · Single or double quotes
Which line is correct?
* `char grade = 'A';`
- `char grade = "A";`
- `char grade = A;`
- `char grade = 'A"`
> One character goes in single quotes: `'A'`. Double quotes are for text. Without any quotes, `A` would be taken as the name of a variable.

## (fib) L3 · Declare a whole number
Write a line that makes a variable called `count` for whole numbers and puts 5 in it: [int count = 5;|int count=5;]
> `int count = 5;`. Type, name, equals, value, semicolon.

## (fib) L3 · Declare a decimal number
Write a line that makes a variable called `price` with a decimal point and puts 2.5 in it: [double price = 2.5;|double price=2.5;]
> `double price = 2.5;`. A number with a decimal point needs `double`.

## (fib) L3 · Add one
Write one line that adds 1 to the variable `x` that already exists: [x = x + 1;|x=x+1;|x += 1;|x+=1;|x++;]
> `x = x + 1;`. Read it as: take x, add one, put the answer back in x.
