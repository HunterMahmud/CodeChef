// url = https://www.codechef.com/problems/BOMBTHEBASE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int num,res = 0;
	    for(int i=1; i<=n; i++){
	        cin>>num;
	        if(num<x) res = i;
	    }
	    
	   cout<<res<<endl;
	}
    return 0;
}
