// url = https://www.codechef.com/problems/NEARESTCOURT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int z = (x+y)/2;
        if(abs(z-x)>abs(y-z)) cout<<abs(z-x)<<endl;
        else cout<<abs(y-z)<<endl;
    }
}
