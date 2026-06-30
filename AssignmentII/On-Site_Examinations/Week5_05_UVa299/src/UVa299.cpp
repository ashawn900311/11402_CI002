#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
int main() {
	
	vector<int>t;
	int testcase{},buffer;
	cin >> testcase;
	buffer = testcase;
	while (testcase > 0) {
		vector<long long int>arr;
		
		int nums{}, times{};
		cin >> nums;
		for (int i{}; i < nums; i++) {
			long long int a{};
			cin >> a;
			arr.push_back(a);
		}
		for (int i=0; i <nums; i++) {
			for (int j = 0; j<i; j++ ) {
				if (arr[j] > arr[j + 1])
				{
					swap(arr[j], arr[j + 1]);
					++times;
				}
			}
		}
		t.push_back(times);
		--testcase;
		cout << "test:" << endl;
		for (int i = 0; i < nums; i++) {
			cout << arr[i];
		}
		cout << endl;
		
		
	}
	for (int i = 0; i <buffer; i++) {
		cout << "A:" << t[i] << endl;
	}
}
