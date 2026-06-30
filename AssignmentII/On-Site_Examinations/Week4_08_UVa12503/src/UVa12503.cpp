#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        vector<int> instructions(n + 1);
        int position = 0;

        for (int i = 1; i <= n; i++) {
            string command;
            cin >> command;

            if (command == "LEFT") {
                instructions[i] = -1;
            }
            else if (command == "RIGHT") {
                instructions[i] = 1;
            }
            else {
                string as, instruction;
                int index;
                cin >> as >> instruction >> index;
                instructions[i] = instructions[index];
            }

            position += instructions[i];
        }

        cout << position << endl;
    }

    return 0;
}
