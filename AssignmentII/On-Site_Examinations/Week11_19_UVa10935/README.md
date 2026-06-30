# UVa 10935 - Throwing cards away I

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10935
- **Problem Title:** Throwing cards away I
- **Problem Link:** https://onlinejudge.org/external/109/10935.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa10935.cpp](./src/UVa10935.cpp)

## 2. Problem Statement in My Own Words

The problem gives a number of cards from `1` to `n`. I need to simulate a process where the top card is discarded, then the next top card is moved to the bottom of the deck. This process repeats until only one card remains.

The output should show all discarded cards and the remaining card.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

This problem is a direct simulation. Since cards are removed from the front and sometimes moved to the back, a queue is suitable.

### Final Strategy

I put all cards from `1` to `n` into a queue. While more than one card remains:

- Print and remove the front card.
- Move the next front card to the back.
- Remove it from the front.

At the end, the only remaining card is the answer.

## 4. Pseudocode

```text
START

While n is not 0:
    Put cards 1 to n into queue

    While queue size is greater than 1:
        Print and remove front card
        Move next front card to back
        Remove that card from front

    Print remaining card

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version was correct.

### Correct Code

See [src/UVa10935.cpp](./src/UVa10935.cpp).

**Why it works:**

- It uses a queue to simulate the card order.
- It removes discarded cards from the front.
- It moves the next card to the back.
- It stops when only one card remains.
- It prints the required output format.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | No failed version | Uses queue simulation |
| Edge Cases | No failed version | Handles `n = 1` and stops at `0` |
| Output Handling | No failed version | Prints discarded cards and remaining card |
| Other | No failed version | Submitted version was correct |

### Reflection

I learned that queue is useful when a problem repeatedly removes items from the front and adds items to the back. This problem became simple after matching the process with the correct data structure.
