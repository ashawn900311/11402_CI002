# UVa 10931 - Parity

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10931
- **Problem Title:** Parity
- **Problem Link:** https://onlinejudge.org/external/109/10931.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa10931.cpp](./src/UVa10931.cpp)

## 2. Problem Statement in My Own Words

The problem gives several decimal numbers. For each number, I need to convert it into binary and count how many `1` bits appear in the binary representation.

The input ends when the number is `0`.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

My first idea was to convert the decimal number into binary by repeatedly dividing it by 2.

### Final Strategy

I store each remainder in a vector. Since the remainders are generated from right to left, I reverse the vector before printing. Then I count how many `1`s are in the binary representation.

## 4. Pseudocode

```text
START

Read num until num is 0

For each num:
    Create an empty binary vector
    While num >= 1:
        Push num % 2 into vector
        num = num / 2

    Reverse the vector
    Count how many 1s are in the vector
    Print binary form and parity count

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version was correct.

### Correct Code

See [src/UVa10931.cpp](./src/UVa10931.cpp).

**Why it works:**

- It correctly converts decimal numbers to binary.
- It reverses the binary digits into the correct order.
- It counts the number of `1` bits.
- It stops when the input is `0`.
- It matches the required UVa output format.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | No failed version | Converts decimal to binary |
| Edge Cases | No failed version | Stops at input `0` |
| Output Handling | No failed version | Prints the required parity sentence |
| Other | No failed version | Uses `count` to count 1 bits |

### Reflection

I learned how to convert a decimal number into binary using repeated division by 2. I also learned that the generated binary digits are reversed at first, so I need to reverse them before printing.
