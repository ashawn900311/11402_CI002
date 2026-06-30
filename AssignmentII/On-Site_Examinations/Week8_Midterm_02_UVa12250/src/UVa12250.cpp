#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int caseNumber = 1;

    while (cin >> word && word != "#") {
        cout << "Case " << caseNumber << ": ";

        if (word == "HELLO") {
            cout << "ENGLISH";
        }
        else if (word == "HOLA") {
            cout << "SPANISH";
        }
        else if (word == "HALLO") {
            cout << "GERMAN";
        }
        else if (word == "BONJOUR") {
            cout << "FRENCH";
        }
        else if (word == "CIAO") {
            cout << "ITALIAN";
        }
        else if (word == "ZDRAVSTVUJTE") {
            cout << "RUSSIAN";
        }
        else {
            cout << "UNKNOWN";
        }

        cout << endl;
        caseNumber++;
    }

    return 0;
}
