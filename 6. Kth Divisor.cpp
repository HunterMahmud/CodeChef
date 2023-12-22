// url = https://www.codechef.com/problems/RNT013


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	set<ll>s;
    ll n;
    ll kth;
    cin>>n>>kth;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0) {
            s.insert(i);
            s.insert(n/i);
        }
    }
    if(kth>s.size()) {cout<<(-1)<<endl;}
    else{
        set<ll>::iterator it;
        it = s.begin();
        advance(it,kth-1);
        cout<<*it<<endl;
    }
    
	return 0;
}
