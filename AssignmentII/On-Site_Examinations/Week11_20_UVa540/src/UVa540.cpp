#include <iostream>
#include <queue>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int t; 
    int scenario = 1;
    while (cin >> t && t != 0) {
        cout << "Scenario #" << scenario++ << endl;
        unordered_map<int, int> teammap;
        for (int i = 0; i < t; i++) {
            int numpeople;
            cin >> numpeople;
            for (int j = 0; j < numpeople; j++) {
                int person;
                cin >> person;
                teammap[person] = i; 
            }
        }
        queue<int> mainq;        
        queue<int> teamqs[1005]; 
        string cmd;
        while (cin >> cmd && cmd != "STOP") {
            if (cmd == "ENQUEUE") {
                int person;
                cin >> person;
                int teamid = teammap[person]; 
                if (teamqs[teamid].empty()) {
                    mainq.push(teamid);
                }
                teamqs[teamid].push(person);
            }
            else if (cmd == "DEQUEUE") {
                int frontteamid = mainq.front();
                cout << teamqs[frontteamid].front() << endl;
                teamqs[frontteamid].pop();
                if (teamqs[frontteamid].empty()) {
                    mainq.pop();
                }
            }
        }
        cout << endl; 
    }
    return 0;
}
