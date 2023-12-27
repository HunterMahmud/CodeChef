// url = https://www.codechef.com/problems/TRICOIN

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t; 
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    ll x = (ll)2*(ll)n;
	    x = sqrt(x);
	    ll y = (x*(x+1)/2);
	    if(y>n) x--;
	    cout<<x<<endl;
	}

}
