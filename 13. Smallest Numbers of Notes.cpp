// url = https://www.codechef.com/problems/FLOW005


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int cnt = 0;
	    int extra = n;
	    int ar[] = {100,50,10,5,2,1};
	    for(int i=0; i<6; i++){
	        while(ar[i]<=extra){
	            cnt++;
	            extra-=ar[i];
	        }
	    }
	    cout<<cnt<<endl;
	}

}
