# Practice · Number-string conversions

## (mc) L1 · Text or number
Which statement about `"2026"` and `2026` is right?
- They are the same thing written two ways.
* `"2026"` is four characters and a `'\0'`; `2026` is one `int`.
- `"2026" + 1` is 2027.
- `2026` is stored as four characters.
> Text in quotes is a string: the characters `'2'`, `'0'`, `'2'`, `'6'` and the end mark. You cannot add to it. `2026` without quotes is one whole number you can add to and compare. Class 12, slide 38.

## (mc) L1 · Where atoi lives
Which header do you include to use `atoi`?
- `<string.h>`
- `<stdio.h>`
* `<stdlib.h>`
- `<atoi.h>`
> `atoi` comes from `<stdlib.h>`, not from `<string.h>`. Class 12, slides 43 and 48.

## (mc) L1 · The last digit
`n` is 472. Which expression gives its last digit, 2?
- `n / 10`
* `n % 10`
- `n - 10`
- `n * 10`
> `%` gives the remainder: 472 divided by 10 is 47, remainder 2. `n / 10` drops the last digit and gives 47. Class 12, slides 44 and 45.

## (mc) L2 · atoi on four strings
```
printf("%d %d %d %d\n", atoi("3.99"), atoi("  42"), atoi("x7"), atoi("007"));
```

What does it print?
* `3 42 0 7`
- `4 42 7 7`
- `3 0 0 007`
- `3.99 42 0 7`
> `atoi` reads the digits at the start and stops at the first character that is not a digit: the point in `"3.99"` stops it at 3. Spaces before the number are skipped. `"x7"` has no number at the start, so 0. `"007"` is the number 7, and `%d` prints it as `7`. Class 12, slide 43.

## (mc) L2 · Backwards digits
```
int m = 9050;
char r[12];
int len = 0;
while (m > 0) {
    r[len] = '0' + m % 10;
    len++;
    m = m / 10;
}
r[len] = '\0';
printf("%s\n", r);
```

What does it print?
- `9050`
- `5090`
* `0509`
- `509`
> The last digit comes out first: 0, then 5, then 0, then 9. So the string is `"0509"`, backwards. To get `"9050"` you reverse it, as in file 16. Class 12, slides 44 to 46.

## (mc) L2 · sprintf with two numbers
```
char u[20];
sprintf(u, "%d%d", 12, 34);
printf("%s %d\n", u, (int) strlen(u));
```

What does it print?
- `46 2`
- `12 34 5`
* `1234 4`
- `1234 5`
> `sprintf` writes into `u` exactly what `printf` would print on the screen: `12` then `34`, with nothing between them. That is 4 characters; `strlen` does not count the `'\0'`. Class 12, slide 47.

## (fib) L3 · One more digit
Complete the line that adds the next digit to `n`. `digit` is already a number from 0 to 9. Type only the number that `n` is multiplied by.

```
n = n * [10] + digit;
```

> Multiplying by 10 moves what you have one place to the left, and then the new digit goes into the ones place: 2, 20, 202, 2026. Class 12, slides 39 to 41.

## (fib) L3 · The character to the number
`c` holds a digit character such as `'7'`. Complete the expression so that it gives the number 7. Type only the character in single quotes.

```
int digit = c - ['0'];
```

> The digit characters `'0'` to `'9'` sit next to each other in the ASCII table, so `'7' - '0'` is 7. You met this on Tuesday, class 11, slides 19 to 21. Class 12, slides 39 and 40.

## (fib) L3 · An int into a string
`s` is an array of 20 `char`. Complete the call so that `s` holds the text `"472"`. Type only the function name.

```
[sprintf](s, "%d", 472);
```

> `sprintf` works like `printf`, but writes into the array given first instead of the screen. `snprintf(s, sizeof(s), "%d", 472)` does the same and never writes past the end. Class 12, slide 47.
