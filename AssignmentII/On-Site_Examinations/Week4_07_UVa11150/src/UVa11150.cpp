#include <iostream>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        int total = n;
        int emptyBottles = n;

        while (emptyBottles >= 3) {
            int newCola = emptyBottles / 3;
            total += newCola;
            emptyBottles = newCola + emptyBottles % 3;
        }

        if (emptyBottles == 2) {
            total++;
        }

        cout << total << endl;
    }

    return 0;
}
