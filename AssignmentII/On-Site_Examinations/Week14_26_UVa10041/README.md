# UVa 10041 - Vito's Family

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10041
- **Problem Title:** Vito's Family
- **Problem Link:** https://onlinejudge.org/external/100/10041.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa10041.cpp](./src/UVa10041.cpp)

## 2. Problem Statement in My Own Words

The problem gives the street numbers of Vito's relatives. I need to choose a house position for Vito so that the total walking distance to all relatives is minimized.

The minimum total distance is achieved by choosing the median position.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

This problem asks for the best meeting position on a line. I learned that the median minimizes the sum of absolute distances.

### Final Strategy

I sort all relatives' street numbers and choose the middle value as the median. Then I calculate the sum of absolute differences between the median and every relative's position.

## 4. Pseudocode

```text
START

Read test case count

For each test case:
    Read number of relatives
    Read all street numbers
    Sort street numbers
    median = middle street number

    total = 0
    For each street number:
        total += absolute difference from median

    Print total

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version was correct.

### Correct Code

See [src/UVa10041.cpp](./src/UVa10041.cpp).

**Why it works:**

- It sorts all street numbers.
- It chooses the median position.
- It calculates the total absolute distance.
- It prints the minimum total walking distance for each test case.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | No failed version | Uses median to minimize distance |
| Edge Cases | No failed version | Handles different numbers of relatives |
| Output Handling | No failed version | Prints one answer per test case |
| Other | No failed version | Submitted version was correct |

### Reflection

I learned that for minimizing the sum of distances on a straight line, the best position is the median. Sorting the positions first makes the median easy to find.
