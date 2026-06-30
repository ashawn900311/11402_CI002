#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long int a = 0;
	long long int b = 0;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) {
			return 0;
		}
		long long int total{};
		for (long long int i = a; i <= b; i++) {
			long long int sq=sqrt(i);
			if (sq * sq == i)
				total += 1;
		}
		
		cout << total<<endl;

	}
}
