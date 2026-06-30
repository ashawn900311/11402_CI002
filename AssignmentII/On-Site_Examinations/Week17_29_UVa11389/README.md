# UVa 11389 - The Bus Driver Problem

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11389
- **Problem Title:** The Bus Driver Problem
- **Problem Link:** https://onlinejudge.org/external/113/11389.pdf
- **Source Code (Fail):** No failed version
- **Source Code (Correct/Accepted):** [src/UVa11389.cpp](./src/UVa11389.cpp)

## 2. Problem Statement in My Own Words

The problem gives morning bus routes and evening bus routes. Each driver should be assigned one morning route and one evening route.

If the total route length for a driver is greater than `d`, the extra distance must be paid as overtime. Each overtime unit costs `r`.

I need to minimize the total overtime payment.

## 3. Thinking Logic and Solution Strategy

This submission was correct.

To minimize overtime, I pair the shortest morning route with the longest evening route. This balances the total distance for each driver as much as possible.

So I sort the morning routes in increasing order and the evening routes in decreasing order. Then I calculate the overtime for each pair.

## 4. Pseudocode

```text
While input n, d, r is not 0 0 0:
    Read morning routes
    Read evening routes

    Sort morning routes increasing
    Sort evening routes decreasing

    overtimePay = 0

    For each driver:
        overtime = morning[i] + evening[i] - d
        If overtime > 0:
            overtimePay += overtime * r

    Print overtimePay
```

## 5. Fail Code vs Correct Code

### Fail Code

No failed version was saved for this problem.

**Why it failed:**

- This submitted version was correct.

### Correct Code

See [src/UVa11389.cpp](./src/UVa11389.cpp).

**Why it works:**

- It pairs short morning routes with long evening routes.
- It minimizes large route totals.
- It calculates overtime only when the total exceeds `d`.
- It stops when the input is `0 0 0`.

## 6. Difference and Reflection

I learned that greedy pairing can reduce the maximum combined workload. Sorting one list in increasing order and the other in decreasing order helps balance the route lengths and minimize overtime.
