# UVa 10170 - The Hotel with Infinite Rooms

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10170
- **Problem Title:** The Hotel with Infinite Rooms
- **Problem Link:** https://onlinejudge.org/external/101/10170.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa10170.cpp](./src/UVa10170.cpp)

## 2. Problem Statement in My Own Words

The problem gives two numbers `s` and `d`. Starting from group size `s`, groups arrive with sizes increasing by 1 each day.

I need to find the group size on the day when the total number of people reaches or exceeds `d`.

## 3. Thinking Logic and Solution Strategy

This submitted version was correct.

I keep adding the current group size to a running total. After each addition, I check whether the total has reached `d`. If not, I increase the group size and continue.

## 4. Pseudocode

```text
While input s and d exists:
    total = 0

    While total < d:
        total = total + s

        If total >= d:
            Stop loop

        s = s + 1

    Print s
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version was correct.

### Correct Code

See [src/UVa10170.cpp](./src/UVa10170.cpp).

**Why it works:**

- It accumulates group sizes correctly.
- It increases the group size after each day.
- It stops when the accumulated people reach or exceed `d`.
- It uses `long long` for large values.

## 6. Difference and Reflection

I learned that some math problems can be solved by direct simulation if the limits are acceptable. The important point is to stop exactly when the accumulated total reaches the target.
