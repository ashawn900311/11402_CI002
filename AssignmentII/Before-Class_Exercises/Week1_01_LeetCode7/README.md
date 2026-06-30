# LeetCode 7 - Reverse Integer

## 1. Problem Information

- **Platform:** LeetCode
- **Problem ID:** 7
- **Problem Title:** Reverse Integer
- **Problem Link:** https://leetcode.com/problems/reverse-integer/
- **Source Code (Fail):** No original before-class code was submitted
- **Source Code (Correct/Accepted):** [src/LeetCode7.cpp](./src/LeetCode7.cpp)

## 2. Problem Statement in My Own Words

The problem gives a signed integer. I need to reverse its digits.

If the reversed integer is outside the 32-bit signed integer range, I should return `0`.

## 3. Thinking Logic and Solution Strategy

No original before-class code was submitted for this problem. This version was completed later for the archive.

I repeatedly take the last digit using `% 10` and add it to the reversed result. I use `long long` while building the result so I can detect overflow safely.

## 4. Pseudocode

```text
result = 0

While x is not 0:
    digit = x % 10
    result = result * 10 + digit
    x = x / 10

    If result is outside int range:
        Return 0

Return result
```

## 5. Fail Code vs Correct Code

### Fail Code

No original before-class code was submitted for this problem.

**Why it failed:**

- I did not submit this before-class exercise during the original assignment time.

### Correct Code

See [src/LeetCode7.cpp](./src/LeetCode7.cpp).

**Why it works:**

- It reverses digits using `% 10` and `/ 10`.
- It handles negative numbers naturally.
- It checks 32-bit overflow.

## 6. Difference and Reflection

I learned how to reverse an integer mathematically without converting it to a string. I also learned that overflow checking is important in integer problems.
