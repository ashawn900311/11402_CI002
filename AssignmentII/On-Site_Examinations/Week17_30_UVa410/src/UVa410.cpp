#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int chambers, specimens;
    int setNumber = 1;

    while (cin >> chambers >> specimens) {
        vector<int> masses(2 * chambers, 0);
        int totalMass = 0;

        for (int i = 0; i < specimens; i++) {
            cin >> masses[i];
            totalMass += masses[i];
        }

        sort(masses.begin(), masses.end());

        double average = static_cast<double>(totalMass) / chambers;
        double imbalance = 0.0;

        cout << "Set #" << setNumber << endl;

        for (int i = 0; i < chambers; i++) {
            int left = masses[i];
            int right = masses[2 * chambers - 1 - i];
            int chamberMass = left + right;

            cout << " " << i << ":";

            if (left != 0) {
                cout << " " << left;
            }

            if (right != 0) {
                cout << " " << right;
            }

            cout << endl;

            imbalance += abs(chamberMass - average);
        }

        cout << "IMBALANCE = " << fixed << setprecision(5) << imbalance << endl;
        cout << endl;

        setNumber++;
    }

    return 0;
}
