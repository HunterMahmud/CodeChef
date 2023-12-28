// url = https://www.codechef.com/problems/WORDLE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;
        for(int i=0; i<5; i++){
            if(a[i]==b[i]) a[i] = 'G';
            else a[i] = 'B';
        }
        cout<<a<<endl;
    }
}
