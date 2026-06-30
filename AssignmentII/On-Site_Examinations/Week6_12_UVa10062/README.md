# UVa 10062 - Tell me the frequencies!

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10062
- **Problem Title:** Tell me the frequencies!
- **Problem Link:** https://onlinejudge.org/external/100/10062.pdf
- **Source Code (Fail):** No original failed code available
- **Source Code (Correct/Accepted):** [src/UVa10062.cpp](./src/UVa10062.cpp)

## 2. Problem Statement in My Own Words

The problem gives several lines of text. For each line, I need to count how many times each ASCII character appears.

For every character that appears, I need to print its ASCII value and frequency. The output should be sorted by frequency from low to high. If two characters have the same frequency, the character with the larger ASCII value should be printed first.

A blank line should be printed between different test cases.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

This problem is about frequency counting and custom sorting. Since the input is a full line of text, I need to use `getline`.

### Final Strategy

For each line, I create a frequency array. I count every character in the line by its ASCII value.

After counting, I store only the characters that appeared into a vector. Then I sort the vector using two rules:

- Lower frequency comes first.
- If frequencies are the same, larger ASCII value comes first.

## 4. Pseudocode

```text
START

Set firstCase = true

While a line can be read:
    If this is not the first case:
        Print a blank line

    Create frequency array

    For each character in the line:
        Increase its ASCII frequency

    Put appeared characters into a list

    Sort the list:
        Lower frequency first
        If same frequency, larger ASCII value first

    Print ASCII value and frequency

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original failed code is available for this problem.

**Why it failed:**

- No failed version was saved.

### Correct Code

See [src/UVa10062.cpp](./src/UVa10062.cpp).

**Why it works:**

- It reads each full input line.
- It counts characters by ASCII value.
- It ignores characters that do not appear.
- It sorts by frequency from low to high.
- If frequencies are equal, it sorts by ASCII value from high to low.
- It prints a blank line between output cases.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | No failed version | Counts ASCII character frequency |
| Edge Cases | No failed version | Handles spaces and symbols in a full line |
| Output Handling | No failed version | Prints blank lines between cases |
| Other | No failed version | Uses custom sorting rules |

### Reflection

I learned that sorting can have more than one condition. In this problem, frequency is the first sorting rule, but ASCII value is used when frequencies are the same. I also learned that using `getline` is important when input lines may contain spaces.
