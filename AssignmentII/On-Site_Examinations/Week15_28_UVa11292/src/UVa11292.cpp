#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int d, k;
	while (cin >> d >> k && d != 0 && k != 0) {
		vector<int>dra;
		vector<int>knight;
		int cost = 0;
		int buf;
		bool flag = 1;
		for (int i = 0; i < d; i++) {
			cin >> buf;
			dra.push_back(buf);
		}
		for (int i = 0; i < k; i++) {
			cin >> buf;
			knight.push_back(buf);
		}
		if (d > k) {
			cout << "Loowater is doomed!" << endl;
			continue;
		}
		sort(dra.begin(), dra.end());
		sort(knight.begin(), knight.end());
		for (int i = 0; i < d; i++) {
			if (flag==-1) {
				break;
			}
			for (int j = 0; j < k; j++) {
				if (dra[i] <= knight[j]) {
					cost += knight[j];
					knight[j] = -1;
					dra[i] = 0;
					flag = 1;
					break;
				}
				else {
					flag = -1;
					
				}
			}
		}
		for (int i = 0; i < d; i++) {
			if (dra[i] != 0) {
				cout << "Loowater is doomed!" << endl;
				break;
			}
			else if (i == d - 1 && dra[i] == 0) {
				cout << cost << endl;
			}
		}
		
		

	}
}
