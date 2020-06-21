#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;
#define INF 1e9

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        set<int> st;
        map<int,int> mp;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin>>temp;
            st.insert(temp);
            mp[temp]++;
        }
        int c=0;
        for (int j = 1; j < m; ++j) {
            if(*st.lower_bound(j)==j){
                c+=mp[j];
            }
            else{
                c=0;
                break;
            }
        }
        if(c==0)    cout<<-1<<endl;
        else{
            for(auto i=st.upper_bound(m); i!=st.end();i++){
                c+=mp[*i];
            }
            cout<<c<<endl;
        }

    }
    return 0;
}


