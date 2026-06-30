# LeetCode 9 - Palindrome Number

## 1. Problem Information

- **Platform:** LeetCode
- **Problem ID:** 9
- **Problem Title:** Palindrome Number
- **Problem Link:** https://leetcode.com/problems/palindrome-number/
- **Source Code (Fail):** No original after-class code was submitted
- **Source Code (Correct/Accepted):** [src/LeetCode9.cpp](./src/LeetCode9.cpp)

## 2. Problem Statement in My Own Words

The problem gives an integer `x`. I need to check whether it reads the same forward and backward.

Negative numbers are not palindromes because of the minus sign.

## 3. Thinking Logic and Solution Strategy

No original after-class code was submitted for this problem. This version was completed later for the archive.

I store the original number, reverse the digits using `% 10` and `/ 10`, and then compare the reversed number with the original number.

## 4. Pseudocode

```text
If x < 0:
    Return false

original = x
reversed = 0

While x > 0:
    reversed = reversed * 10 + x % 10
    x = x / 10

Return original == reversed
```

## 5. Fail Code vs Correct Code

### Fail Code

No original after-class code was submitted for this problem.

**Why it failed:**

- I did not submit this after-class practice during the original assignment time.

### Correct Code

See [src/LeetCode9.cpp](./src/LeetCode9.cpp).

**Why it works:**

- It handles negative numbers.
- It reverses the digits correctly.
- It compares the reversed value with the original value.

## 6. Difference and Reflection

I learned how to reverse an integer using arithmetic operations. This problem also reminded me to check special cases like negative numbers.
