# UVa 12250 - Language Detection

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 12250
- **Problem Title:** Language Detection
- **Problem Link:** https://onlinejudge.org/external/122/12250.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa12250.cpp](./src/UVa12250.cpp)

## 2. Problem Statement in My Own Words

The problem gives one greeting word at a time. I need to identify which language the greeting belongs to.

The input ends when the word is `#`.

## 3. Thinking Logic and Solution Strategy

This final exam bonus submission was correct. Since the possible greetings are fixed, I can store each greeting and its language.

I use a map to connect each greeting word to its corresponding language. If the input word exists in the map, I print the language. Otherwise, I print `UNKNOWN`.

## 4. Pseudocode

```text
Create map of greeting to language
caseNumber = 1

While input word is not "#":
    Print "Case caseNumber: "

    If word exists in map:
        Print language
    Else:
        Print UNKNOWN

    caseNumber++
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This final exam bonus submission was correct.

### Correct Code

See [src/UVa12250.cpp](./src/UVa12250.cpp).

**Why it works:**

- It stores all known greetings.
- It handles unknown greetings.
- It stops when the input is `#`.
- It prints the required `Case x:` format.

## 6. Difference and Reflection

I learned that a map is useful when a problem asks for direct lookup from one value to another. In this problem, each greeting maps clearly to one language, so the solution is simple and readable.
