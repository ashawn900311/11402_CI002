# UVa 11332 - Summing Digits

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11332
- **Problem Title:** Summing Digits
- **Problem Link:** https://onlinejudge.org/external/113/11332.pdf
- **Source Code (Fail):** No original midterm code was submitted
- **Source Code (Correct/Accepted):** [src/UVa11332.cpp](./src/UVa11332.cpp)

## 2. Problem Statement in My Own Words

The problem gives a number. I need to repeatedly sum its digits until the result becomes a single digit.

The input ends when the number is `0`.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

No original midterm code was submitted for this problem. This version was completed later for the archive.

### Final Strategy

While the number has more than one digit, I calculate the sum of its digits. Then I replace the number with that sum.

When the number becomes less than `10`, it is the final answer.

## 4. Pseudocode

```text
START

While input n is not 0:
    While n >= 10:
        sum = 0

        While n > 0:
            sum = sum + n % 10
            n = n / 10

        n = sum

    Print n

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original midterm code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the midterm.

### Correct Code

See [src/UVa11332.cpp](./src/UVa11332.cpp).

**Why it works:**

- It repeatedly sums digits until only one digit remains.
- It stops when the input is `0`.
- It handles large input values using `long long`.
- It prints one result for each input number.

## 6. Difference and Reflection

### Key Differences

| Item | Original Midterm Submission | Correct Code |
|---|---|---|
| Logic | Not submitted | Repeatedly sums digits |
| Edge Cases | Not submitted | Stops at input `0` |
| Output Handling | Not submitted | Prints one answer per line |
| Other | No original midterm code | Completed later for the archive |

### Reflection

I learned that this problem can be solved with repeated digit summing. The important part is to continue the process until the result is a single digit, not just sum the digits once.
