# UVa 410 - Station Balance

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 410
- **Problem Title:** Station Balance
- **Problem Link:** https://onlinejudge.org/external/4/410.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa410.cpp](./src/UVa410.cpp)

## 2. Problem Statement in My Own Words

The problem gives several specimen masses and a number of chambers. Each chamber can contain up to two specimens.

I need to distribute the specimens into chambers so that the imbalance is as small as possible. The imbalance is calculated by comparing each chamber's total mass with the average mass.

## 3. Thinking Logic and Solution Strategy

No original code was submitted for this problem. This version was completed later for the archive.

The common strategy is to create exactly `2 * chambers` slots by adding zero-mass specimens if needed. Then I sort all masses and pair the smallest with the largest, the second smallest with the second largest, and so on.

This balances heavy and light specimens together.

## 4. Pseudocode

```text
setNumber = 1

While input chambers and specimens exists:
    Create list with size 2 * chambers, filled with 0
    Read specimen masses
    totalMass = sum of masses

    Sort masses

    average = totalMass / chambers
    imbalance = 0

    For each chamber i:
        left = masses[i]
        right = masses[2 * chambers - 1 - i]
        chamberMass = left + right

        Print chamber specimens
        imbalance += absolute value of chamberMass - average

    Print imbalance

    setNumber++
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the original assignment time.

### Correct Code

See [src/UVa410.cpp](./src/UVa410.cpp).

**Why it works:**

- It pads empty slots with zero.
- It sorts all specimen masses.
- It pairs small and large masses together.
- It calculates the average mass correctly.
- It prints the chamber arrangement and total imbalance in the required format.

## 6. Difference and Reflection

I learned that balancing problems can often be solved by pairing extremes. By sorting and pairing the lightest specimen with the heaviest specimen, each chamber's mass becomes closer to the average.
