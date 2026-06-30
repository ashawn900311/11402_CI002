# UVa 11559 - Event Planning

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11559
- **Problem Title:** Event Planning
- **Problem Link:** https://onlinejudge.org/external/115/11559.pdf
- **Source Code (Fail):** included in this README
- **Source Code (Correct/Accepted):** [src/UVa11559.cpp](./src/UVa11559.cpp)

## 2. Problem Statement in My Own Words

The problem gives the number of people, the total budget, the number of hotels, and the number of weeks.

For each hotel, I know the cost per person and the number of available beds for each week. I need to find the cheapest hotel plan that can fit all people and does not exceed the budget.

If no hotel can satisfy both conditions, I should print:

```text
stay home
```

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

My first idea was to check each hotel and store the total cost if the hotel had enough beds and was within the budget.

### Final Strategy

The corrected strategy is to keep a variable `best` for the minimum valid cost.

For each hotel:

- Read the cost per person.
- Check all weeks to see whether at least one week has enough beds.
- Calculate the total cost.
- If the hotel is available and within budget, update `best`.

After checking all hotels, if `best` was updated, print it. Otherwise, print `stay home`.

## 4. Pseudocode

```text
START

While input people, budget, hotel count, week count exists:
    best = budget + 1

    For each hotel:
        Read cost per person
        hasEnoughBeds = false

        For each week:
            Read available beds
            If available beds >= people:
                hasEnoughBeds = true

        totalCost = people * cost per person

        If hasEnoughBeds and totalCost <= budget:
            best = minimum of best and totalCost

    If best <= budget:
        Print best
    Else:
        Print "stay home"

END
```

## 5. Fail Code vs Correct Code

### Fail Code

```cpp
#include<iostream> 
#include<algorithm>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int people{};
    int budget{};
    int hotelnum;
    int weeknum;

    while (cin >> people >> budget >> hotelnum >> weeknum) {
        vector<int> cost{};

        for (int i = 0; i < hotelnum; i++) {
            int costperpeople{};
            bool flag = 0;
            vector<int> week(weeknum);

            cin >> costperpeople;
            int spend = people * costperpeople;

            for (int j = 0; j < weeknum; j++) {
                cin >> week[j];

                if (people <= week[j]) {
                    flag = 1;
                }
            }

            if (spend > budget) {
                flag = 0;
            }

            if (flag == 1) {
                cost.push_back(spend);
            }
        }

        if (cost.size() >= 1) {
            int minm = min(cost[0], cost[cost.size() - 1]);
            cout << minm << endl;
        }
        else {
            cout << "stay home" << endl;
        }
    }
}
```

**Why it failed:**

- The program only compared the first and last valid costs:
  `min(cost[0], cost[cost.size() - 1])`
- It did not find the minimum cost among all valid hotels.
- If the cheapest valid hotel was in the middle of the vector, the answer would be wrong.
- The code stored all valid costs, but did not use `min_element` or update a minimum value correctly.

### Correct Code

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int people, budget, hotelnum, weeknum;

    while (cin >> people >> budget >> hotelnum >> weeknum) {
        int best = budget + 1;

        for (int i = 0; i < hotelnum; i++) {
            int costPerPerson;
            cin >> costPerPerson;

            bool hasEnoughBeds = false;

            for (int j = 0; j < weeknum; j++) {
                int beds;
                cin >> beds;

                if (beds >= people) {
                    hasEnoughBeds = true;
                }
            }

            int totalCost = people * costPerPerson;

            if (hasEnoughBeds && totalCost <= budget) {
                best = min(best, totalCost);
            }
        }

        if (best <= budget) {
            cout << best << endl;
        }
        else {
            cout << "stay home" << endl;
        }
    }

    return 0;
}
```

**Why it works:**

- It checks every hotel.
- It checks whether at least one week has enough beds.
- It checks whether the total cost is within the budget.
- It updates the cheapest valid cost using `best = min(best, totalCost)`.
- It prints `stay home` if no valid hotel exists.

## 6. Difference and Reflection

### Key Differences

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | Stored valid costs but only compared first and last | Updates the minimum valid cost every time |
| Edge Cases | Failed if cheapest hotel was in the middle | Handles all valid hotels |
| Output Handling | Output format was mostly correct | Keeps required output and fixes logic |
| Other | Used extra vector storage | Uses one `best` variable |

### Reflection

In this problem, I learned that storing possible answers is not enough. I still need to correctly choose the best answer from all valid candidates.

My mistake was assuming that comparing the first and last values was enough, but the cheapest price could appear anywhere. Next time, I should either use `min_element` or update the minimum answer while reading the input.
