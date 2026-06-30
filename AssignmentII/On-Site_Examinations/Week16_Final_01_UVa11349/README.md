# UVa 11349 - Symmetric Matrix

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11349
- **Problem Title:** Symmetric Matrix
- **Problem Link:** https://onlinejudge.org/external/113/11349.pdf
- **Source Code (Fail):** No original final exam code was submitted
- **Source Code (Correct/Accepted):** [src/UVa11349.cpp](./src/UVa11349.cpp)

## 2. Problem Statement in My Own Words

The problem gives several square matrices. I need to determine whether each matrix is symmetric with respect to its center.

A matrix is symmetric if every value matches the corresponding value from the opposite end. Also, every value must be non-negative.

## 3. Thinking Logic and Solution Strategy

No original final exam code was submitted for this problem. This version was completed later for the archive.

I store all `n * n` values in a one-dimensional vector. Then I compare the first value with the last value, the second value with the second last value, and so on.

If any value is negative or any pair does not match, the matrix is non-symmetric.

## 4. Pseudocode

```text
Read test case count

For each test case:
    Read N = n
    Read n * n values

    symmetric = true

    For each index i:
        If value[i] is negative:
            symmetric = false
        If value[i] != value[last - i]:
            symmetric = false

    Print result
```

## 5. Fail Code vs Correct Code

### Fail Code

No original final exam code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the final exam.

### Correct Code

See [src/UVa11349.cpp](./src/UVa11349.cpp).

**Why it works:**

- It reads the special input format `N = n`.
- It checks all values.
- It rejects negative values.
- It compares each value with its opposite position.
- It prints the required `Test #x:` format.

## 6. Difference and Reflection

I learned that a matrix symmetry problem can sometimes be simplified into a one-dimensional array comparison. Checking from both ends makes the logic easier.
