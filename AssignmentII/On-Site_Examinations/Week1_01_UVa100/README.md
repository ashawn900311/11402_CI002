# UVa 100 - The 3n + 1 Problem

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 100
- **Problem Title:** The 3n + 1 Problem
- **Problem Link:** https://onlinejudge.org/external/1/100.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa100.cpp](./src/UVa100.cpp)

## 2. Problem Statement in My Own Words

The problem gives two integers `i` and `j`. For every number between them, I need to calculate its cycle length using the 3n + 1 rule.

Then I need to output the original two numbers and the maximum cycle length in that range.

## 3. Thinking Logic and Solution Strategy

No original code was submitted for this problem. This version was completed later for the archive.

For each number in the range, I simulate the 3n + 1 process until the number becomes `1`. I count the cycle length and keep the maximum value.

Because the input order may be reversed, I use `min` and `max` for calculation but still print the original input order.

## 4. Pseudocode

```text
While input i and j exists:
    start = min(i, j)
    end = max(i, j)
    maxCycle = 0

    For each number from start to end:
        Calculate cycle length
        Update maxCycle

    Print original i, original j, maxCycle
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the original assignment time.

### Correct Code

See [src/UVa100.cpp](./src/UVa100.cpp).

**Why it works:**

- It checks every number in the range.
- It handles reversed input order.
- It preserves the original output order.
- It uses `long long` during calculation.

## 6. Difference and Reflection

I learned that online judge problems require careful attention to both input order and output order. Even if I calculate from the smaller number to the larger number, I still need to print the original values.
