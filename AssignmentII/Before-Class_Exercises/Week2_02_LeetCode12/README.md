# LeetCode 12 - Integer to Roman

## 1. Problem Information

- **Platform:** LeetCode
- **Problem ID:** 12
- **Problem Title:** Integer to Roman
- **Problem Link:** https://leetcode.com/problems/integer-to-roman/
- **Source Code (Fail):** No original before-class code was submitted
- **Source Code (Correct/Accepted):** [src/LeetCode12.cpp](./src/LeetCode12.cpp)

## 2. Problem Statement in My Own Words

The problem gives an integer and asks me to convert it into a Roman numeral.

Roman numerals use special subtractive forms such as `IV`, `IX`, `XL`, `XC`, `CD`, and `CM`.

## 3. Thinking Logic and Solution Strategy

No original before-class code was submitted for this problem. This version was completed later for the archive.

I list Roman numeral values from largest to smallest. Then I repeatedly subtract the largest possible value from the number and append the corresponding Roman symbol.

## 4. Pseudocode

```text
Create list of Roman values from large to small

result = empty string

For each value-symbol pair:
    While num >= value:
        result += symbol
        num -= value

Return result
```

## 5. Fail Code vs Correct Code

### Fail Code

No original before-class code was submitted for this problem.

**Why it failed:**

- I did not submit this before-class exercise during the original assignment time.

### Correct Code

See [src/LeetCode12.cpp](./src/LeetCode12.cpp).

**Why it works:**

- It includes both normal and subtractive Roman numeral cases.
- It processes values from largest to smallest.
- It builds the Roman numeral greedily.

## 6. Difference and Reflection

I learned that greedy matching works well for Roman numeral conversion when the value table includes special subtractive cases.
