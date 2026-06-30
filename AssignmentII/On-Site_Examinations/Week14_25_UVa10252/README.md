# UVa 10252 - Common Permutation

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10252
- **Problem Title:** Common Permutation
- **Problem Link:** https://onlinejudge.org/external/102/10252.pdf
- **Source Code (Fail):** included in this README
- **Source Code (Correct/Accepted):** [src/UVa10252.cpp](./src/UVa10252.cpp)

## 2. Problem Statement in My Own Words

The problem gives two lowercase strings. I need to find the letters that appear in both strings.

If a letter appears multiple times in both strings, it should appear in the answer as many times as the minimum count from the two strings. The output should be printed in alphabetical order.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

My first idea was to compare every character in the first string with every character in the second string. If I found the same character, I added it to the answer.

### Final Strategy

The corrected solution counts how many times each letter appears in both strings.

For each letter from `a` to `z`, I take the smaller count from the two strings and print that letter that many times. This naturally produces the output in alphabetical order.

## 4. Pseudocode

```text
START

While two lines can be read:
    Create count arrays for both strings

    For each character in first string:
        Increase countA

    For each character in second string:
        Increase countB

    For each letter from a to z:
        commonCount = min(countA[letter], countB[letter])
        Print this letter commonCount times

END
```

## 5. Fail Code vs Correct Code

### Fail Code

```cpp
#include<iostream>
#include <vector>
#include<cmath>
#include<algorithm>
#include<string>
#include<set>
using namespace std;

int main() {
    string s, ss;

    while (getline(cin, s), getline(cin, ss)) {
        vector<char> buf;
        bool flag = 0;

        for (int i = 0; i < s.size(); i++) {
            flag = 0;

            for (int j = 0; j < ss.size(); j++) {
                if (s[i] == ss[j] && flag == 0) {
                    buf.push_back(s[i]);
                    flag = -1;
                }
            }
        }

        sort(buf.begin(), buf.end());

        for (int i = 0; i < buf.size(); i++) {
            cout << buf[i];
        }

        cout << endl;
    }
}
```

**Why it failed:**

- It did not count the frequency of each letter correctly.
- It did not prevent the same character in the second string from being matched multiple times.
- For example, if the first string has several `a`s and the second string has only one `a`, the code may still add too many `a`s.
- The input loop used the comma operator:
  `while (getline(cin, s), getline(cin, ss))`
  This only checks the result of the second `getline`, which is not ideal.

### Correct Code

```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a, b;

    while (getline(cin, a) && getline(cin, b)) {
        vector<int> countA(26, 0);
        vector<int> countB(26, 0);

        for (char ch : a) {
            countA[ch - 'a']++;
        }

        for (char ch : b) {
            countB[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            int commonCount = min(countA[i], countB[i]);

            for (int j = 0; j < commonCount; j++) {
                cout << char('a' + i);
            }
        }

        cout << endl;
    }

    return 0;
}
```

**Why it works:**

- It counts the frequency of every lowercase letter in both strings.
- It uses the smaller frequency as the common count.
- It prints letters from `a` to `z`, so the output is sorted automatically.
- It reads two lines correctly using `getline(cin, a) && getline(cin, b)`.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | Compared characters directly | Counts letter frequency |
| Duplicate Handling | Could reuse the same match many times | Uses minimum frequency |
| Output Handling | Sorted matched characters afterward | Prints alphabetically by design |
| Other | Used comma operator in input loop | Uses clear `&&` input condition |

### Reflection

In this problem, I learned that when characters can appear multiple times, simple matching is not enough. I need to count how many times each character appears in both strings.

Using frequency arrays made the solution shorter, clearer, and more correct.
