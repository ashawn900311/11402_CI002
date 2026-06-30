# UVa 900 - Brick Wall Patterns

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 900
- **Problem Title:** Brick Wall Patterns
- **Problem Link:** https://onlinejudge.org/external/9/900.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa900.cpp](./src/UVa900.cpp)

## 2. Problem Statement in My Own Words

The problem asks how many different ways there are to build a wall of length `n` using bricks.

The input ends when `n` is `0`.

## 3. Thinking Logic and Solution Strategy

This submitted version was correct.

The number of wall patterns follows the Fibonacci pattern. For a wall of length `n`, the last part can be built from a smaller wall of length `n - 1` or `n - 2`.

So the recurrence is:

```text
ways[n] = ways[n - 1] + ways[n - 2]
```

## 4. Pseudocode

```text
ways[1] = 1
ways[2] = 2

For i from 3 to 50:
    ways[i] = ways[i - 1] + ways[i - 2]

While input n is not 0:
    Print ways[n]
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version was correct.

### Correct Code

See [src/UVa900.cpp](./src/UVa900.cpp).

**Why it works:**

- It uses the Fibonacci recurrence.
- It precomputes answers up to the required range.
- It stops when input is `0`.
- It prints one answer per input.

## 6. Difference and Reflection

I learned that some dynamic programming problems are hidden Fibonacci problems. Once I found the recurrence, the implementation became simple.
