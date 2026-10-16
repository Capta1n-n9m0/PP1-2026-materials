# Practice · Characters

## (mc) L1 · Single quotes
Which line stores the letter A in the `char` variable `c`?
* `char c = 'A';`
- `char c = "A";`
- `char c = A;`
- `char c = 'A`;
> One character goes in **single** quotes. `"A"` in double quotes is a string, and gcc refuses it. Without quotes, `A` would be the name of a variable. Class 11, slides 8 and 22 to 24.

## (mc) L1 · The code of a character
`char c = 'A';` Which line prints the **code** of `c`, the number 65?
- `printf("%c\n", c);`
* `printf("%d\n", c);`
- `printf("%s\n", c);`
- `printf("65\n", c);`
> A `char` is stored as a number. `%d` shows that number, 65. `%c` shows the character `A`. `%s` is for strings, not for one `char`. Class 11, slides 10 and 11.

## (mc) L1 · The library for toupper
Which line must be at the top of the program to use `toupper`, `isdigit` and `isalpha`?
- `#include <stdio.h>`
- `#include <math.h>`
- `#include <string.h>`
* `#include <ctype.h>`
> The character functions live in `ctype.h`: `isdigit`, `isalpha`, `isupper`, `islower`, `toupper`, `tolower`. `string.h` is for whole strings and comes in class 12. Class 11, slides 27 and 28.

## (mc) L2 · Two letters on
```
printf("%c\n", 'a' + 2);
```

What does it print?
- `a2`
- `99`
* `c`
- `b`
> `'a'` is 97 and `'a' + 2` is 99. With `%c`, 99 is shown as the character `c`: two letters after `a`. With `%d` it would print `99`. Class 11, slides 15 and 16.

## (mc) L2 · The place of a letter
```
printf("%d\n", 'd' - 'a');
```

What does it print?
* `3`
- `4`
- `100`
- `d`
> The letters have codes in order, so `'d' - 'a'` is the place of `d` counting from 0: a is 0, b is 1, c is 2, d is 3. Add 1 if you want to count from 1. Class 11, slide 17.

## (mc) L2 · toupper and tolower
```
printf("%c%c\n", toupper('b'), tolower('E'));
```

What does it print?
- `bE`
- `BE`
- `be`
* `Be`
> `toupper('b')` gives `'B'` and `tolower('E')` gives `'e'`. The two `%c` are next to each other, so it prints `Be`. Class 11, slides 27 to 29.

## (fib) L3 · The value of a digit
The `char` variable `c` holds a digit character, for example `'7'`. Write the expression that gives the **value** of the digit, the number 7. Type it with one space on each side of the minus sign.

[c - '0'|c-'0']

> `'7'` has the code 55 and `'0'` has the code 48. `c - '0'` is 55 - 48 = 7. It works for every digit because the digits have codes in order. Class 11, slides 19 to 21.

## (fib) L3 · Make it a capital
Write the call that gives the character in `c` as a capital letter. Use the function from `ctype.h`, with no spaces.

[toupper(c)]

> `toupper(c)` gives the capital of a small letter, and gives back any other character unchanged. Class 11, slides 27 to 29.

## (fib) L3 · The code of B
The code of `'A'` is 65. Type the code of `'B'`, as a number.

[66]

> The capitals have codes in order: `'A'` is 65, so `'B'` is 66 and `'Z'` is 90. Class 11, slides 11 and 12.
