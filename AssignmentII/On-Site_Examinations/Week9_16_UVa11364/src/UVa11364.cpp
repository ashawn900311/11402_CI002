#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        vector<int> stores(n);

        for (int i = 0; i < n; i++) {
            cin >> stores[i];
        }

        int minPosition = *min_element(stores.begin(), stores.end());
        int maxPosition = *max_element(stores.begin(), stores.end());

        cout << (maxPosition - minPosition) * 2 << endl;
    }

    return 0;
}
