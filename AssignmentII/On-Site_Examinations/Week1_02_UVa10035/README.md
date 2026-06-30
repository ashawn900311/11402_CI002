# UVa 10035 - Primary Arithmetic

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10035
- **Problem Title:** Primary Arithmetic
- **Problem Link:** https://onlinejudge.org/external/100/10035.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa10035.cpp](./src/UVa10035.cpp)

## 2. Problem Statement in My Own Words

The problem gives pairs of numbers. For each pair, I need to count how many carry operations happen when adding the two numbers by hand.

The input ends when both numbers are `0`.

## 3. Thinking Logic and Solution Strategy

No original code was submitted for this problem. This version was completed later for the archive.

I check the numbers digit by digit from right to left. If two digits plus the previous carry are at least `10`, then a new carry operation happens.

## 4. Pseudocode

```text
While input a and b exists:
    If a == 0 and b == 0:
        Stop

    carry = 0
    carryCount = 0

    While a > 0 or b > 0:
        digitA = a % 10
        digitB = b % 10

        If digitA + digitB + carry >= 10:
            carry = 1
            carryCount++
        Else:
            carry = 0

        Remove last digit from a and b

    Print carryCount with correct grammar
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the original assignment time.

### Correct Code

See [src/UVa10035.cpp](./src/UVa10035.cpp).

**Why it works:**

- It processes digits from right to left.
- It carries the previous carry into the next digit.
- It handles numbers with different lengths.
- It prints singular, plural, and no-carry formats correctly.

## 6. Difference and Reflection

I learned that simple arithmetic problems can still have tricky output format details. This problem required not only counting carries correctly, but also printing `operation` or `operations` depending on the count.
