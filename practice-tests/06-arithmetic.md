# Practice · Arithmetic

## (mc) L1 · The multiply sign
Which symbol multiplies in C?
- `x`
- `×`
* `*`
- `^`
> C uses the star `*` for multiplication. `x` would be a variable name, and `^` is not "to the power of" in C.

## (mc) L1 · The remainder sign
Which symbol gives the remainder after division?
- `/`
- `\`
- `rem`
* `%`
> `%` is called modulo. `7 % 3` is 1, because 3 goes into 7 twice and 1 is left over.

## (mc) L1 · Whole number division
What is `7 / 2` in C, when both numbers are `int`?
- `3.5`
* `3`
- `4`
- `1`
> Dividing an `int` by an `int` gives an `int`. The .5 is thrown away, not rounded. So 3.

## (mc) L2 · Predict the four lines
With `int a = 7;` and `int b = 3;`, what do these four lines print, in order?

```
printf("%d\n", a + b);
printf("%d\n", a / b);
printf("%d\n", a % b);
printf("%d\n", 2 + 3 * 4);
```
- 10, 2.33, 1, 20
- 10, 2, 3, 14
* 10, 2, 1, 14
- 10, 3, 1, 20
> 7 + 3 = 10. 7 / 3 = 2 (the decimal part is thrown away). 7 % 3 = 1 (the remainder). 2 + 3 × 4 = 14, because multiplication comes first.

## (mc) L2 · Getting the decimals
Which expression gives `3.5`?
- `7 / 2`
* `7.0 / 2`
- `7 % 2`
- `(int) 7 / 2`
> If at least one side is a `double`, C keeps the decimals. `7.0 / 2` is 3.5. `7 / 2` is 3.

## (mc) L2 · Brackets
What is `(2 + 3) * 4`?
- `14`
- `24`
* `20`
- `11`
> Brackets first: 2 + 3 = 5. Then 5 × 4 = 20. Without brackets, `2 + 3 * 4` is 14.

## (fib) L3 · Remainder
What number does `printf("%d\n", 10 % 3);` print? [1]
> 3 goes into 10 three times (9), and 1 is left over.

## (fib) L3 · Integer division
What number does `printf("%d\n", 9 / 2);` print? [4]
> 9 / 2 is 4.5, and the .5 is thrown away. So 4.

## (fib) L3 · Is it even
Complete the expression that is 0 when `n` is even and 1 when `n` is odd: n [% 2|%2]
> `n % 2`. The remainder after dividing by 2 is 0 for even numbers and 1 for odd numbers.
