# Practice · Search and min-max

## (mc) L1 · What -1 means
`find(a, n, target)` returns the index of `target` in the array. Sometimes it returns `-1`. What does `-1` mean?
- The target is the last element.
- The target is at index -1.
* The target is not in the array.
- The array is empty.
> Indexes start at 0, so -1 is never a real index. That makes it a safe signal for "not found". Class 10, slides 18 and 24.

## (mc) L1 · The start of the best so far
You want the largest element of `a`. What should `max` start as?
- `0`
- `100`
* `a[0]`
- `-1`
> Start the best so far at a real value from the array. 0 fails when all the values are negative, and 100 fails when they are all above 100. Class 10, slides 32 and 38.

## (mc) L1 · Sending an array
Which is the right first line for a function that gets an array of `int` and its size?
* `int sum_array(int a[], int n)`
- `int sum_array(int a)`
- `int sum_array(int a[n])`
- `int sum_array(a[], n)`
> The array parameter is written with empty brackets, `int a[]`, and the size comes as a second parameter, `int n`, because an array does not know its own length. Class 10, slides 7 to 9.

## (mc) L2 · Predict a search
```
int find(int a[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            return i;
        }
    }
    return -1;
}
```

The array is `{5, 10, 15}`. What does `find(a, 3, 15)` return?
- `15`
* `2`
- `3`
- `-1`
> 15 is at index 2: `a[0]` is 5, `a[1]` is 10, `a[2]` is 15. `find` returns the index, not the value. Class 10, slide 24.

## (mc) L2 · Predict a count
```
int count(int a[], int n, int value) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == value) {
            c++;
        }
    }
    return c;
}
```

The array is `{0, 1, 0}`. What does `count(a, 3, 0)` return?
- `0`
- `1`
* `2`
- `3`
> 0 appears at index 0 and at index 2: twice. Count the elements equal to `value`, not the value itself. Class 10, slides 28 and 29.

## (mc) L2 · Smallest, with one wrong sign
```
int a[4] = {10, 30, 20, 40};
int best = a[0];
for (int i = 1; i < 4; i++) {
    if (a[i] < best) {
        best = a[i];
    }
}
printf("%d\n", best);
```

What does it print?
* `10`
- `40`
- `20`
- `30`
> With `<`, the loop keeps the **smallest** so far. It starts at 10, and 30, 20 and 40 are all bigger, so it prints 10. To find the largest, the sign is `>`. Class 10, slide 39.

## (fib) L3 · Not found
A search function returns the index of the target when it finds it. Which number does it return, after the loop, when the target is not in the array? Type only the number.

The answer: [-1]

> No element has the index -1: indexes start at 0. So -1 cannot be mistaken for a real position, and it means "not found". It is returned only after the loop has looked at every element. Class 10, slides 21 to 24.

## (fib) L3 · The call
`print_array` prints an array. Its parameters are the array and its size. Write the call that prints the array `marks`, which has 5 elements. Type it exactly, with one space after the comma and a semicolon at the end.

[print_array(marks, 5);]

> The call names the array with no brackets, then its size, because the array does not know its own length. A semicolon ends the line. Class 10, slides 7 to 9.

## (fib) L3 · Starting from 0
`max` starts at `0`, and a loop keeps the largest value it sees. The values are -6, -2 and -9. What number does the program print? Type only the number.

It prints: [0]

> All three values are below 0, so none of them is bigger than `max`, and `max` never changes. The program prints 0, a number that is not in the array. Start `max` at the first element instead. Class 10, slides 36 to 38.
