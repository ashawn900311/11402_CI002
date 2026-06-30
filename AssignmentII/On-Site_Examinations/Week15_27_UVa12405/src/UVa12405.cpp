#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int caseNumber = 1; caseNumber <= testCases; caseNumber++) {
        int n;
        string field;

        cin >> n >> field;

        int scarecrows = 0;
        int i = 0;

        while (i < n) {
            if (field[i] == '.') {
                scarecrows++;
                i += 3;
            }
            else {
                i++;
            }
        }

        cout << "Case " << caseNumber << ": " << scarecrows << endl;
    }

    return 0;
}
