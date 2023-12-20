// url = https://www.codechef.com/problems/PRB01

// solution using sieve algorithm

#include <bits/stdc++.h>
using namespace std;

int x[100002];
int len = sizeof(x)/4;
int main()
{
    for(int i=0; i<len; x[i++]=1);
    x[0] = 0;
    x[1] = 0;
    for(int i=2; i<=sqrt(len); i++){
        if(x[i]){
            for(int j=i+i; j<len; j+=i){
                x[j] = 0;
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(x[n]) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}


// solution using normal way

#include <bits/stdc++.h>
using namespace std;

bool solve(int n){
    if(n<2) return false;
    if(n<3) return true;
    if(n%2==0) return false;
    for(int i=3; i<=sqrt(n); i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool flag = solve(n);
	    if(flag) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
