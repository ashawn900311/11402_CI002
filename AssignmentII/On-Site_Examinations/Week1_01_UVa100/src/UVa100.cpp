#include <iostream>
#include <algorithm>
using namespace std;

int cycleLength(long long n) {
    int length = 1;

    while (n != 1) {
        if (n % 2 == 1) {
            n = 3 * n + 1;
        }
        else {
            n /= 2;
        }

        length++;
    }

    return length;
}

int main() {
    int i, j;

    while (cin >> i >> j) {
        int start = min(i, j);
        int end = max(i, j);
        int maxCycle = 0;

        for (int n = start; n <= end; n++) {
            maxCycle = max(maxCycle, cycleLength(n));
        }

        cout << i << " " << j << " " << maxCycle << endl;
    }

    return 0;
}
