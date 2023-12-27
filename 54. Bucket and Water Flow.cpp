// url = https://www.codechef.com/problems/WATERFLOW

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        int result = w;
        result += (z*y);
        if(x==result) cout<<"filled"<<endl;
        else if(x>result) cout<<"unfilled"<<endl;
        else cout<<"overflow"<<endl;
    }
}
