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
//#define int long
typedef tree<int,null_type,less<>,rb_tree_tag,tree_order_statistics_node_update> o_set;
vector<vector<int>> g;
//std::ios::sync_with_stdio(false);

int32_t main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        if(y>=2*x){
            cout<<x*n*m<<endl;
        }
        else{
            if(n==1 && m==1)
                cout<<x<<endl;
            else if(y<=x)
                cout<<((m*n+1)/2)*y<<endl;
            else
                cout<<((m*n+1)/2)*x+((m*n)/2)*(y-x)<<endl;
        }
    }


    return 0;
}
