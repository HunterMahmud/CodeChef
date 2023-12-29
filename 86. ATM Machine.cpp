// url = https://www.codechef.com/problems/ATM2

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,p;
        cin>>x>>y;
        for(int i=0; i<x; i++){
            cin>>p;
            if(p>y) cout<<"0";
            else {
                cout<<"1";
                y-=p;
            }
        }
        cout<<endl;
    }
}
