# UVa 10783 - Odd Sum

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10783
- **Problem Title:** Odd Sum
- **Problem Link:** https://onlinejudge.org/external/107/10783.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa10783.cpp](./src/UVa10783.cpp)

## 2. Problem Statement in My Own Words

The problem gives several test cases. Each test case gives two integers `a` and `b`.

For each test case, I need to calculate the sum of all odd numbers between `a` and `b`, including both endpoints if they are odd.

## 3. Thinking Logic and Solution Strategy

This submitted version was correct.

First, I check whether `a` is even. If it is even, I increase it by 1 so that it becomes the first odd number in the range.

Then I keep adding odd numbers by increasing `a` by 2 each time until it is greater than `b`.

## 4. Pseudocode

```text
Read test case count
caseNumber = 1

For each test case:
    Read a and b
    sum = 0

    If a is even:
        a = a + 1

    While a <= b:
        sum = sum + a
        a = a + 2

    Print "Case caseNumber: sum"
    caseNumber++
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version was correct.

### Correct Code

See [src/UVa10783.cpp](./src/UVa10783.cpp).

**Why it works:**

- It starts from the first odd number in the range.
- It adds only odd numbers.
- It handles multiple test cases.
- It prints the required `Case x:` format.

## 6. Difference and Reflection

I learned that adjusting the starting point can simplify a loop. After making sure the first number is odd, I only need to increase by 2 each time.
