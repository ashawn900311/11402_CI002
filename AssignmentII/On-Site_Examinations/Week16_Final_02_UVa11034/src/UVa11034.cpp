#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int ferryLength, carCount;
        cin >> ferryLength >> carCount;

        ferryLength *= 100;

        queue<int> leftBank;
        queue<int> rightBank;

        for (int i = 0; i < carCount; i++) {
            int carLength;
            string side;

            cin >> carLength >> side;

            if (side == "left") {
                leftBank.push(carLength);
            }
            else {
                rightBank.push(carLength);
            }
        }

        bool onLeft = true;
        int trips = 0;

        while (!leftBank.empty() || !rightBank.empty()) {
            int currentLoad = 0;

            if (onLeft) {
                while (!leftBank.empty() &&
                       currentLoad + leftBank.front() <= ferryLength) {
                    currentLoad += leftBank.front();
                    leftBank.pop();
                }
            }
            else {
                while (!rightBank.empty() &&
                       currentLoad + rightBank.front() <= ferryLength) {
                    currentLoad += rightBank.front();
                    rightBank.pop();
                }
            }

            trips++;
            onLeft = !onLeft;
        }

        cout << trips << endl;
    }

    return 0;
}
