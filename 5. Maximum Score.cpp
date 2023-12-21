// url = https://www.codechef.com/problems/MAXSCORE7


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ar[n+2];
	    int zero = 0, one = 0;
	    for(int i=0; i<n; i++){
	        cin>>ar[i];
	        if(ar[i]) one++;
	        else zero++;
	    }
	    if(zero<one) cout<<zero<<endl;
	    else cout<<one<<endl;
	}
	return 0;
}
