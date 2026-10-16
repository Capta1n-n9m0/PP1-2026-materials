# Practice · scanf

## (mc) L1 · What scanf does
What does `scanf` do?
- It prints a value on the screen.
* It waits for you to type something and stores it in a variable.
- It makes a new variable.
- It compiles the program.
> `scanf` reads from the keyboard. The program stops and waits until you type and press Enter, then puts what you typed into the variable.

## (mc) L1 · The & sign
In `scanf("%d", &age);`, why is there an `&` before `age`?
- It is a typo.
- It means "and".
* It tells `scanf` where the variable `age` is, so it can put the value in it.
- It makes `age` a `double`.
> `scanf` has to put a value into the box, so it needs to know where the box is. `&age` means "the place where age is". Without `&` the program compiles but runs wrong.

## (mc) L1 · Reading a double
Which hole reads a `double` with `scanf`?
- `%f`
- `%d`
* `%lf`
- `%.2f`
> For `scanf`, a `double` needs `%lf` (with the letter L). `%f` and `%.2f` are for `printf`. Yes, this is annoying. It is just how C is.

## (mc) L2 · What is stored
The program runs this:

```
int age;
double height;
scanf("%d", &age);
scanf("%lf", &height);
```

You type `19`, press Enter, type `1.82`, press Enter. What is stored?
* `age` holds 19 and `height` holds 1.82.
- `age` holds 1.82 and `height` holds 19.
- Both hold 19.
- Nothing, because there are two `scanf` lines.
> The first `scanf` takes the first number you typed and puts it in `age`. The second takes the next number and puts it in `height`.

## (mc) L2 · The missing &
What happens when you compile and run this?

```
int n;
scanf("%d", n);
printf("%d\n", n);
```
- It works normally.
- The compiler refuses to make a program.
* It compiles, and with `-Wall` there is a warning; when it runs it crashes or prints a nonsense number.
- It prints `n`.
> Without `&`, `scanf` does not know where `n` is. The compiler still makes a program, but only warns you if you used `-Wall`. Running it gives a crash or garbage.

## (mc) L2 · Why no newline in the question
Why is there no `\n` in `printf("Enter age: ");` before a `scanf`?
- Because `\n` is not allowed before `scanf`.
* So the cursor stays on the same line and you type right after the colon.
- Because `scanf` adds the `\n`.
- It is a mistake; `\n` is required.
> Without `\n` the cursor waits on the same line, which looks like a proper question. With `\n` you would type on the next line. Both work; this one looks better.

## (fib) L3 · Read a whole number
Complete the line that reads a whole number into the `int` variable `age`: scanf("%d", [&age]);
> `&age`. The `&` gives `scanf` the place where `age` is.

## (fib) L3 · Read a decimal number
Complete the line that reads a number with a decimal point into the `double` variable `price`: scanf("[%lf]", &price);
> `%lf`. For `scanf`, a `double` always needs `%lf`.

## (fib) L3 · Read two numbers
Complete the line that reads two whole numbers into `a` and `b`: scanf("%d %d", [&a, &b|&a,&b]);
> `&a, &b`. Two holes, two variables, each with its own `&`.
