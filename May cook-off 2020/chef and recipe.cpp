#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;
#define INF 1e6
int32_t main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a[n];
        map<int,pair<int,bool>> mp;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
            mp[a[i]].first=0;
            mp[a[i]].second=false;
        }
        bool flag=false;
        mp[a[0]].first++;
        for (int j = 1; j < n; ++j) {
            if(a[j]!=a[j-1] ){
                mp[a[j]].first++;
                if(mp[a[j]].second){
                    flag=true;
                    break;
                }
                else{
                    mp[a[j-1]].second=true;
                }
            }
            else    mp[a[j]].first++;
        }
        int count=0;
        set<int> st;
        for(auto k:mp){
            st.insert(k.second.first);
            count++;
        }
        if(count!=st.size())    flag=true;
        if(flag)    cout<<"NO"<<endl;
        else    cout<<"YES"<<endl;
    }

    return 0;
}


