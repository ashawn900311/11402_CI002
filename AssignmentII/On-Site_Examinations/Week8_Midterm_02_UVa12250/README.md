# UVa 12250 - Language Detection

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 12250
- **Problem Title:** Language Detection
- **Problem Link:** https://onlinejudge.org/external/122/12250.pdf
- **Source Code (Fail):** No original midterm code was submitted
- **Source Code (Correct/Accepted):** [src/UVa12250.cpp](./src/UVa12250.cpp)

## 2. Problem Statement in My Own Words

The problem gives one greeting word at a time. I need to identify which language the greeting belongs to.

The input ends when the word is `#`.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

No original midterm code was submitted for this problem. This version was completed later for the archive.

### Final Strategy

There are only a few possible greeting words. I can compare the input word with each known greeting and print the corresponding language.

If the word does not match any known greeting, I print `UNKNOWN`.

## 4. Pseudocode

```text
START

caseNumber = 1

While input word is not "#":
    Print "Case caseNumber: "

    If word is HELLO:
        Print ENGLISH
    Else if word is HOLA:
        Print SPANISH
    Else if word is HALLO:
        Print GERMAN
    Else if word is BONJOUR:
        Print FRENCH
    Else if word is CIAO:
        Print ITALIAN
    Else if word is ZDRAVSTVUJTE:
        Print RUSSIAN
    Else:
        Print UNKNOWN

    caseNumber++

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original midterm code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the midterm.

### Correct Code

See [src/UVa12250.cpp](./src/UVa12250.cpp).

**Why it works:**

- It compares each input word with the known greetings.
- It handles unknown words.
- It stops when the input is `#`.
- It prints the required case number format.

## 6. Difference and Reflection

### Key Differences

| Item | Original Midterm Submission | Correct Code |
|---|---|---|
| Logic | Not submitted | Uses direct string comparison |
| Edge Cases | Not submitted | Handles unknown words and `#` |
| Output Handling | Not submitted | Prints `Case x:` format |
| Other | No original midterm code | Completed later for the archive |

### Reflection

I learned that not every problem needs a complex algorithm. For this problem, carefully matching the given words and following the output format is enough.
