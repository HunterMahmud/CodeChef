// url = https://www.codechef.com/problems/PRB01

#include <bits/stdc++.h>
using namespace std;

bool solve(int n){
    if(n<2) return false;
    if(n<3) return true;
    if(n%2==0) return false;
    for(int i=3; i<=sqrt(n); i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool flag = solve(n);
	    if(flag) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
