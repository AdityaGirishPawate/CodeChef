#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int N=1e5;


int32_t main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int count=0;
        for (int i = 1; i < n; ++i) {
            if(s[i]!=s[i-1]) {
                i++;
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}


