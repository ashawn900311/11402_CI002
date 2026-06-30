#include <iostream>
using namespace std;

int main() {
    char ch;
    bool openQuote = true;

    while (cin.get(ch)) {
        if (ch == '"') {
            if (openQuote) {
                cout << "``";
            }
            else {
                cout << "''";
            }

            openQuote = !openQuote;
        }
        else {
            cout << ch;
        }
    }

    return 0;
}
