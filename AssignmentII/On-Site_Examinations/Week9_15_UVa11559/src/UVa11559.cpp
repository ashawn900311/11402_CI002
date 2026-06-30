#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int people, budget, hotelnum, weeknum;

    while (cin >> people >> budget >> hotelnum >> weeknum) {
        int best = budget + 1;

        for (int i = 0; i < hotelnum; i++) {
            int costPerPerson;
            cin >> costPerPerson;

            bool hasEnoughBeds = false;

            for (int j = 0; j < weeknum; j++) {
                int beds;
                cin >> beds;

                if (beds >= people) {
                    hasEnoughBeds = true;
                }
            }

            int totalCost = people * costPerPerson;

            if (hasEnoughBeds && totalCost <= budget) {
                best = min(best, totalCost);
            }
        }

        if (best <= budget) {
            cout << best << endl;
        }
        else {
            cout << "stay home" << endl;
        }
    }

    return 0;
}
