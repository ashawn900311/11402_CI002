#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void dectobi(long long int num, vector<long long int>& bi) {
    while (num >= 1) {
        long long int remaining = num % 2;
        bi.push_back(remaining);
        num = num / 2;
    }

    reverse(bi.begin(), bi.end());
}

int main() {
    long long int num{};

    while (cin >> num && num != 0) {
        vector<long long int> bi;
        dectobi(num, bi);

        cout << "The parity of ";

        for (int i = 0; i < bi.size(); i++) {
            cout << bi[i];
        }

        long long int c = count(bi.begin(), bi.end(), 1);
        cout << " is " << c << " (mod 2)." << endl;
    }

    return 0;
}
