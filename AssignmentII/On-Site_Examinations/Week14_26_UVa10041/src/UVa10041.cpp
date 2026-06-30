#include<iostream>
#include <vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
	int cases;
	while (cin >> cases) {
		while (cases--) {
			int num, total{};
			vector<int> relativse;
			cin >> num;
			for (int i = 0; i < num; i++) {
				int re;
				cin >> re;
				relativse.push_back(re);
			}
			sort(relativse.begin(), relativse.end());
			int medium = relativse[num / 2];
			for (int i = 0; i < num; i++) {
				total += abs(medium - relativse[i]);
			}
			cout << total << endl;
		}
	}
}
