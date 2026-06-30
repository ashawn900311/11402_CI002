#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int n;
    while (cin>>n&&n!=0){
        int firsttrain;
        while (cin>>firsttrain&&firsttrain!=0){
            vector<int> target(n);
            target[0]=firsttrain;
            for (int i=1; i<n;i++){
                cin>>target[i];
            }
            stack<int> station;
            int currtrain=1; 
            bool flag=1;
            for (int i =0; i<n;i++){
                int currenttarget = target[i];
                while (currtrain<=n&&(station.empty()||station.top()!=currenttarget)){
                    station.push(currtrain);
                    currtrain++;
                }  
                if (station.top()==currenttarget){
                    station.pop(); 
                }
                else {
                    flag=0;
                    break;
                }
            }
            if (flag) 
                cout<<"Yes"<<endl;
            else 
                cout<<"No"<<endl;
        }
        cout<<endl; 
    }
   
}
