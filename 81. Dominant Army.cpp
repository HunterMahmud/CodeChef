// url = https://www.codechef.com/problems/DOMINANT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>(c+b) || b>(a+c) || c>(a+b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
