# UVa 11615 - Family Tree

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11615
- **Problem Title:** Family Tree
- **Problem Link:** https://onlinejudge.org/external/116/11615.pdf
- **Source Code (Fail):** included in this README
- **Source Code (Correct/Accepted):** [src/UVa11615.cpp](./src/UVa11615.cpp)

## 2. Problem Statement in My Own Words

The problem uses a complete family tree numbering system. Person `1` is the subject. For any person `x`, the father is numbered `2x`, and the mother is numbered `2x + 1`.

The tree contains `N` generations. Normally, a complete tree with `N` generations has `2^N - 1` people. However, two ancestors `A` and `B` are actually brothers, so they share the same parents. Because of this, some ancestors are duplicated in the tree. I need to calculate how many different people are actually in the family tree.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

My original submitted code solved a different tree problem. It tried to rebuild postorder traversal from preorder and inorder traversal. That logic does not match this problem.

### Final Strategy

The correct problem is about complete binary tree indexing.

First, I calculate the depth of `A` and `B`. If `A` and `B` are brothers, then their parents are the same people. Their grandparents are also the same, and so on.

The number of duplicated ancestor levels depends on how many generations remain above both `A` and `B`.

The total number of people in a complete family tree is:

```text
2^N - 1
```

The duplicated people are removed from this total.

## 4. Pseudocode

```text
START

Read test case count

For each test case:
    Read N, A, B

    depthA = depth of A in the binary tree
    depthB = depth of B in the binary tree

    commonLevels = min(N - depthA, N - depthB)

    totalPeople = 2^N - 1

    If commonLevels > 0:
        duplicatePeople = 2 * (2^commonLevels - 1)
    Else:
        duplicatePeople = 0

    Print totalPeople - duplicatePeople

END
```

## 5. Fail Code vs Correct Code

### Fail Code

```cpp
#include <iostream>
#include <string>

using namespace std;

void postorder(string pre, string in) {
    if (pre.empty() || in.empty()) return; 

    char root = pre[0]; 
    int rootpos = in.find(root); 

    int leftlen = rootpos;

    postorder(pre.substr(1, leftlen), in.substr(0, leftlen));

    postorder(pre.substr(1 + leftlen), in.substr(rootpos ));

    cout << root;
}

int main() {
    string pre, in;
   
    while (cin >> pre >> in) {
        postorder(pre, in);
        cout << endl;
    }

    return 0;
}
```

**Why it failed:**

- The code solved the wrong type of tree problem.
- It treated the input as preorder and inorder traversal strings.
- UVa 11615 does not ask for tree traversal.
- The actual problem asks for counting different people in a complete family tree.
- The input should be `N A B`, not two traversal strings.

### Correct Code

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int getDepth(int x) {
    int depth = 0;

    while (x > 0) {
        depth++;
        x /= 2;
    }

    return depth;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n, a, b;
        cin >> n >> a >> b;

        int depthA = getDepth(a);
        int depthB = getDepth(b);

        int commonLevels = min(n - depthA, n - depthB);

        int totalPeople = (1 << n) - 1;
        int duplicatePeople = 0;

        if (commonLevels > 0) {
            duplicatePeople = 2 * ((1 << commonLevels) - 1);
        }

        cout << totalPeople - duplicatePeople << endl;
    }

    return 0;
}
```

**Why it works:**

- It correctly uses the complete binary tree numbering rule.
- It calculates the generation depth of `A` and `B`.
- It finds how many ancestor levels are duplicated.
- It subtracts duplicated people from the complete tree total.
- It prints one answer for each test case.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | Solved preorder/inorder to postorder traversal | Solves complete family tree counting |
| Input Handling | Read two strings | Reads `N`, `A`, and `B` |
| Problem Understanding | Misunderstood the problem type | Uses binary tree indexing |
| Output Handling | Printed traversal result | Prints number of different people |

### Reflection

The main mistake was misunderstanding the problem. I focused on a tree traversal idea, but UVa 11615 is actually about complete binary tree indexing and duplicated ancestors.

From this problem, I learned that before writing code, I should first confirm the input format and what the output is asking for. Even if the topic is related to trees, different tree problems can require completely different logic.
