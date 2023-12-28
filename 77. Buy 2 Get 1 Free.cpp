// url = https://www.codechef.com/problems/SALE2

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<y*(x-(x/3))<<endl;
    }
}
