#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<string> lines;
    string line;
    int maxLength = 0;

    while (getline(cin, line)) {
        lines.push_back(line);
        maxLength = max(maxLength, static_cast<int>(line.size()));
    }

    for (int col = 0; col < maxLength; col++) {
        for (int row = lines.size() - 1; row >= 0; row--) {
            if (col < lines[row].size()) {
                cout << lines[row][col];
            }
            else {
                cout << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}
