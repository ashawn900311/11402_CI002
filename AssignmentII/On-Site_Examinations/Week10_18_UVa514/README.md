# UVa 514 - Rails

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 514
- **Problem Title:** Rails
- **Problem Link:** https://onlinejudge.org/external/5/514.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa514.cpp](./src/UVa514.cpp)

## 2. Problem Statement in My Own Words

The problem gives the number of train cars and several target train orders. I need to determine whether each target order can be produced using one station stack.

Train cars enter the station in order from `1` to `n`. The station works like a stack, so the last train car pushed into the station must leave first.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

This problem is about simulating train movement. Since the station behaves like a stack, I can use a stack to simulate cars entering and leaving the station.

### Final Strategy

I process the target order from left to right.

For each target train car:

- Push incoming train cars into the station until the top of the stack is the target car.
- If the top matches the target, pop it.
- If it is impossible to make the top match, the target order cannot be formed.

## 4. Pseudocode

```text
START

While n is not 0:
    Read target sequences

    For each target sequence:
        station = empty stack
        currentTrain = 1
        possible = true

        For each target car:
            While currentTrain <= n and stack top is not target:
                Push currentTrain into stack
                currentTrain++

            If stack top is target:
                Pop stack
            Else:
                possible = false

        If possible:
            Print Yes
        Else:
            Print No

    Print blank line

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version was correct.

### Correct Code

See [src/UVa514.cpp](./src/UVa514.cpp).

**Why it works:**

- It simulates the station as a stack.
- It processes train cars in the original order.
- It checks whether each target car can be moved out at the correct time.
- It handles the `0` input that ends each group.
- It prints a blank line after each group.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | No failed version | Simulates rails using a stack |
| Edge Cases | No failed version | Handles `0` sequence and `n = 0` ending |
| Output Handling | No failed version | Prints `Yes`, `No`, and blank lines |
| Other | No failed version | Submitted version was correct |

### Reflection

I learned how to simulate a process using a stack. The important idea is that train cars can only leave the station in last-in-first-out order, so checking the stack top is the key step.
