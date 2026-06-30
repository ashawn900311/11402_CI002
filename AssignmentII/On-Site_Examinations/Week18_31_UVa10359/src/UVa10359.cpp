#include <iostream>
#include <vector>
#include <string>
using namespace std;

string addStrings(const string& a, const string& b) {
    string result;
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;

        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }

        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }

        result = char('0' + sum % 10) + result;
        carry = sum / 10;
    }

    return result;
}

int main() {
    vector<string> dp(251);

    dp[0] = "1";
    dp[1] = "1";

    for (int i = 2; i <= 250; i++) {
        dp[i] = addStrings(dp[i - 1], addStrings(dp[i - 2], dp[i - 2]));
    }

    int n;

    while (cin >> n) {
        cout << dp[n] << endl;
    }

    return 0;
}
