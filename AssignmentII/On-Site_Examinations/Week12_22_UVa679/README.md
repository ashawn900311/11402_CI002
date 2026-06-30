# UVa 679 - Dropping Balls

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 679
- **Problem Title:** Dropping Balls
- **Problem Link:** https://onlinejudge.org/external/6/679.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa679.cpp](./src/UVa679.cpp)

## 2. Problem Statement in My Own Words

The problem describes a complete binary tree. Balls are dropped from the root one by one. Each internal node has a switch. When a ball reaches a node, the switch changes direction and the ball goes left or right.

Given the depth of the tree and which ball is dropped, I need to find the final leaf position where that ball stops.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

I did not submit this problem during the original assignment time. When solving it later, I first thought about simulating every ball, but that would be unnecessary.

### Final Strategy

Instead of simulating all previous balls, I track only the path of the target ball.

If the ball number is odd, it goes to the left child. If the ball number is even, it goes to the right child. After moving down one level, the ball number can be updated to represent its order inside the chosen subtree.

The tree uses heap-like indexing:

```text
left child = position * 2
right child = position * 2 + 1
```

## 4. Pseudocode

```text
START

Read test case count

For each test case:
    Read depth and ball number
    position = 1

    For each level before the leaf level:
        If ball is odd:
            position = position * 2
            ball = (ball + 1) / 2
        Else:
            position = position * 2 + 1
            ball = ball / 2

    Print position

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not finish or submit this problem during the original assignment time.

### Correct Code

See [src/UVa679.cpp](./src/UVa679.cpp).

**Why it works:**

- It does not need to simulate every previous ball.
- It uses the parity of the ball number to decide left or right.
- It updates the node position using complete binary tree indexing.
- It stops after reaching the leaf level.
- It prints the final position for each test case.

## 6. Difference and Reflection

### Key Differences

| Item | Original Submission | Correct Code |
|---|---|---|
| Logic | Not submitted | Tracks the target ball path |
| Edge Cases | Not submitted | Handles large depth without full simulation |
| Output Handling | Not submitted | Prints one leaf position per test case |
| Other | No original code | Completed later for the archive |

### Reflection

I learned that direct simulation is not always necessary. This problem can be solved by observing the pattern of odd and even ball numbers. Using complete binary tree indexing makes the solution short and efficient.
