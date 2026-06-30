# UVa 673 - Parentheses Balance

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 673
- **Problem Title:** Parentheses Balance
- **Problem Link:** https://onlinejudge.org/external/6/673.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa673.cpp](./src/UVa673.cpp)

## 2. Problem Statement in My Own Words

The problem gives several strings containing parentheses and brackets. For each string, I need to determine whether the brackets are balanced.

A string is balanced if every opening bracket has a matching closing bracket in the correct order.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

This problem is suitable for using a stack because the most recent opening bracket should be matched first.

### Final Strategy

When I see an opening bracket, I push it into the stack. When I see a closing bracket, I check whether the stack top is the matching opening bracket.

If the stack is empty too early or the top does not match, the string is not balanced. At the end, the string is balanced only if the stack is empty.

## 4. Pseudocode

```text
START

Read test case count

For each line:
    Create empty stack
    flag = true

    For each character:
        If it is '(' or '[':
            Push into stack
        Else if it is ')' or ']':
            If stack is empty or top does not match:
                flag = false
                Stop checking
            Else:
                Pop stack

    If flag is true and stack is empty:
        Print Yes
    Else:
        Print No

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version was correct.

### Correct Code

See [src/UVa673.cpp](./src/UVa673.cpp).

**Why it works:**

- It uses a stack to match brackets in the correct order.
- It detects wrong closing brackets.
- It handles empty lines.
- It checks that no unmatched opening brackets remain.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | No failed version | Uses stack matching |
| Edge Cases | No failed version | Handles empty stack and leftover brackets |
| Output Handling | No failed version | Prints `Yes` or `No` |
| Other | No failed version | Submitted version was correct |

### Reflection

I learned that stack is a natural tool for bracket matching problems. The key idea is that the last opening bracket must be the first one to close.
