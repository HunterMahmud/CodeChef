// url = https://www.codechef.com/problems/MVR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int r = c*2+ d;
    int m = a*2 + b;
    if(r==m) cout<<"Equal"<<endl;
    else if(r>m) cout<<"Ronaldo"<<endl;
    else cout<<"Messi"<<endl;
}
