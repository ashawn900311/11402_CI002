# UVa 11349 - Symmetric Matrix

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11349
- **Problem Title:** Symmetric Matrix
- **Problem Link:** https://onlinejudge.org/external/113/11349.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa11349.cpp](./src/UVa11349.cpp)

## 2. Problem Statement in My Own Words

The problem gives several square matrices. I need to determine whether each matrix is symmetric with respect to its center.

A matrix is symmetric if every value matches the corresponding value from the opposite end. Also, all values must be non-negative.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

I did not submit this problem during the original assignment time. When solving it later, I noticed that the matrix can be checked as a one-dimensional list.

### Final Strategy

I store all `n * n` numbers in a vector. Then I compare the first value with the last value, the second value with the second last value, and so on.

If any value is negative, or if any pair is not equal, the matrix is non-symmetric.

## 4. Pseudocode

```text
START

Read test case count

For each test case:
    Read N = n
    Read n * n values into a list

    symmetric = true

    For each index i:
        If value[i] is negative:
            symmetric = false
        If value[i] != value[last - i]:
            symmetric = false

    Print result

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not finish or submit this problem during the original assignment time.

### Correct Code

See [src/UVa11349.cpp](./src/UVa11349.cpp).

**Why it works:**

- It reads the special input format `N = n`.
- It stores all matrix values.
- It checks whether all values are non-negative.
- It compares each value with its opposite position.
- It prints the required `Test #x:` format.

## 6. Difference and Reflection

### Key Differences

| Item | Original Submission | Correct Code |
|---|---|---|
| Logic | Not submitted | Checks center symmetry |
| Edge Cases | Not submitted | Rejects negative values |
| Output Handling | Not submitted | Prints `Test #x:` format |
| Other | No original code | Completed later for the archive |

### Reflection

I learned that a two-dimensional matrix problem can sometimes be simplified into a one-dimensional vector. In this problem, checking from both ends of the list made the symmetry test easier to implement.
