# Practice · switch

## (mc) L1 · When switch fits
Which job is `switch` made for?
- Checking whether a number is bigger than another.
* Comparing one variable against a few fixed values, like a menu with options A, B and C.
- Reading a character from the keyboard.
- Repeating a block of code.
> `switch` looks at one variable and jumps to the `case` that matches its value. It is neat for menus and fixed choices (slide 16). Ranges like `score >= 90` still need `if`.

## (mc) L1 · How a case is written
Which line is a correct `case` for the letter A?
- `case "A":`
- `case A:`
* `case 'A':`
- `case (A) {`
> A single character goes between single quotes, `'A'`, and the `case` line ends with a colon, not a brace. `"A"` is text, not a character, and the compiler stops with an error if you use it here.

## (mc) L1 · What break does
What does `break;` do inside a `switch`?
- It ends the whole program.
- It goes back to the top of the `switch`.
* It leaves the `switch`, so the next `case` does not run too.
- It prints an empty line.
> Without `break`, C keeps running into the next `case`. `break;` says "done, jump out of the switch". Put one at the end of every `case` unless you want the fall-through on purpose.

## (mc) L2 · No case matches
```
char option;
printf("A/B/C: ");
scanf(" %c", &option);
switch (option) {
    case 'A':
        printf("Add item\n");
        break;
    case 'B':
        printf("View cart\n");
        break;
    default:
        printf("Unknown option\n");
}
```

You type `D`. What is printed after `A/B/C: `?
- Nothing.
- `Add item`
* `Unknown option`
- The program crashes.
> No `case` says `'D'`, so the `default` branch runs. `default` is the "anything else" door. Without it, nothing would be printed for `D`.

## (mc) L2 · The missing break
```
switch (option) {
    case 'A':
        printf("Add item\n");
    case 'B':
        printf("View cart\n");
        break;
    default:
        printf("Unknown option\n");
}
```

You type `A`. What is printed?
- `Add item`
* `Add item` and `View cart`
- `Add item`, `View cart` and `Unknown option`
- `Unknown option`
> `case 'A'` has no `break`, so after `Add item` the program **falls through** into `case 'B'` and prints `View cart` too. The `break` there stops it before `default`. This is slide 17's "forgetting break" bug.

## (mc) L2 · The space before %c
Slide 16 reads the option with `scanf(" %c", &option);`. What is the space before `%c` for?
- It is a typo. It does nothing.
- It makes `scanf` wait one second.
* It skips the Enter key left over from the last thing you typed.
- It reads a space character into `option`.
> When you type a number and press Enter, the Enter is still waiting in the input. A plain `%c` would read that Enter as the character. The space tells `scanf` to skip any leftover spaces and Enters first. Without it you get a blank character and `Unknown option`.

## (fib) L3 · Type the break
Complete the line that stops case A from running into case B. Type it exactly, with the semicolon.

```
switch (option) {
    case 'A':
        printf("Add item\n");
        [break;]
    case 'B':
        printf("View cart\n");
        break;
}
```

> `break;` leaves the `switch`. Without it, typing `A` would print both `Add item` and `View cart`.

## (fib) L3 · Type the default line
Complete the line that catches every option not listed. Type it exactly, with the colon.

```
switch (option) {
    case 'A':
        printf("Add item\n");
        break;
    [default:]
        printf("Unknown option\n");
}
```

> `default:` is the "anything else" case. It has a colon like every case, and no quotes.

## (fib) L3 · Type the case for B
Complete the line for the letter B. Type it exactly: the word, a space, the letter in single quotes, and a colon.

```
switch (option) {
    case 'A':
        printf("Add item\n");
        break;
    [case 'B':]
        printf("View cart\n");
        break;
}
```

> `case 'B':` with single quotes, because `option` is a `char`, and a colon at the end.
