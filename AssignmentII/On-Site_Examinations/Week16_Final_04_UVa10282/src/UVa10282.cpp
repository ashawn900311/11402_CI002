#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main() {
    map<string, string> dictionary;
    string line;

    while (getline(cin, line) && !line.empty()) {
        string english, foreign;
        stringstream ss(line);

        ss >> english >> foreign;
        dictionary[foreign] = english;
    }

    string query;

    while (cin >> query) {
        if (dictionary.count(query)) {
            cout << dictionary[query] << endl;
        }
        else {
            cout << "eh" << endl;
        }
    }

    return 0;
}
