# UVa 10474 - Where is the Marble?

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10474
- **Problem Title:** Where is the Marble?
- **Problem Link:** https://onlinejudge.org/external/104/10474.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa10474.cpp](./src/UVa10474.cpp)

## 2. Problem Statement in My Own Words

The problem gives several marbles with numbers on them. For each query number, I need to determine whether the number exists in the marble list.

If the number exists, I should print the first position where it appears after sorting the marbles. If it does not exist, I should print that it was not found.

The input ends when both `n` and `q` are `0`.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

I did not submit this problem during the original assignment time. When solving it later, I noticed that the problem asks for the first position after sorting.

### Final Strategy

First, I sort all marble numbers. Then for each query, I use binary search with `lower_bound`.

`lower_bound` returns the first position where the query could appear. If that position contains the query number, then it is the first occurrence. Otherwise, the number is not found.

## 4. Pseudocode

```text
START

caseNumber = 1

While input n and q:
    If n == 0 and q == 0:
        Stop

    Read marble numbers
    Sort marble numbers

    Print case number

    For each query:
        Use lower_bound to find query
        If found:
            Print first position
        Else:
            Print not found

    caseNumber++

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not finish or submit this problem during the original assignment time.

### Correct Code

See [src/UVa10474.cpp](./src/UVa10474.cpp).

**Why it works:**

- It sorts the marble numbers before answering queries.
- It uses binary search to find the first possible position.
- It correctly handles duplicate numbers by using `lower_bound`.
- It stops when the input is `0 0`.
- It prints the required case format.

## 6. Difference and Reflection

### Key Differences

| Item | Original Submission | Correct Code |
|---|---|---|
| Logic | Not submitted | Sorts and uses binary search |
| Edge Cases | Not submitted | Handles duplicate marbles and `0 0` ending |
| Output Handling | Not submitted | Prints `CASE#` format |
| Other | No original code | Completed later for the archive |

### Reflection

I learned that sorting can make searching much easier. I also learned that when a problem asks for the first position of a value, `lower_bound` is useful because it finds the first occurrence after sorting.
