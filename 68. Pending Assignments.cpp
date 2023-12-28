// url = https://www.codechef.com/problems/ASSIGNMNT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if((z*24*60)>=(x*y)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
