// url = https://www.codechef.com/problems/ORANDCON



#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll x;
	    cin>>x;
	    ll a = 0;
	    ll b = x;
	    ll c = log2(x);
	    c = pow(2,c+1)+x;
	    cout<<a<<' '<<b<<' '<<c<<endl;
	    
	}
	return 0;
}
