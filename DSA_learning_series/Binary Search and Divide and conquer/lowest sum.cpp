//const int N=1e5;
#define INF 1e9
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
typedef tree<int,null_type,less<>,rb_tree_tag,tree_order_statistics_node_update> o_set;
vector<vector<int>> g;
//std::ios::sync_with_stdio(false);


int32_t main() {
    //std::ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int Q,k;
        cin>>k>>Q;
        vector<pair<int,int>> a(k);
        vector<pair<int,int>> b(k);
        for(auto &it:a) cin>>it.first;
        for(auto &it:b) cin>>it.first;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        rep(i,k){
            a[i].second=i+1;
            b[i].second=i+1;
        }
        int l,h,ans;
        while(Q--){
            int q;
            cin>>q;
            l = a[0].first + b[0].first;
            h = a[k-1].first + b[k - 1].first;
            while (l <= h) {
                int m= (l + h) / 2;
                int count=0;
                rep(i,k) {
                    int low = 0, high = k - 1,mid,ele=-1;
                    while(low<=high){
                        mid=(low+high)/2;
                        if(a[i].first+b[mid].first <=m){
                            ele=mid;
                            low=mid+1;
                        } else  high=mid-1;
                    }
                    if(ele>=0) count+=b[ele].second;
                }
                if(count>=q){
                    ans=m;
                    h=m-1;
                    //cout<<ans<<" "<<count<<endl;
                } else  l=m+1;
            }
            cout<<ans<<endl;
        }
    }
}























