# UVa 11364 - Optimal Parking

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11364
- **Problem Title:** Optimal Parking
- **Problem Link:** https://onlinejudge.org/external/113/11364.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa11364.cpp](./src/UVa11364.cpp)

## 2. Problem Statement in My Own Words

The problem gives several store positions on a street. I need to choose a parking position so that the total walking distance is minimized.

The shortest total walking distance is twice the distance between the leftmost store and the rightmost store.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

I did not submit this problem during the original assignment time. When solving it later, I noticed that the exact parking position does not need to be simulated.

### Final Strategy

The only important values are the minimum store position and the maximum store position. To visit all stores and return, the minimum distance is:

```text
(max position - min position) * 2
```

## 4. Pseudocode

```text
START

Read test case count

For each test case:
    Read number of stores
    Read all store positions
    Find minimum position
    Find maximum position
    Print (maximum - minimum) * 2

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not finish or submit this problem during the original assignment time.

### Correct Code

See [src/UVa11364.cpp](./src/UVa11364.cpp).

**Why it works:**

- It finds the leftmost and rightmost store.
- It calculates the distance needed to cover the whole range.
- It handles every test case independently.
- It prints the required minimum walking distance.

## 6. Difference and Reflection

### Key Differences

| Item | Original Submission | Correct Code |
|---|---|---|
| Logic | Not submitted | Uses min and max positions |
| Edge Cases | Not submitted | Handles any store order |
| Output Handling | Not submitted | Prints one answer per test case |
| Other | No original code | Completed later for the archive |

### Reflection

I learned that some problems become simple after identifying what information really matters. In this problem, the store order is not important. Only the leftmost and rightmost positions decide the answer.
