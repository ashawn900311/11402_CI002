#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
void median(vector<long long int>arr, long long int& a) {
	if (arr.size() % 2 == 1) {
		a = arr[arr.size() / 2];
	}
	else {
		a = (arr[arr.size() / 2 - 1] + arr[arr.size() / 2]) / 2;
	}

}
int main() {
	long long int num{};
	vector<long long int>arr;
	while (cin >> num) {
		long long int a{};
		arr.push_back(num);
		sort(arr.begin(), arr.end());
		median(arr, a);
		cout << a << endl;
	}

}
