// url = https://www.codechef.com/problems/EID

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int coin[n+1];
	    for(int i=0; i<n; i++){
	        cin>>coin[i];
	    }
	    if(n==2) cout<<abs(coin[0]-coin[1])<<endl;
	    else{
	        sort(coin,coin+n);
	        int mx = INT_MAX;
    	    for(int i=1; i<n; i++){
    	        if(abs(coin[i]-coin[i-1])<mx) mx = abs(coin[i]-coin[i-1]);
    	        if(mx==0) break;
    	    }
    	    cout<<mx<<endl;
	    }
	}

}
