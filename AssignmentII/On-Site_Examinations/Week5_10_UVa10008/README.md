# UVa 10008 - What's Cryptanalysis?

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10008
- **Problem Title:** What's Cryptanalysis?
- **Problem Link:** https://onlinejudge.org/external/100/10008.pdf
- **Source Code (Fail):** No original code was submitted
- **Source Code (Correct/Accepted):** [src/UVa10008.cpp](./src/UVa10008.cpp)

## 2. Problem Statement in My Own Words

The problem gives several lines of text. I need to count how many times each English letter appears in all lines.

Uppercase and lowercase letters should be treated as the same letter. Non-letter characters, such as spaces and punctuation, should be ignored.

After counting, I need to print each appeared letter and its frequency. The output should be sorted by frequency from high to low. If two letters have the same frequency, they should be printed in alphabetical order.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

I did not submit this problem during the original assignment time. When I solved it later, I first noticed that the input contains full lines, not only single words. Therefore, I need to use `getline` to read each line correctly.

### Final Strategy

I use an array or vector of size 26 to count letters from `A` to `Z`.

For every character in the input lines:

- Check whether it is an English letter.
- Convert it to uppercase.
- Increase the count of that letter.

After counting, I store the appeared letters into a vector and sort them using two rules:

- Higher frequency comes first.
- If the frequency is the same, alphabetical order comes first.

## 4. Pseudocode

```text
START

Read number of lines
Ignore the newline after the number

Create count array for 26 letters

For each line:
    Read the whole line
    For each character:
        If the character is a letter:
            Convert it to uppercase
            Increase the corresponding count

Create a list of appeared letters

Sort the list:
    Higher count first
    If counts are equal, smaller letter first

Print each letter and its count

END
```

## 5. Fail Code vs Correct Code

### Fail Code

No original code was submitted for this problem.

**Why it failed:**

- I did not finish or submit this problem during the original assignment time.

### Correct Code

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<int> count(26, 0);

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        for (char ch : line) {
            if (isalpha(static_cast<unsigned char>(ch))) {
                char upper = toupper(static_cast<unsigned char>(ch));
                count[upper - 'A']++;
            }
        }
    }

    vector<pair<char, int>> letters;

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            letters.push_back({'A' + i, count[i]});
        }
    }

    sort(letters.begin(), letters.end(), [](const auto& a, const auto& b) {
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first < b.first;
    });

    for (const auto& letter : letters) {
        cout << letter.first << " " << letter.second << endl;
    }

    return 0;
}
```

**Why it works:**

- It reads full lines using `getline`.
- It counts only English letters.
- It treats uppercase and lowercase letters as the same.
- It ignores spaces, punctuation, and other non-letter characters.
- It sorts by frequency from high to low.
- If frequencies are the same, it sorts alphabetically.

## 6. Difference and Reflection

### Key Differences

| Item | Original Submission | Correct Code |
|---|---|---|
| Logic | Not submitted | Counts letter frequency |
| Edge Cases | Not handled | Handles lowercase letters and non-letter characters |
| Output Handling | Not submitted | Prints letters in the required order |
| Other | No original code | Completed later for the archive |

### Reflection

I did not submit this problem during the original assignment time, so I completed it later for this archive. From this problem, I learned how to process a whole line of text and count character frequency.

I also learned that sorting is not always based on one rule. In this problem, the main rule is frequency, but when two letters have the same frequency, alphabetical order must be used.
