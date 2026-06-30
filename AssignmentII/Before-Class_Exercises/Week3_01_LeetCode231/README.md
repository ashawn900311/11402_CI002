# LeetCode 231 - Power of Two

## 1. Problem Information

- **Platform:** LeetCode
- **Problem ID:** 231
- **Problem Title:** Power of Two
- **Problem Link:** https://leetcode.com/problems/power-of-two/
- **Source Code (Fail):** No original before-class code was submitted
- **Source Code (Correct/Accepted):** [src/LeetCode231.cpp](./src/LeetCode231.cpp)

## 2. Problem Statement in My Own Words

The problem gives an integer `n`. I need to determine whether `n` is a power of two.

A power of two has exactly one `1` bit in its binary representation.

## 3. Thinking Logic and Solution Strategy

No original before-class code was submitted for this problem. This version was completed later for the archive.

If `n` is positive and `n & (n - 1)` equals `0`, then `n` has only one `1` bit, so it is a power of two.

## 4. Pseudocode

```text
If n <= 0:
    Return false

If n & (n - 1) equals 0:
    Return true
Else:
    Return false
```

## 5. Fail Code vs Correct Code

### Fail Code

No original before-class code was submitted for this problem.

**Why it failed:**

- I did not submit this before-class exercise during the original assignment time.

### Correct Code

See [src/LeetCode231.cpp](./src/LeetCode231.cpp).

**Why it works:**

- It rejects non-positive numbers.
- It uses bit operation to check whether there is only one `1` bit.
- It works in constant time.

## 6. Difference and Reflection

I learned that bit operations can make some number problems very short. The expression `n & (n - 1)` is useful for checking powers of two.
