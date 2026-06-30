#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n, d, r;
	while (cin >> n >> d >> r) {
		if (n == 0 && d == 0 && r == 0)
			break;
		vector<int>morning(n);
		vector<int>night(n);
		for (int i = 0; i < n; i++) {
			cin >> morning[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> night[i];
		}
		sort(morning.begin(), morning.end());
		sort(night.begin(), night.end(), greater<int>());
		int ans{ };
		for (int i = 0; i < n; i++) {
			int total = morning[i] + night[i] - d;
			if (total < 0) {
				continue;
			}
			else {
				ans += (morning[i] + night[i] - d) * r;
			}
		}
		cout << ans << endl;
	}

}
