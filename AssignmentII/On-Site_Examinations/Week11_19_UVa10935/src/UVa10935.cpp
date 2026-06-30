#include<iostream>
#include<queue>
using namespace std;
int main() {
	int n;
	while (cin >> n && n != 0) {
		queue<int> card;
		for (int i = 1; i <=n; i++) {
			card.push(i);
		}
		cout << "Discarded cards:";
		bool isfirst = 1;
		while (card.size()!=1) {
			if (isfirst) {
				cout << " ";
			}
			else {
				cout << ", ";
			}
			cout << card.front();
			card.pop();
			card.push(card.front());
			card.pop();
			isfirst = 0;
		}
		cout << endl;
		cout << "Remaining card: " << card.front()<<endl;
	}
}
