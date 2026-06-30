# UVa 11063 - B2-Sequence

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11063
- **Problem Title:** B2-Sequence
- **Problem Link:** https://onlinejudge.org/external/110/11063.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa11063.cpp](./src/UVa11063.cpp)

## 2. Problem Statement in My Own Words

The problem gives a sequence of numbers. I need to determine whether it is a B2-sequence.

A valid B2-sequence must be increasing, all numbers must be positive, and every pair sum must be unique.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

I did not submit this problem during the original assignment time. When solving it later, I noticed that the key point is checking whether any pair sums repeat.

### Final Strategy

First, I check whether the sequence is positive and strictly increasing. Then I use a set to store every sum `sequence[i] + sequence[j]` where `i <= j`.

If a sum already exists in the set, then the sequence is not a B2-sequence.

## 4. Pseudocode

```text
START

caseNumber = 1

While input n exists:
    Read sequence

    Check if all numbers are positive
    Check if sequence is strictly increasing

    Create empty set

    For i from 0 to n - 1:
        For j from i to n - 1:
            sum = sequence[i] + sequence[j]
            If sum already exists:
                Not a B2-sequence
            Add sum to set

    Print result
    caseNumber++

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not finish or submit this problem during the original assignment time.

### Correct Code

See [src/UVa11063.cpp](./src/UVa11063.cpp).

**Why it works:**

- It checks that the sequence is positive.
- It checks that the sequence is strictly increasing.
- It uses a set to detect repeated pair sums.
- It prints the required case format.

## 6. Difference and Reflection

### Key Differences

| Item | Original Submission | Correct Code |
|---|---|---|
| Logic | Not submitted | Checks B2-sequence rules |
| Edge Cases | Not submitted | Handles invalid order and repeated sums |
| Output Handling | Not submitted | Prints case number and blank line |
| Other | No original code | Completed later for the archive |

### Reflection

I learned that some problems are mainly about checking definitions carefully. For this problem, the important part is not only sorting or comparing numbers, but also confirming that every possible pair sum is unique.
