# UVa 12405 - Scarecrow

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 12405
- **Problem Title:** Scarecrow
- **Problem Link:** https://onlinejudge.org/external/124/12405.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa12405.cpp](./src/UVa12405.cpp)

## 2. Problem Statement in My Own Words

The problem gives a field represented by characters. A `.` means the position needs protection, and `#` means it does not need protection.

One scarecrow can protect three consecutive positions. I need to find the minimum number of scarecrows needed to protect all `.` positions.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

No original code was submitted for this problem. This version was completed later for the archive.

### Final Strategy

I scan the field from left to right.

When I see a `.` position, I place a scarecrow there to cover this position and the next two positions. Then I jump forward three positions.

When I see `#`, I simply move to the next position.

This greedy method works because placing a scarecrow as early as possible covers the current unprotected position and as many following positions as possible.

## 4. Pseudocode

```text
START

Read test case count

For each test case:
    Read n and field
    scarecrows = 0
    i = 0

    While i < n:
        If field[i] is '.':
            scarecrows++
            i = i + 3
        Else:
            i++

    Print case number and scarecrows

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the original assignment time.

### Correct Code

See [src/UVa12405.cpp](./src/UVa12405.cpp).

**Why it works:**

- It scans the field from left to right.
- It places a scarecrow whenever it finds an uncovered `.`.
- Each scarecrow covers three positions.
- It uses the minimum number of scarecrows with a greedy strategy.
- It prints the required case format.

## 6. Difference and Reflection

### Key Differences

| Item | Original Submission | Correct Code |
|---|---|---|
| Logic | Not submitted | Uses greedy placement |
| Edge Cases | Not submitted | Handles `#` and field endings |
| Output Handling | Not submitted | Prints `Case x:` format |
| Other | No original code | Completed later for the archive |

### Reflection

I learned that greedy solutions work well when each local choice safely covers the current problem. In this problem, once I find an unprotected `.`, placing a scarecrow immediately is the best choice because that position must be covered.
