# LeetCode 169 - Majority Element

## 1. Problem Information

- **Platform:** LeetCode
- **Problem ID:** 169
- **Problem Title:** Majority Element
- **Problem Link:** https://leetcode.com/problems/majority-element/
- **Source Code (Fail):** No original before-class code was submitted
- **Source Code (Correct/Accepted):** [src/LeetCode169.cpp](./src/LeetCode169.cpp)

## 2. Problem Statement in My Own Words

The problem gives an array of integers. I need to find the element that appears more than half of the array length.

The problem guarantees that a majority element exists.

## 3. Thinking Logic and Solution Strategy

No original before-class code was submitted for this problem. This version was completed later for the archive.

I use the Boyer-Moore Voting Algorithm. The idea is to keep a candidate and a counter. When the counter becomes `0`, I choose the current number as the new candidate.

Because the majority element appears more than all other elements combined, it will remain as the final candidate.

## 4. Pseudocode

```text
candidate = first number
count = 0

For each number:
    If count == 0:
        candidate = number

    If number == candidate:
        count++
    Else:
        count--

Return candidate
```

## 5. Fail Code vs Correct Code

### Fail Code

No original before-class code was submitted for this problem.

**Why it failed:**

- I did not submit this before-class exercise during the original assignment time.

### Correct Code

See [src/LeetCode169.cpp](./src/LeetCode169.cpp).

**Why it works:**

- It uses the majority element property.
- It runs in linear time.
- It uses constant extra space.
- The problem guarantees that a majority element exists.

## 6. Difference and Reflection

I learned that not every counting problem needs a map. Boyer-Moore Voting Algorithm can find the majority element efficiently by canceling different values against each other.
