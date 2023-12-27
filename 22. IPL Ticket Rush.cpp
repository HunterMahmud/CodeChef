// url = https://www.codechef.com/problems/IPLTRSH

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n<m) cout<<0<<endl;
	    else cout<<n-m<<endl;
	}

}
