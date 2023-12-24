// url = https://www.codechef.com/problems/HIGHSCORE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ar[4];
	    for(int i=0; i<4; i++){
	        cin>>ar[i];
	    }
	    sort(ar,ar+4);
	    cout<<ar[3]<<endl;
	}

}
