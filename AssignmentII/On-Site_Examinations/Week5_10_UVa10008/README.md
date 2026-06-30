# UVa 10008 - What's Cryptanalysis?

## 1. Problem Information

- Platform: UVa Online Judge
- Problem ID: 10008
- Problem Title: What's Cryptanalysis?
- Source Code: src/UVa10008.cpp

## 2. Problem Statement in My Own Words

The problem gives several lines of text. I need to count how many times each English letter appears. Uppercase and lowercase letters should be treated as the same letter. After counting, I need to print the letters by frequency from high to low. If two letters have the same frequency, they should be printed in alphabetical order.

## 3. Thinking Logic and Solution Strategy

This problem is mainly about character counting and sorting.

First, I read the number of lines. Then I read each line and check every character. If the character is an English letter, I convert it to uppercase and increase its count.

After counting all letters, I store the letters that appeared into a vector. Then I sort the vector using two rules:

- Higher frequency comes first.
- If the frequency is the same, alphabetical order comes first.

## 4. Pseudocode

```text
START

Read number of lines

For each line:
    Read the whole line
    For each character in the line:
        If it is a letter:
            Convert it to uppercase
            Increase its count

Put all appeared letters into a list

Sort the list:
    Higher count first
    If counts are equal, smaller letter first

Print each letter and its count

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

Why it failed:

- I did not finish or submit this problem during the original assignment time.

### Correct Code

See `src/UVa10008.cpp`.

Why it works:

- It counts only English letters.
- It treats uppercase and lowercase letters as the same.
- It ignores spaces, punctuation, and other non-letter characters.
- It sorts by frequency from high to low.
- If frequencies are the same, it sorts alphabetically.

## 6. Difference and Reflection

### Key Differences

| Item | Original Submission | Correct Code |
|---|---|---|
| Submission Status | Not submitted | Completed later for the archive |
| Counting Logic | Not completed | Counts letters using an array |
| Case Handling | Not completed | Converts letters to uppercase |
| Sorting | Not completed | Sorts by frequency, then alphabetically |

### Reflection

I did not submit this problem during the original assignment time, but completing it later helped me understand how to process text input and sort custom data. I also learned that for online judge problems, reading the whole line with `getline` is important when the input contains spaces.
