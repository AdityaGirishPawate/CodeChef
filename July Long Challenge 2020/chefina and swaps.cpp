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
//#define int long long
#define int long
typedef tree<int,null_type,less<>,rb_tree_tag,tree_order_statistics_node_update> o_set;
vector<vector<int>> g;
//std::ios::sync_with_stdio(false);

int32_t main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        map<int,int> cnt_a;
        map<int,int> cnt_b;
        map<int,int> cnt;
        rep(i,n){
            cin>>a[i];
            cnt_a[a[i]]++;
            cnt[a[i]]++;
        }
        rep(i,n){
            cin>>b[i];
            cnt_b[b[i]]++;
            cnt[b[i]]++;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int sm1=*a.begin(),sm2=*b.begin();
        int ans=0;
        bool flag=true;
        for(auto k:cnt){
            if(k.second%2){
                cout<<-1<<endl;
                flag=false;
                break;
            }
        }
        if(flag) {
            int l=0,r=n-1;
            while(l<n && r>=0){
                if(cnt_a[a[l]]<=cnt_b[a[l]]){
                    l++;
                    continue;
                }
                if(cnt_a[b[r]]>=cnt_b[b[r]]){
                    r--;
                    continue;
                }
                ans+=min(min(a[l],b[r]),min(2*sm1,2*sm2));
                cnt_a[a[l]]--;
                cnt_b[a[l]]++;
                cnt_b[b[r]]--;
                cnt_a[b[r]]++;
                l++;
                r--;
            }

            cout<<ans<<endl;
        }
    }
}
