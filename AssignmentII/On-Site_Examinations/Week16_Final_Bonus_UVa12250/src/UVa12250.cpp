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
	string s;
	int testcase = 1;
	map<string, string>c;
	c["HELLO"] = "ENGLISH";
	c["HALLO"] = "GERMAN";
	c["BONJOUR"] = "FRENCH";
	c["CIAO"] = "ITALIAN";
	c["ZDRAVSTVUJTE"] = "RUSSIAN";
	c["HOLA"] = "SPANISH";
	while (cin >> s && s != "#") {
		cout << "Case " << testcase << ": ";
		if (c[s].empty()) {
			cout << "UNKNOWN"<<endl;
		}
		else {
			cout << c[s]<<endl;
		}
		testcase++;
	}

}
