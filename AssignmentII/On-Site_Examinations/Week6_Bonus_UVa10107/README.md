# UVa 10107 - What is the Median?

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10107
- **Problem Title:** What is the Median?
- **Problem Link:** https://onlinejudge.org/external/101/10107.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa10107.cpp](./src/UVa10107.cpp)

## 2. Problem Statement in My Own Words

The problem gives a sequence of numbers one by one. After reading each new number, I need to output the median of all numbers read so far.

If the current amount of numbers is odd, the median is the middle number after sorting. If the current amount of numbers is even, the median is the average of the two middle numbers.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

My first idea was to store all numbers in a vector. Every time a new number is read, I sort the vector and find the current median.

### Final Strategy

I keep all input numbers in a vector. After each new input, I sort the vector. Then I use a helper function to calculate the median.

This method works because the input size for this problem is acceptable for repeated sorting, and sorting makes the median position easy to find.

## 4. Pseudocode

```text
START

Create an empty vector

While there is input number:
    Add number into vector
    Sort vector

    If vector size is odd:
        median = middle element
    Else:
        median = average of two middle elements

    Print median

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version was correct.

### Correct Code

See [src/UVa10107.cpp](./src/UVa10107.cpp).

**Why it works:**

- It stores all numbers read so far.
- It sorts the numbers after each input.
- It correctly handles both odd and even vector sizes.
- It prints the median immediately after each input.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | No failed version | Sorts all numbers and finds the median |
| Edge Cases | No failed version | Handles odd and even counts |
| Output Handling | No failed version | Prints median after every input |
| Other | No failed version | Uses a helper function for median |

### Reflection

I learned that some problems require updating the answer after every new input. In this problem, sorting the vector after each input made the median easy to calculate. If the input were much larger, I could improve the solution by using two heaps, but this direct method is easier to understand and worked for this assignment.
