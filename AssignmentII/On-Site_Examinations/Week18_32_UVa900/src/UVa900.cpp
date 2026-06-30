#include <iostream>
using namespace std;

int main() {
    long long ways[51];

    ways[1] = 1;
    ways[2] = 2;

    for (int i = 3; i <= 50; i++) {
        ways[i] = ways[i - 1] + ways[i - 2];
    }

    int n;

    while (cin >> n && n != 0) {
        cout << ways[n] << endl;
    }

    return 0;
}
