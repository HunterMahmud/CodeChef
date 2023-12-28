// url = https://www.codechef.com/problems/F1RULE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        double ans = double(y)/x;
        if(ans*100>107) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
