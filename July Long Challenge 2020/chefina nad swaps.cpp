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
        priority_queue<int> pq1;
        priority_queue <int, vector<int>, greater<> > pq2;
        rep(i,n){
            cin>>a[i];
            pq1.push(a[i]);
            cnt_a[a[i]]++;
            cnt[a[i]]++;
        }
        rep(i,n){
            cin>>b[i];
            pq2.push(b[i]);
            cnt_b[b[i]]++;
            cnt[b[i]]++;
        }
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
            while (!pq1.empty() && !pq2.empty()) {
                int x = pq1.top(), y = pq2.top();
                while (!pq1.empty() && cnt_a[pq1.top()] <= cnt_b[pq1.top()]) {
                    pq1.pop();
                    x = pq1.top();
                }
                while (!pq2.empty() && cnt_a[pq2.top()] >= cnt_b[pq2.top()]) {
                    pq2.pop();
                    y = pq2.top();
                }
                if(!pq1.empty() && !pq2.empty()) {
                    ans += min(x, y);
                    cnt_a[x]--;
                    cnt_b[x]++;
                    cnt_a[y]++;
                    cnt_b[y]--;
                    pq1.pop();
                    pq2.pop();
                }
            }
            cout<<ans<<endl;
        }
    }
}























