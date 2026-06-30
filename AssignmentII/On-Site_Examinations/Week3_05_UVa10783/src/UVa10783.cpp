#include <iostream>
using namespace std;

int main() {
    int testCase;
    int caseTime = 1;

    cin >> testCase;

    while (testCase > 0) {
        int a, b;
        int sum = 0;

        cin >> a >> b;

        if (a % 2 == 0) {
            a++;
        }

        while (a <= b) {
            sum += a;
            a += 2;
        }

        cout << "Case " << caseTime << ": " << sum << endl;

        testCase--;
        caseTime++;
    }

    return 0;
}
