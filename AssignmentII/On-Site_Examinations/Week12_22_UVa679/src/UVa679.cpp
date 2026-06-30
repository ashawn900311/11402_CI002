#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int depth, ball;
        cin >> depth >> ball;

        int position = 1;

        for (int level = 1; level < depth; level++) {
            if (ball % 2 == 1) {
                position = position * 2;
                ball = (ball + 1) / 2;
            }
            else {
                position = position * 2 + 1;
                ball = ball / 2;
            }
        }

        cout << position << endl;
    }

    return 0;
}
