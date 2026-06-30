#include <iostream>
using namespace std;

int main() {
    long long int s, d;

    while (cin >> s >> d) {
        long long int total = 0;

        while (total < d) {
            total += s;

            if (total >= d) {
                break;
            }

            s++;
        }

        cout << s << endl;
    }

    return 0;
}
