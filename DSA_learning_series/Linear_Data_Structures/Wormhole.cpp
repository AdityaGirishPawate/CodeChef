#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf 1e10
int32_t main(){
    int n,x,y;
    cin>>n>>x>>y;
    set<int> v;
    set<int> w;
    pair<int,int> arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i].first>>arr[i].second;
    }
    for (int j = 0; j < x; ++j) {
        int temp;
        cin>>temp;
        v.insert(temp);
    }
    for (int k = 0; k < y; ++k) {
        int temp;
        cin>>temp;
        w.insert(temp);
    }
    int minimum=inf;
    for (int l = 0; l < n; ++l) {
        int top,down;
        auto low = v.lower_bound(arr[l].first);
        if(*low!=arr[l].first && low==v.begin())
            down=-1*inf;
        else if(*low!=arr[l].first){
            low--;
            down = *low;
        }
        else down=*low;
        auto high = w.lower_bound(arr[l].second);
        if(high==w.end()) top = INFINITY;
        else top=(*high);
        cout<<(*low)<<"\t"<<(*high)<<endl;
        minimum=min(minimum,top-down+1);
    }
    cout<<minimum<<endl;
    return 0;
}


