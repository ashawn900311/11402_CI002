#include<iostream>
#include<stack>
#include<cctype>
#include<string>
using namespace std;
int main() {
	int n;
	int buf;
	while (cin >> n) {
		cin.ignore();

		for (int i = 0; i < n; i++) {
			stack<char> stk{};
			string s{};
			getline(cin, s);
			bool flag = 1;
			for (char c : s) {
				if (c == '(' || c=='[') {
					stk.push(c);
				}
				else if (c == ')') {
					if (stk.empty()) {
						flag = 0;
						break;
					}
					if (stk.top() == '(')
						stk.pop();
					else {
						flag = 0;
						break;
					}
				}
				else if (c == ']') {
					if (stk.empty()) {
						flag = 0;
						break;
					}
					if (stk.top() == '[')
						stk.pop();
					else {
						flag = 0;
						break;
					}
				}
			}
			if (flag&&stk.empty())
				cout << "Yes"<<endl;
			else
				cout << "No"<<endl;
		}
	}

}
