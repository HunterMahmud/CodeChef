// url = https://www.codechef.com/problems/EZSPEAK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string s;
        cin>>s;
        bool flag = true;
        for(int i=0; i<len-3; i++){
            int j=i;
            int cnt=0;
            while(j<len && s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u'){
                cnt++;
                j++;
                if(cnt==4) {
                    cout<<"NO"<<endl;
                    flag = false;
                    break;
                }
            }
            if(cnt>=4) break;
        }
        if(flag) cout<<"YES"<<endl;
    }
}
