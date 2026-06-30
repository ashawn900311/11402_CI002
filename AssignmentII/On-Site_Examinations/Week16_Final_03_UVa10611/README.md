# UVa 10611 - The Playboy Chimp

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10611
- **Problem Title:** The Playboy Chimp
- **Problem Link:** https://onlinejudge.org/external/106/10611.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa10611.cpp](./src/UVa10611.cpp)

## 2. Problem Statement in My Own Words

The problem gives a sorted list of heights and several query heights. For each query, I need to find the tallest height that is shorter than the query and the shortest height that is taller than the query.

If either answer does not exist, I should print `X`.

## 3. Thinking Logic and Solution Strategy

This final exam submission was correct. Since the height list is sorted, I can use binary search.

I use `lower_bound` to find the first value that is not less than the query. The value before it is the closest shorter height.

I use `upper_bound` to find the first value greater than the query. That value is the closest taller height.

## 4. Pseudocode

```text
Read all heights
Read all queries

For each query:
    Find the value before lower_bound(query)
    Find upper_bound(query)

    Print shorter value or X
    Print taller value or X
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This final exam submission was correct.

### Correct Code

See [src/UVa10611.cpp](./src/UVa10611.cpp).

**Why it works:**

- It uses binary search on sorted data.
- It correctly finds the closest shorter height.
- It correctly finds the closest taller height.
- It prints `X` when no valid answer exists.

## 6. Difference and Reflection

I learned that `lower_bound` and `upper_bound` are useful for finding neighboring values in a sorted array. This makes the solution cleaner than scanning every height for each query.
