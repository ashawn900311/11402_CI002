# UVa 11292 - Dragon of Loowater

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11292
- **Problem Title:** Dragon of Loowater
- **Problem Link:** https://onlinejudge.org/external/112/11292.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa11292.cpp](./src/UVa11292.cpp)

## 2. Problem Statement in My Own Words

The problem gives several dragon heads and several knights. Each dragon head has a diameter, and each knight has a height.

A knight can cut off a dragon head if the knight's height is at least the head's diameter. The cost of hiring a knight is equal to the knight's height. I need to find the minimum total cost to cut off all dragon heads.

If there are not enough suitable knights, I should print:

```text
Loowater is doomed!
```

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

This problem can be solved greedily. Smaller dragon heads should be matched first, and each dragon head should use the smallest knight that can handle it.

### Final Strategy

I sort the dragon heads and knights from small to large.

Then I use two pointers:

- One pointer for the current dragon head.
- One pointer for the current knight.

If the current knight can defeat the current dragon head, I hire that knight and move to the next dragon. Either way, I move to the next knight.

If all dragon heads are defeated, I print the total cost. Otherwise, Loowater is doomed.

## 4. Pseudocode

```text
START

While input dragonCount and knightCount is not 0 0:
    Read dragon heads
    Read knights

    Sort dragon heads
    Sort knights

    dragonIndex = 0
    knightIndex = 0
    cost = 0

    While there are dragons and knights left:
        If current knight can defeat current dragon:
            cost += knight height
            Move to next dragon

        Move to next knight

    If all dragons are defeated:
        Print cost
    Else:
        Print "Loowater is doomed!"

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version passed.

### Correct Code

See [src/UVa11292.cpp](./src/UVa11292.cpp).

**Why it works:**

- It sorts dragons and knights.
- It uses the smallest possible knight for each dragon head.
- It avoids wasting large knights on small heads too early.
- It detects when not all dragon heads can be defeated.
- It prints the minimum total cost.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | No failed version | Uses greedy matching |
| Edge Cases | No failed version | Handles impossible cases |
| Output Handling | No failed version | Prints cost or doomed message |
| Other | No failed version | Submitted version passed |

### Reflection

I learned that sorting both groups can make greedy matching easier. By always using the smallest knight that can defeat the current smallest dragon head, the total cost is minimized.
