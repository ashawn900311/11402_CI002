# UVa 10282 - Babelfish

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10282
- **Problem Title:** Babelfish
- **Problem Link:** https://onlinejudge.org/external/102/10282.pdf
- **Source Code (Fail):** No original final exam code was submitted
- **Source Code (Correct/Accepted):** [src/UVa10282.cpp](./src/UVa10282.cpp)

## 2. Problem Statement in My Own Words

The problem gives dictionary entries first. Each entry contains an English word and a foreign word.

After a blank line, the input gives foreign words as queries. For each query, I need to print the English translation. If the foreign word is not in the dictionary, I should print `eh`.

## 3. Thinking Logic and Solution Strategy

No original final exam code was submitted for this problem. This version was completed later for the archive.

This problem is a lookup problem. I store each foreign word as a key and its English translation as the value.

After reading the dictionary section, I read each query and check whether it exists in the map.

## 4. Pseudocode

```text
Create empty dictionary map

While reading dictionary lines until blank line:
    Read English word and foreign word
    dictionary[foreign] = English

While reading query word:
    If query exists in dictionary:
        Print dictionary[query]
    Else:
        Print "eh"
```

## 5. Fail Code vs Correct Code

### Fail Code

No original final exam code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the final exam.

### Correct Code

See [src/UVa10282.cpp](./src/UVa10282.cpp).

**Why it works:**

- It reads dictionary entries until a blank line.
- It stores foreign-to-English translations in a map.
- It answers each query with direct lookup.
- It prints `eh` when the word is unknown.

## 6. Difference and Reflection

I learned that maps are useful for dictionary-style problems. The important detail in this problem is that the dictionary section and the query section are separated by a blank line.
