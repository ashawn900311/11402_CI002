#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a, b;

    while (getline(cin, a) && getline(cin, b)) {
        vector<int> countA(26, 0);
        vector<int> countB(26, 0);

        for (char ch : a) {
            countA[ch - 'a']++;
        }

        for (char ch : b) {
            countB[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            int commonCount = min(countA[i], countB[i]);

            for (int j = 0; j < commonCount; j++) {
                cout << char('a' + i);
            }
        }

        cout << endl;
    }

    return 0;
}
