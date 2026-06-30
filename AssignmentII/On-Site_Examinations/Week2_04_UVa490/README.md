# UVa 490 - Rotating Sentences

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 490
- **Problem Title:** Rotating Sentences
- **Problem Link:** https://onlinejudge.org/external/4/490.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa490.cpp](./src/UVa490.cpp)

## 2. Problem Statement in My Own Words

The problem gives several lines of text. I need to rotate the text 90 degrees clockwise.

Because different lines may have different lengths, missing characters should be treated as spaces.

## 3. Thinking Logic and Solution Strategy

No original code was submitted for this problem. This version was completed later for the archive.

I store all input lines in a vector and find the maximum line length. Then I output characters column by column, starting from the last input line to the first input line.

If a line is too short for a certain column, I print a space.

## 4. Pseudocode

```text
Read all lines into a vector
Find maximum line length

For each column from 0 to maxLength - 1:
    For each row from last line to first line:
        If this row has a character at this column:
            Print that character
        Else:
            Print space

    Print newline
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the original assignment time.

### Correct Code

See [src/UVa490.cpp](./src/UVa490.cpp).

**Why it works:**

- It reads all lines including spaces.
- It handles lines with different lengths.
- It rotates the text clockwise.
- It fills missing positions with spaces.

## 6. Difference and Reflection

I learned that rotating text is similar to accessing a matrix by columns instead of rows. The tricky part is preserving spaces when some lines are shorter than others.
