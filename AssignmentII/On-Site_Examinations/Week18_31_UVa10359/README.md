# UVa 10359 - Tiling

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10359
- **Problem Title:** Tiling
- **Problem Link:** https://onlinejudge.org/external/103/10359.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa10359.cpp](./src/UVa10359.cpp)

## 2. Problem Statement in My Own Words

The problem asks how many ways there are to tile a `2 x n` board using small tiles. Because the answer can become very large, normal integer types are not enough for all inputs.

## 3. Thinking Logic and Solution Strategy

This submitted problem was correct. The recurrence is:

```text
dp[n] = dp[n - 1] + 2 * dp[n - 2]
```

Since `n` can be large and the answer may exceed `long long`, I store each answer as a string and implement string addition.

## 4. Pseudocode

```text
dp[0] = 1
dp[1] = 1

For i from 2 to 250:
    dp[i] = dp[i - 1] + 2 * dp[i - 2]

While input n exists:
    Print dp[n]
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version was correct.

### Correct Code

See [src/UVa10359.cpp](./src/UVa10359.cpp).

**Why it works:**

- It uses the correct dynamic programming recurrence.
- It handles very large answers using strings.
- It precomputes all answers up to 250.
- It prints the answer for every input.

## 6. Difference and Reflection

I learned that dynamic programming sometimes needs big number handling. Even when the recurrence is simple, the answer size can require storing numbers as strings.
