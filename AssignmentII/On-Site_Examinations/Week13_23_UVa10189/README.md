# UVa 10189 - Minesweeper

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10189
- **Problem Title:** Minesweeper
- **Problem Link:** https://onlinejudge.org/external/101/10189.pdf
- **Source Code (Fail):** included in this README
- **Source Code (Correct/Accepted):** [src/UVa10189.cpp](./src/UVa10189.cpp)

## 2. Problem Statement in My Own Words

The problem gives a minesweeper board. Each cell is either a mine `*` or an empty cell `.`.

For every empty cell, I need to count how many mines are around it in the eight neighboring directions. Mines should remain as `*`.

The input ends when both row and column are `0`.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

My first idea was to find every mine and increase the count of its neighboring cells. However, my code became complicated because I tried to handle corners and edges separately.

### Final Strategy

The corrected solution checks every cell directly.

If the cell is a mine, print `*`. Otherwise, check all eight directions using direction arrays. For each valid neighbor that contains a mine, increase the count.

This avoids writing many separate conditions for corners and edges.

## 4. Pseudocode

```text
START

fieldNumber = 1

While rows and columns are not both 0:
    Read board

    If this is not the first field:
        Print blank line

    Print "Field #fieldNumber:"

    For each cell:
        If cell is '*':
            Print '*'
        Else:
            count = 0
            For each of 8 directions:
                Check neighboring position
                If position is inside board and has mine:
                    count++
            Print count

    fieldNumber++

END
```

## 5. Fail Code vs Correct Code

### Fail Code

```cpp
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main() {
    int r, c;

    while (cin >> r >> c && r != 0 && c != 0) {
        cin.ignore();

        vector<vector<char>> matrix(r, vector<char>(c));

        for (int i = 0; i < r; i++) {
            string line;
            getline(cin, line);

            for (int j = 0; j < c; j++) {
                matrix[i][j] = line[j];
            }
        }

        vector<vector<int>> ans(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] == '*') {
                    ans[i][j] = 9;

                    if (i != 0)
                        ans[i - 1][j]++;
                    if (i != r - 1)
                        ans[i + 1][j]++;
                    if (j != 0)
                        ans[i][j - 1]++;
                    if (j != c - 1)
                        ans[i][j + 1]++;
                    if (i != 0 && j != 0)
                        ans[i - 1][j - 1]++;

                    if(i!=0&&)

                    if (i == 0 && j == 0)
                        ans[i + 1][j + 1]++;
                    if (i == 0 && j == c - 1)
                        ans[i + 1][j - 1]++;
                    if (i == r - 1 && j == 0)
                        ans[i - 1][j + 1]++;
                    if (i == r - 1 && j == c - 1)
                        ans[i - 1][j - 1]++;
                }
            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << matrix[i][j];

                if (j == c - 1)
                    cout << endl;
            }
        }
    }
}
```

**Why it failed:**

- The line `if(i!=0&&)` is incomplete, so the program cannot compile.
- The code tried to handle directions with many separate conditions, which made it easy to miss cases.
- The output printed `matrix[i][j]`, which is the original board, not the calculated answer.
- It did not print the required `Field #x:` header.
- It did not handle blank lines between different fields.

### Correct Code

```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int rows, cols;
    int fieldNumber = 1;

    while (cin >> rows >> cols && !(rows == 0 && cols == 0)) {
        vector<string> field(rows);

        for (int i = 0; i < rows; i++) {
            cin >> field[i];
        }

        if (fieldNumber > 1) {
            cout << endl;
        }

        cout << "Field #" << fieldNumber << ":" << endl;

        int dr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dc[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (field[r][c] == '*') {
                    cout << '*';
                }
                else {
                    int count = 0;

                    for (int k = 0; k < 8; k++) {
                        int nr = r + dr[k];
                        int nc = c + dc[k];

                        if (nr >= 0 && nr < rows && nc >= 0 && nc < cols &&
                            field[nr][nc] == '*') {
                            count++;
                        }
                    }

                    cout << count;
                }
            }

            cout << endl;
        }

        fieldNumber++;
    }

    return 0;
}
```

**Why it works:**

- It reads the board correctly.
- It checks all eight neighboring directions using arrays.
- It avoids complicated corner-case conditions.
- It prints mines as `*` and empty cells as the number of adjacent mines.
- It follows the required UVa output format.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | Tried to update neighbors around each mine | Counts mines around each cell |
| Edge Cases | Handled corners manually and incompletely | Uses boundary checks for all directions |
| Output Handling | Printed the original board | Prints `Field #x:` and calculated result |
| Other | Had incomplete syntax | Compiles and follows UVa format |

### Reflection

In this problem, I learned that manually writing separate conditions for every corner and edge can easily cause mistakes. Using direction arrays makes the code shorter, clearer, and less error-prone.

I also learned that after calculating an answer, I must make sure I print the result array or computed value, not the original input.
