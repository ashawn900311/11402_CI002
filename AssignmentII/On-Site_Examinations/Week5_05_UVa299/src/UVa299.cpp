#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int length;
        cin >> length;

        int train[50];

        for (int i = 0; i < length; i++) {
            cin >> train[i];
        }

        int swaps = 0;

        for (int i = 0; i < length - 1; i++) {
            for (int j = 0; j < length - i - 1; j++) {
                if (train[j] > train[j + 1]) {
                    int temp = train[j];
                    train[j] = train[j + 1];
                    train[j + 1] = temp;
                    swaps++;
                }
            }
        }

        cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
    }

    return 0;
}
