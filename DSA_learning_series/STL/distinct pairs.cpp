#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;

int32_t main() {
    int n,m;
    cin>>n>>m;
    set <pair<int,int>> a;
    set <pair<int,int>> b;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin>>temp;
        a.insert({temp,i});
    }
    for (int i = 0; i < m; ++i) {
        int temp;
        cin>>temp;
        b.insert({temp,i});
    }
    
    
    for(auto k:b) {
        cout << a.begin()->second << " " << k.second << endl;
    }
    a.erase(*a.begin());
    //for(auto k:a) cout<<k.first<<" "<<k.second<<endl;
    //for(auto k:b) cout<<k.first<<" "<<k.second<<endl;
    
    for(auto k:a){
        cout<<k.second<<" "<<(--b.end())->second<<endl;
    }

    return 0;
}


