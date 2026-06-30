#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<string>
#include<cctype>
#include<map>
#include<functional>
#include<queue>
#include<set>
#include<stack>
using namespace std;
int main(){
	int n, q;
	cin >> n;
	vector<int>a;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	cin >> q;
	vector<int>b;
	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		b.push_back(x);
	}
	sort(a.begin(), a.end());
	
	
	for (int i = 0; i < q; i++) {
		int buf = -1;
		for (int j = 0; j < n; j++) {
			if (b[i] > a[j]) {
				buf = a[j];
			}
			else {
				break;
			}
		}
		if (buf == -1) {
			cout << "X ";
		}
		else {
			cout << buf << " ";
		}
		auto it2 = upper_bound(a.begin(), a.end(), b[i]);
		if (it2!= a.end()) {
			cout << *it2<<endl;
		}
		else {
			cout << "X"<<endl;
		}
	}
}
