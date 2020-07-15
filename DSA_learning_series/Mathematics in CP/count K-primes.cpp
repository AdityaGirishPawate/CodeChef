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


int32_t main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N=1e5+5;
    vector<int> largest_prime_factor(N+5,0);
    vector<int> count[6];
    rep(i,6)    count[i]=vector<int>(N+5,0);
    f(i,2,N+6){
        if(largest_prime_factor[i]!=0) continue;
        largest_prime_factor[i]=i;
        for(int j=2*i;j<=N;j+=i){
            largest_prime_factor[j]=i;
        }
    }
    rep(k,6) {
        f(i, 2, N + 6) {
            int x = i;
            int cnt=0;
            map<int, int> mp;
            while (x != 1) {
                mp[largest_prime_factor[x]]++;
                x /= largest_prime_factor[x];
            }
            for (auto K:mp) cnt++;
            if(cnt==k) count[k][i]=1;
        }
        rep(i, N + 6) {
            count[k][i + 1] += count[k][i];
        }
    }
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        cout<<count[k][b]-count[k][a-1]<<endl;
    }
    return 0;
}


















