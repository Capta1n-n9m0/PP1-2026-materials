# Practice · Program shape

## (mc) L1 · The first line
What does the line `#include <stdio.h>` do?
- It starts the program.
* It gives the program `printf` and `scanf`.
- It prints "stdio" on the screen.
- It ends the program.
> `stdio.h` is the standard input and output tools. Without this line the compiler does not know what `printf` is. The program starts at `main`, not at this line.

## (mc) L1 · Where the program starts
When you run a C program, where does the computer start?
- At the first line of the file.
- At the first `printf`.
* At `int main(void)`.
- At `return 0;`.
> Every C program has exactly one `main`, and that is where running starts. The `#include` line above it is read by the compiler, not run.

## (mc) L1 · What ends an instruction
What goes at the end of every instruction in C, such as `printf("Hi");`?
- A full stop `.`
- A comma `,`
* A semicolon `;`
- A colon `:`
> A semicolon tells C where one instruction ends and the next begins. Forget it and the compiler stops with `expected ';'`.

## (mc) L2 · Find the missing piece
Here is a program:

```
#include <stdio.h>
int main(void) {
    printf("Hello\n")
    return 0;
}
```

What is wrong?
* The semicolon after `printf("Hello\n")` is missing.
- `main` should be `Main`.
- `return 0;` should come first.
- The `#include` line needs a semicolon.
> The `printf` line has no semicolon. `#include` lines and `int main(void)` never take one; instructions inside `main` always do.

## (mc) L2 · What the newline does
What does this print?

```
printf("A");
printf("B\n");
printf("C\n");
```
- `A`, `B` and `C` on three lines.
- `ABC` on one line.
* `AB` on one line, then `C` on the next.
- `A B C` with spaces.
> `printf("A")` has no `\n`, so `B` continues on the same line: `AB`. Then `\n` moves to a new line, and `C` is printed there.

## (mc) L2 · Braces
Which statement about `{` and `}` is wrong?
- Everything between them belongs to `main`.
- They always come in pairs.
* They need a semicolon after them.
- If you open one, you must close it.
> Braces never take a semicolon. The other three statements are true.

## (fib) L3 · The include line
Write the first line of every program this week, the one that gives you `printf`: [#include <stdio.h>|#include<stdio.h>]
> `#include <stdio.h>`. Hash, include, and the name in angle brackets.

## (fib) L3 · The main line
Complete the line where the program starts: [int main(void)|int main (void)] {
> `int main(void) {`. Copy it exactly for now. `int` and `void` are explained in week 4.

## (fib) L3 · The last line
Complete the last instruction inside `main`, which says "finished, all fine": [return 0];
> `return 0;`. Zero means success here.
