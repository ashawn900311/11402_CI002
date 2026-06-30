#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    int caseNumber = 1;

    while (cin >> n) {
        vector<int> sequence(n);
        bool isB2 = true;

        for (int i = 0; i < n; i++) {
            cin >> sequence[i];

            if (sequence[i] < 1) {
                isB2 = false;
            }

            if (i > 0 && sequence[i] <= sequence[i - 1]) {
                isB2 = false;
            }
        }

        set<int> sums;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = sequence[i] + sequence[j];

                if (sums.count(sum)) {
                    isB2 = false;
                }

                sums.insert(sum);
            }
        }

        cout << "Case #" << caseNumber << ": ";

        if (isB2) {
            cout << "It is a B2-Sequence." << endl;
        }
        else {
            cout << "It is not a B2-Sequence." << endl;
        }

        cout << endl;
        caseNumber++;
    }

    return 0;
}
