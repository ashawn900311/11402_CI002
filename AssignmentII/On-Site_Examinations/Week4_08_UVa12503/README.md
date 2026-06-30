# UVa 12503 - Robot Instructions

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 12503
- **Problem Title:** Robot Instructions
- **Problem Link:** https://onlinejudge.org/external/125/12503.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa12503.cpp](./src/UVa12503.cpp)

## 2. Problem Statement in My Own Words

The problem gives a list of robot instructions. The robot starts at position `0`.

Each instruction can be:

- `LEFT`: move one step left
- `RIGHT`: move one step right
- `SAME AS x`: repeat the instruction at index `x`

After executing all instructions, I need to output the robot's final position.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

No original code was submitted for this problem. This version was completed later for the archive.

### Final Strategy

I store each instruction as a number:

- `LEFT` becomes `-1`
- `RIGHT` becomes `1`
- `SAME AS x` copies the value of instruction `x`

Then I add each instruction value to the current position.

## 4. Pseudocode

```text
START

Read test case count

For each test case:
    Read instruction count
    position = 0

    For each instruction i:
        Read command

        If command is LEFT:
            instruction[i] = -1
        Else if command is RIGHT:
            instruction[i] = 1
        Else:
            Read "AS" and index
            instruction[i] = instruction[index]

        position += instruction[i]

    Print position

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the original assignment time.

### Correct Code

See [src/UVa12503.cpp](./src/UVa12503.cpp).

**Why it works:**

- It stores every instruction result.
- It handles `LEFT`, `RIGHT`, and `SAME AS x`.
- It can copy previous instructions correctly.
- It updates the robot position after each command.

## 6. Difference and Reflection

### Key Differences

| Item | Original Submission | Correct Code |
|---|---|---|
| Logic | Not submitted | Stores instruction effects |
| Edge Cases | Not submitted | Handles `SAME AS x` |
| Output Handling | Not submitted | Prints final position |
| Other | No original code | Completed later for the archive |

### Reflection

I learned that when a command refers to a previous command, it is useful to store the result of each instruction. This makes `SAME AS x` easy to handle.
