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
const int N=20;



int32_t main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int> largest_prime_factors(N+5,0);
    vector<pair<int,int>> prime_factorization[N+5];
    f(i,2,N){
        if(largest_prime_factors[i]!=0) continue;
        largest_prime_factors[i]=i;
        for(int j=i+i;j<=N;j+=i){
            largest_prime_factors[j]=i;
        }
    }
    f(i,2,N){
        int x=i;
        map<int,int> mp;
        while(x!=1){
            mp[largest_prime_factors[x]]++;
            x/=largest_prime_factors[x];
        }
        for(auto v:mp){
            prime_factorization[i].emplace_back(v);
        }
    }
    f(i,2,N){
        cout<<i<<" = ";
        for(auto k:prime_factorization[i]){
            cout<<k.first<<"^"<<k.second<<"*";
        }
        cout<<1<<endl;
    }
    return 0;
}


















