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
