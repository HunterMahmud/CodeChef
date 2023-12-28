// url = https://www.codechef.com/problems/FRUITCHAAT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        x/=2;
        if(x==y) cout<<x<<endl;
        else if(x>y) cout<<y<<endl;
        else cout<<x<<endl;
    }
}
