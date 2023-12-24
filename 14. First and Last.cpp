// url = https://www.codechef.com/problems/FIRSTANDLAST

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ar[n+1];
	    for(int i=0; i<n; i++){
	        cin>>ar[i];
	    }
	    ll mx = ar[0]+ar[n-1];
	    for(int i=0; i<n-1; i++){
	        if(ar[i]+ar[i+1]>mx) mx = ar[i]+ ar[i+1];
	    }
	    cout<<mx<<endl;
	}

}
