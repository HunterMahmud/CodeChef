// url = https://www.codechef.com/problems/MAKENZERO

#include <iostream>
using namespace std;
bool solve(int n){
    if(n<3 || n==5) return 0;
    else return 1;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool f = solve(n);
	    if(f) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	}
	return 0;
}
