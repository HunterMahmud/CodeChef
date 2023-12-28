// url = https://www.codechef.com/problems/RECL09

#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool prime(ll n){
    if(n<2) return false;
    if(n<4) return true;
    if(n%2==0) return false;
    for(ll i=3; i*i<=n; i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    
    ll n;
    cin>>n;
    bool f = prime(n);
    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

    return 0;
}
