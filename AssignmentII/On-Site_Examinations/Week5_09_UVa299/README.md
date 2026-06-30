# UVa 299 - Train Swapping

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 299
- **Problem Title:** Train Swapping
- **Problem Link:** https://onlinejudge.org/external/2/299.pdf
- **Source Code (Fail):** included in this README
- **Source Code (Correct/Accepted):** [src/UVa299.cpp](./src/UVa299.cpp)

## 2. Problem Statement in My Own Words

The problem gives several train sequences. Each train has a fixed number of cars, and the cars are given in an unordered order.

For each train sequence, I need to count how many adjacent swaps are required to sort the train cars in increasing order. The output must show the number of swaps using the exact format required by UVa.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

At first, I thought I only needed to compare nearby elements and count how many times they were swapped. However, my first loop range was incorrect, so the train was not fully sorted in every case.

I also printed extra debugging output, which made the answer format different from the required UVa output.

### Final Strategy

The correct method is to use bubble sort. Bubble sort repeatedly compares two adjacent elements. If the left element is greater than the right element, I swap them and increase the swap counter.

This works because the problem asks for adjacent swaps, and bubble sort performs exactly that kind of swap.

Important points:

- Use bubble sort to simulate adjacent train swaps.
- Count every adjacent swap.
- Print the answer with the exact UVa output format.
- Do not print debugging text.

## 4. Pseudocode

```text
START

Read test case count

For each test case:
    Read train length
    Read train sequence

    Set swaps = 0

    For i from 0 to length - 2:
        For j from 0 to length - i - 2:
            If train[j] > train[j + 1]:
                Swap train[j] and train[j + 1]
                swaps = swaps + 1

    Print "Optimal train swapping takes X swaps."

END
```

## 5. Fail Code vs Correct Code

### Fail Code

```cpp
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main() {
    vector<int> t;
    int testcase{}, buffer;
    cin >> testcase;
    buffer = testcase;

    while (testcase > 0) {
        vector<long long int> arr;

        int nums{}, times{};
        cin >> nums;

        for (int i{}; i < nums; i++) {
            long long int a{};
            cin >> a;
            arr.push_back(a);
        }

        for (int i = 0; i < nums; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    ++times;
                }
            }
        }

        t.push_back(times);
        --testcase;

        cout << "test:" << endl;
        for (int i = 0; i < nums; i++) {
            cout << arr[i];
        }
        cout << endl;
    }

    for (int i = 0; i < buffer; i++) {
        cout << "A:" << t[i] << endl;
    }
}
```

**Why it failed:**

- The bubble sort loop range was wrong.
- The inner loop used `j < i`, so the array was not fully sorted in some cases.
- The program printed debugging text like `test:`.
- The final output used `A:` instead of the required UVa output sentence.
- UVa requires the exact sentence `Optimal train swapping takes X swaps.`

### Correct Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int length;
        cin >> length;

        int train[50];

        for (int i = 0; i < length; i++) {
            cin >> train[i];
        }

        int swaps = 0;

        for (int i = 0; i < length - 1; i++) {
            for (int j = 0; j < length - i - 1; j++) {
                if (train[j] > train[j + 1]) {
                    int temp = train[j];
                    train[j] = train[j + 1];
                    train[j + 1] = temp;
                    swaps++;
                }
            }
        }

        cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
    }

    return 0;
}
```

**Why it works:**

- It uses standard bubble sort.
- It counts every adjacent swap.
- It prints the answer immediately for each test case.
- It matches the exact output format required by UVa.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | The loop range was incorrect | Uses complete bubble sort |
| Edge Cases | Could fail when the train was not fully sorted | Handles all positions in the sequence |
| Output Handling | Printed debug text and wrong labels | Prints the exact UVa sentence |
| Other | Stored answers and printed later | Prints each answer after processing |

### Reflection

In this problem, I learned that online judge problems require both correct logic and exact output format. My first code was close to the bubble sort idea, but the loop range was wrong, so it did not always count the correct number of swaps.

I also learned that debugging output must be removed before submission. Even if the algorithm is almost correct, extra text will still cause a wrong answer.
