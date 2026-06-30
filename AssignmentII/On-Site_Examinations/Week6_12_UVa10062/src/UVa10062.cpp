#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string line;
    bool firstCase = true;

    while (getline(cin, line)) {
        if (!firstCase) {
            cout << endl;
        }
        firstCase = false;

        vector<int> freq(128, 0);

        for (char ch : line) {
            freq[static_cast<unsigned char>(ch)]++;
        }

        vector<pair<int, int>> result;

        for (int ascii = 0; ascii < 128; ascii++) {
            if (freq[ascii] > 0) {
                result.push_back({ascii, freq[ascii]});
            }
        }

        sort(result.begin(), result.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second != b.second) {
                return a.second < b.second;
            }
            return a.first > b.first;
        });

        for (const auto& item : result) {
            cout << item.first << " " << item.second << endl;
        }
    }

    return 0;
}
