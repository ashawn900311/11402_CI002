# UVa 11461 - Square Numbers

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11461
- **Problem Title:** Square Numbers
- **Problem Link:** https://onlinejudge.org/external/114/11461.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa11461.cpp](./src/UVa11461.cpp)

## 2. Problem Statement in My Own Words

The problem gives two integers `a` and `b`. I need to count how many perfect square numbers are between `a` and `b`, including both endpoints.

The input ends when both numbers are `0`.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

This problem can be solved by checking every number in the range and determining whether it is a perfect square.

### Final Strategy

For each number `i` from `a` to `b`, I calculate `sqrt(i)`. If the integer square root multiplied by itself equals `i`, then `i` is a perfect square.

Then I count all such numbers and print the result.

## 4. Pseudocode

```text
START

While input a and b:
    If a == 0 and b == 0:
        Stop

    total = 0

    For i from a to b:
        sq = sqrt(i)
        If sq * sq == i:
            total++

    Print total

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This midterm submission was correct.

### Correct Code

See [src/UVa11461.cpp](./src/UVa11461.cpp).

**Why it works:**

- It checks every number from `a` to `b`.
- It uses `sqrt` to test whether a number is a perfect square.
- It counts all perfect squares in the range.
- It stops when the input is `0 0`.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | No failed version | Checks perfect squares in the range |
| Edge Cases | No failed version | Stops at `0 0` |
| Output Handling | No failed version | Prints one count per input case |
| Other | No failed version | Midterm submission was correct |

### Reflection

I learned how to use `sqrt` to check whether a number is a perfect square. This problem also reminded me to handle the ending input condition carefully.
