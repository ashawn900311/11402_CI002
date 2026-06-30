# LeetCode 8 - String to Integer (atoi)

## 1. Problem Information

- **Platform:** LeetCode
- **Problem ID:** 8
- **Problem Title:** String to Integer (atoi)
- **Problem Link:** https://leetcode.com/problems/string-to-integer-atoi/
- **Source Code (Fail):** No original after-class code was submitted
- **Source Code (Correct/Accepted):** [src/LeetCode8.cpp](./src/LeetCode8.cpp)

## 2. Problem Statement in My Own Words

The problem asks me to convert a string into a 32-bit signed integer.

I need to ignore leading spaces, handle an optional `+` or `-` sign, read digits, stop at the first non-digit character, and clamp the result if it overflows.

## 3. Thinking Logic and Solution Strategy

No original after-class code was submitted for this problem. This version was completed later for the archive.

I process the string in order: skip spaces, check the sign, read digits, and check overflow while building the number.

## 4. Pseudocode

```text
Skip leading spaces
Read optional sign

result = 0

While current character is a digit:
    result = result * 10 + digit

    If result overflows:
        Return INT_MAX or INT_MIN

Return result with sign
```

## 5. Fail Code vs Correct Code

### Fail Code

No original after-class code was submitted for this problem.

**Why it failed:**

- I did not submit this after-class practice during the original assignment time.

### Correct Code

See [src/LeetCode8.cpp](./src/LeetCode8.cpp).

**Why it works:**

- It handles leading spaces.
- It handles positive and negative signs.
- It stops at the first non-digit character.
- It clamps overflow to the 32-bit signed integer range.

## 6. Difference and Reflection

I learned that string parsing problems need careful step-by-step handling. The order of checking spaces, signs, digits, and overflow is important.
