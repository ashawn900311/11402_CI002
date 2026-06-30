# UVa 299 - Train Swapping

## 1. Problem Information

- Platform: UVa Online Judge
- Problem ID: 299
- Problem Title: Train Swapping
- Source Code: src/UVa299.cpp

## 2. Problem Statement in My Own Words

The problem gives several train sequences. Each train has a fixed number of cars, and the cars are given in an unordered sequence. I need to calculate how many adjacent swaps are needed to sort the train cars into increasing order.

The answer should be printed in the required format:

```text
Optimal train swapping takes X swaps.
```

## 3. Thinking Logic and Solution Strategy

At first, I thought I only needed to compare nearby elements and count how many times they were swapped. Later, I realized this problem is exactly like bubble sort. Bubble sort repeatedly compares two adjacent elements. If the left one is larger than the right one, they should be swapped.

Every adjacent swap in bubble sort represents one train swap, so the total number of swaps is the answer.

The important points are:

- Use bubble sort to sort the train.
- Count every adjacent swap.
- Print the answer immediately with the exact output format.
- Do not print extra debugging text.

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

    Print "Optimal train swapping takes swaps swaps."

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
	
	vector<int>t;
	int testcase{},buffer;
	cin >> testcase;
	buffer = testcase;
	while (testcase > 0) {
		vector<long long int>arr;
		
		int nums{}, times{};
		cin >> nums;
		for (int i{}; i < nums; i++) {
			long long int a{};
			cin >> a;
			arr.push_back(a);
		}
		for (int i=0; i <nums; i++) {
			for (int j = 0; j<i; j++ ) {
				if (arr[j] > arr[j + 1])
				{
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
	for (int i = 0; i <buffer; i++) {
		cout << "A:" << t[i] << endl;
	}
}
```

Why it failed:

- The bubble sort loop condition was wrong.  
  The inner loop used `j < i`, so the array was not fully sorted in some cases.
- The program printed debugging text like `test:` and the array contents.
- The final output used `A:` instead of the required UVa format.
- UVa requires the exact sentence:
  `Optimal train swapping takes X swaps.`

### Correct Code

See `src/UVa299.cpp`.

Why it works:

- The corrected version uses a complete bubble sort.
- It counts every adjacent swap.
- It prints the answer in the exact format required by UVa.
- It does not print any extra debugging output.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Sorting Logic | Inner loop used `j < i`, so sorting was incomplete | Uses standard bubble sort |
| Swap Counting | Did not always count the correct number of swaps | Counts every adjacent swap correctly |
| Output Format | Printed `test:` and `A:` | Prints the exact UVa output sentence |
| Debug Output | Printed the array for checking | Removes all unnecessary output |

### Reflection

In this problem, I learned that getting the correct algorithm is not enough. The output format is also very important for online judge problems. My first code had debugging output, so even if the logic was close, UVa would still judge it as wrong.

I also learned that bubble sort must compare the correct range in every pass. If the loop condition is wrong, the array may not be fully sorted, and the swap count will also be wrong.
