// url = https://www.codechef.com/problems/SNDMAX

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int big,small;
        if(a>b && a>c) big=a;
        else if(b>c && b>a) big=b;
        else big = c;
        if(a<b && a<c) small = a;
        else if(b<c && b<a) small=b;
        else small = c;
        cout<<(a+b+c)-big-small<<endl;
    }
}
