// url = https://www.codechef.com/problems/COURSEREG

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        if(m>=(k+n)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
