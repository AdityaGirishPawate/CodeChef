//const int N=1e5;
#define INF 2*1e18
#include <bits/stdc++.h>
#include <random>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define f(i,a,b) for(int i=a;i< b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1e9+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define int long long
//#define int long
typedef tree<pair<int,int>,null_type,less<>,rb_tree_tag,tree_order_statistics_node_update> o_set;
vector<vector<int>> g;
//std::ios::sync_with_stdio(false);

viii s;
int func(int k){
    int curr=0;
    while(s[curr].second.first!= -100){
        if(s[curr].second.first==-50){
            k-=s[curr].second.second;
        }
        else {
            if (k >= s[curr].second.first) {
                k += s[curr].second.second;
            }
        }
        curr++;
    }
    return k;

}

int32_t main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout<<INF<<endl;
    int t;
    cin>>t;
    while(t--){
        s.clear();
        int x,b;
        cin>>x>>b;
        rep(i,b){
            int l,m;
            cin>>l>>m;
            s.push_back({l,{-50,m}});
        }
        int c;
        cin>>c;
        rep(i,c){
            int p,q,r;
            cin>>p>>q>>r;
            s.push_back({p,{q,r}});
        }
        s.push_back({x,{-100,-100}});
        sort(s.begin(),s.end());
        int lo=1,hi=1e16,ans=INF;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(func(mid)>=1){
                ans=min(ans,mid);
                hi=mid-1;
            } else  lo=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}


















