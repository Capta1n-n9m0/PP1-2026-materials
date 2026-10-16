# Practice · Strings

## (mc) L1 · The end mark
Which character marks the end of every string in C?
- `'0'`
* `'\0'`
- `'\n'`
- `' '`
> Every string ends with `'\0'`, the null character, whose code is 0. `'0'` is the digit zero (code 48), and `'\n'` is the Enter key. Class 11, slides 34 and 35.

## (mc) L1 · Read one word
`char name[20];` has been made. Which line reads one word from the keyboard into `name`?
- `scanf("%s", &name);`
- `scanf("%c", name);`
* `scanf("%s", name);`
- `scanf("%d", &name);`
> `%s` reads a word, and the name of an array needs **no** `&`: it already says where the array is. With `&name` gcc gives a warning. `%c` reads only one character. Class 11, slides 46, 47 and 50.

## (mc) L1 · A whole line
You want to read a whole line, spaces included, into `char line[50];`. Which line does it?
- `scanf("%s", line);`
- `scanf("%s %s", line);`
- `printf("%s", line);`
* `fgets(line, 50, stdin);`
> `fgets` reads the whole line, spaces too, and keeps the Enter key as `'\n'`. `scanf` with `%s` stops at the first space. Class 11, slides 51 to 53.

## (mc) L2 · Change one box
```
char w[] = "pen";
w[1] = 'i';
printf("%s\n", w);
```

What does it print?
* `pin`
- `ien`
- `pi`
- It does not compile.
> A string is an array, so you can change one box. Box 1 is the second letter, `e`, and it becomes `i`: `pin`. Box 0 would be the first letter. Class 11, slide 43.

## (mc) L2 · Count one letter
```
char u[] = "level";
int cnt = 0;

for (int i = 0; u[i] != '\0'; i++) {
    if (u[i] == 'e') {
        cnt++;
    }
}
printf("%d\n", cnt);
```

What does it print?
- `1`
* `2`
- `5`
- `3`
> The loop looks at every character until `'\0'`: l, e, v, e, l. Two of them are `'e'`, so `cnt` is 2. If you said 5, you counted every letter. Class 11, slides 55 and 68 to 69.

## (mc) L2 · Capitals in place
```
char t[] = "Hi 5!";

for (int i = 0; t[i] != '\0'; i++) {
    t[i] = toupper(t[i]);
}
printf("%s\n", t);
```

What does it print?
- `Hi 5!`
- `HI`
* `HI 5!`
- `HI5`
> `toupper` makes every small letter a capital and leaves everything else alone: the space, the digit and the `!` stay. So it prints `HI 5!`. Class 11, slides 64 and 65.

## (fib) L3 · Boxes for ADA
gcc stores the string `"ADA"` in an array of `char`. How many boxes does that array need? Type a number.

[4]

> Three letters and the end mark `'\0'`: 4 boxes. A string of n characters needs n + 1 boxes. Class 11, slides 37 to 39.

## (fib) L3 · The length of a b
The function `length` from class 11 counts the characters before the `'\0'`. What is `length("a b")`? Type a number.

[3]

> `"a b"` holds `a`, a space and `b`, then `'\0'`. The space is a character too, so the length is 3. Class 11, slides 56 to 58.

## (fib) L3 · Read a line
Write the line that reads a whole line from the keyboard into the array `line`, which has 50 boxes. Type it exactly, with one space after each comma and a `;` at the end.

[fgets(line, 50, stdin);]

> `fgets(where, how many boxes, stdin)`: the array, its size, and `stdin`, the keyboard. It reads at most 49 characters and keeps the `'\n'`. Class 11, slides 51 and 52.
