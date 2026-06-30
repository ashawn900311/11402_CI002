#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int caseNumber = 1; caseNumber <= testCases; caseNumber++) {
        char nChar, equalSign;
        int n;

        cin >> nChar >> equalSign >> n;

        vector<long long> values(n * n);

        for (int i = 0; i < n * n; i++) {
            cin >> values[i];
        }

        bool symmetric = true;

        for (int i = 0; i < n * n; i++) {
            if (values[i] < 0 || values[i] != values[n * n - 1 - i]) {
                symmetric = false;
                break;
            }
        }

        cout << "Test #" << caseNumber << ": ";

        if (symmetric) {
            cout << "Symmetric." << endl;
        }
        else {
            cout << "Non-symmetric." << endl;
        }
    }

    return 0;
}
