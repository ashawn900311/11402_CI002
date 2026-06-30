#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<int> count(26, 0);

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        for (char ch : line) {
            if (isalpha(static_cast<unsigned char>(ch))) {
                char upper = toupper(static_cast<unsigned char>(ch));
                count[upper - 'A']++;
            }
        }
    }

    vector<pair<char, int>> letters;

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            letters.push_back({'A' + i, count[i]});
        }
    }

    sort(letters.begin(), letters.end(), [](const auto& a, const auto& b) {
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first < b.first;
    });

    for (const auto& letter : letters) {
        cout << letter.first << " " << letter.second << endl;
    }

    return 0;
}
