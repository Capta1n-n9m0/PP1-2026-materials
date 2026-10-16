# Practice · String functions

## (mc) L1 · The header for string functions
Which line must be at the top of a program that uses `strlen`, `strcpy`, `strcat` and `strcmp`?
- `#include <stdlib.h>`
* `#include <string.h>`
- `#include <strings>`
- `#include <stdio.h>` is enough
> The four string functions live in `<string.h>`. `atoi` is the one that lives in `<stdlib.h>`. Class 12, slide 8.

## (mc) L1 · What strlen counts
`char city[20] = "Ganja";` What is `strlen(city)`?
- `20`
- `6`
* `5`
- `19`
> `strlen` counts the characters before `'\0'`: G, a, n, j, a. The end mark is not counted, and neither are the empty boxes. `sizeof(city)` would be 20. Class 12, slides 9 and 10.

## (mc) L1 · The order in strcpy
Which call copies the word `hello` into the array `w`?
* `strcpy(w, "hello");`
- `strcpy("hello", w);`
- `w = strcpy("hello");`
- `strcpy(w) = "hello";`
> `strcpy(to, from)`: the array that receives comes first, like the left side of `to = from`. Class 12, slide 14.

## (mc) L2 · strcat, twice
```
char s[20] = "ab";
strcat(s, "cd");
strcat(s, "e");
printf("%s %d\n", s, (int) strlen(s));
```

What does it print?
- `ab 2`
- `cde 3`
- `abcd 4`
* `abcde 5`
> Each `strcat` adds to the end: `"ab"`, then `"abcd"`, then `"abcde"`. It writes over the old `'\0'` and puts a new one after the last letter. `s` has 20 boxes, so there is room. Class 12, slides 16 and 17.

## (mc) L2 · Comparing two arrays with ==
```
char a[10] = "Ali";
char b[10] = "Ali";
printf("%d %d\n", a == b, strcmp(a, b));
```

What does it print?
- `1 0`
* `0 0`
- `1 1`
- `0 1`
> `a == b` asks whether `a` and `b` are the same array. They are two different arrays, so it is false, 0, even though the letters are the same. gcc even warns: `comparison between two arrays`. `strcmp` compares the letters: equal, so 0. Class 12, slides 26 and 28.

## (mc) L2 · cat and car
What is the sign of `strcmp("cat", "car")`?
- negative, because `"cat"` comes first
- zero, because the first two letters are equal
* positive, because `t` comes after `r`
- it cannot be known
> `strcmp` compares letter by letter. `c` and `c` are equal, `a` and `a` are equal, then `t` against `r`: `t` comes later, so `"cat"` comes later and the result is positive. On the course's gcc it prints 1. Class 12, slides 27 and 28.

## (fib) L3 · The password test
Complete the condition so that `Welcome` is printed only when `word` is `ada2026`. Type only the number that goes after `==`.

```
if (strcmp(word, "ada2026") == [0]) {
    printf("Welcome\n");
}
```

> `strcmp` gives 0 when the two strings are equal. A negative or positive number means they are different. Class 12, slides 28 and 29.

## (fib) L3 · Copy, then join
`email` is an array of 40 `char`. Complete the line so that `email` holds `aysel@ada.edu.az`. Type the name of the function only.

```
strcpy(email, "aysel");
[strcat](email, "@ada.edu.az");
```

> `strcpy` puts the name into the array, then `strcat` adds the rest to the end. `email` has 40 boxes: 16 characters plus `'\0'` fit easily. Class 12, slides 16 and 53.

## (fib) L3 · How many boxes
`"Hi there!"` has 9 characters. What is the smallest number of boxes an array needs to hold it as a string? Type only the number.

Boxes: [10]

> A string needs one more box than its characters, for the end mark `'\0'`. 9 + 1 = 10. An array of 6 is too small: `strcat` writes past its end and gcc warns `writing 8 bytes into a region of size 6`. Class 12, slides 18 to 21.
