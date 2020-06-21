#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int N=1e5;
#define INF 1e9

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,b,m;
        cin>>n>>b>>m;
        int count=1;
        vector<int> a(m);
        for(auto &it:a) cin>>it;
        int prev=a[0]/b+1;
        for (int i = 1; i < m; ++i) {
            if( a[i]/b+1 == prev){
                continue;
            }
            prev=a[i]/b+1;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}


