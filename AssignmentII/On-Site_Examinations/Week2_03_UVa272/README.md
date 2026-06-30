# UVa 272 - TEX Quotes

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 272
- **Problem Title:** TEX Quotes
- **Problem Link:** https://onlinejudge.org/external/2/272.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa272.cpp](./src/UVa272.cpp)

## 2. Problem Statement in My Own Words

The problem gives text input. I need to replace every double quote `"` with TEX-style opening and closing quotes.

The first quote should become ```` and the second quote should become `''`. Then this pattern repeats.

## 3. Thinking Logic and Solution Strategy

No original code was submitted for this problem. This version was completed later for the archive.

I read the input character by character. When I see a double quote, I use a boolean variable to decide whether it should be an opening quote or closing quote.

If the character is not a double quote, I print it directly.

## 4. Pseudocode

```text
openQuote = true

While character input exists:
    If character is double quote:
        If openQuote:
            Print opening TEX quote
        Else:
            Print closing TEX quote

        Toggle openQuote
    Else:
        Print character
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the original assignment time.

### Correct Code

See [src/UVa272.cpp](./src/UVa272.cpp).

**Why it works:**

- It reads all characters, including spaces and newlines.
- It toggles between opening and closing quotes.
- It preserves all non-quote characters.
- It produces TEX-style quotes.

## 6. Difference and Reflection

I learned that character-by-character input is useful when the original spacing and line breaks must be preserved. A simple boolean flag can handle alternating states.
