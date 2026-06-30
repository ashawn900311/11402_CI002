# UVa 10931 - Parity

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10931
- **Problem Title:** Parity
- **Problem Link:** https://onlinejudge.org/external/109/10931.pdf
- **Source Code (Fail):** No original midterm code was submitted
- **Source Code (Correct/Accepted):** [src/UVa10931.cpp](./src/UVa10931.cpp)

## 2. Problem Statement in My Own Words

The problem gives several decimal numbers. For each number, I need to convert it into binary and count how many `1` bits appear in the binary representation.

The input ends when the number is `0`.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

I did not submit this problem during the midterm. This version was completed later for the archive.

When solving it later, I noticed that the problem can be solved by converting the decimal number to binary and counting the number of `1` bits.

### Final Strategy

I repeatedly divide the number by `2` and store each remainder in a vector. These remainders form the binary digits, but they are generated from right to left, so I reverse the vector before printing.

After that, I count how many digits are `1` and print the binary representation with its parity.

## 4. Pseudocode

```text
START

Read num until num is 0

For each num:
    Create empty binary vector

    While num >= 1:
        remainder = num % 2
        Push remainder into vector
        num = num / 2

    Reverse vector

    Count how many values are 1

    Print binary representation and parity count

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original midterm code was submitted for this problem.

**Why it failed:**

- I did not submit this problem during the midterm.

### Correct Code

```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void dectobi(long long int num, vector<long long int>& bi) {
    while (num >= 1) {
        long long int remaining = num % 2;
        bi.push_back(remaining);
        num = num / 2;
    }

    reverse(bi.begin(), bi.end());
}

int main() {
    long long int num{};

    while (cin >> num && num != 0) {
        vector<long long int> bi;
        dectobi(num, bi);

        cout << "The parity of ";

        for (int i = 0; i < bi.size(); i++) {
            cout << bi[i];
        }

        long long int c = count(bi.begin(), bi.end(), 1);
        cout << " is " << c << " (mod 2)." << endl;
    }

    return 0;
}
```

**Why it works:**

- It correctly converts a decimal number to binary.
- It reverses the digits to print them in the correct order.
- It counts the number of `1` bits.
- It stops when the input is `0`.
- It matches the required UVa output format.

## 6. Difference and Reflection

### Key Differences

| Item | Original Midterm Submission | Correct Code |
|---|---|---|
| Logic | Not submitted | Converts decimal to binary |
| Edge Cases | Not submitted | Stops at input `0` |
| Output Handling | Not submitted | Prints the required parity sentence |
| Other | No original midterm code | Completed later for the archive |

### Reflection

Although I did not submit this problem during the midterm, completing it later helped me review binary conversion. I learned that the remainders from division by `2` are generated in reverse order, so the binary digits need to be reversed before output.
