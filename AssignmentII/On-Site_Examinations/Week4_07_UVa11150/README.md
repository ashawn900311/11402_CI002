# UVa 11150 - Cola

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11150
- **Problem Title:** Cola
- **Problem Link:** https://onlinejudge.org/external/111/11150.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa11150.cpp](./src/UVa11150.cpp)

## 2. Problem Statement in My Own Words

The problem gives the number of cola bottles I initially have. After drinking a cola, I get an empty bottle. Three empty bottles can be exchanged for one new cola.

I need to calculate the maximum number of colas I can drink.

If I have two empty bottles left, I can borrow one empty bottle to exchange for one more cola, then return the borrowed bottle.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

No original code was submitted for this problem. This version was completed later for the archive.

### Final Strategy

I simulate the exchange process. I start with `n` colas and `n` empty bottles. While I have at least three empty bottles, I exchange them for new colas.

At the end, if two empty bottles remain, I can drink one more cola by borrowing one bottle.

## 4. Pseudocode

```text
START

While input n exists:
    total = n
    emptyBottles = n

    While emptyBottles >= 3:
        newCola = emptyBottles / 3
        total += newCola
        emptyBottles = newCola + emptyBottles % 3

    If emptyBottles == 2:
        total++

    Print total

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the original assignment time.

### Correct Code

See [src/UVa11150.cpp](./src/UVa11150.cpp).

**Why it works:**

- It simulates exchanging empty bottles for new cola.
- It keeps track of remaining empty bottles.
- It handles the special case where two bottles remain.
- It prints the maximum number of colas.

## 6. Difference and Reflection

### Key Differences

| Item | Original Submission | Correct Code |
|---|---|---|
| Logic | Not submitted | Simulates cola bottle exchange |
| Edge Cases | Not submitted | Handles two remaining empty bottles |
| Output Handling | Not submitted | Prints one answer per input |
| Other | No original code | Completed later for the archive |

### Reflection

I learned that simulation problems often require careful tracking of state. In this problem, the important state is the number of empty bottles after each exchange.
