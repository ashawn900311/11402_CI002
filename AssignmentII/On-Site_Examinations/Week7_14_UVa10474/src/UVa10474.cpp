#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    int caseNumber = 1;

    while (cin >> n >> q) {
        if (n == 0 && q == 0) {
            break;
        }

        vector<int> marbles(n);

        for (int i = 0; i < n; i++) {
            cin >> marbles[i];
        }

        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << caseNumber << ":" << endl;

        for (int i = 0; i < q; i++) {
            int query;
            cin >> query;

            auto it = lower_bound(marbles.begin(), marbles.end(), query);

            if (it != marbles.end() && *it == query) {
                cout << query << " found at " << (it - marbles.begin() + 1) << endl;
            }
            else {
                cout << query << " not found" << endl;
            }
        }

        caseNumber++;
    }

    return 0;
}
