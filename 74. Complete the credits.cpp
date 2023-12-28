// url = https://www.codechef.com/problems/CREDITS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<35) cout<<"Underload"<<endl;
        else if(n>65) cout<<"Overload"<<endl;
        else cout<<"Normal"<<endl;
    }
}
