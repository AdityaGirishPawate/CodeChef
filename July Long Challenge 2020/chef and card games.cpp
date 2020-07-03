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

int sum_of_digits(int a,int b){
    int suma=0,sumb=0;
    while(a>0){
        suma+=a%10;
        a/=10;
    }
    while(b>0){
        sumb+=b%10;
        b/=10;
    }
    if(suma==sumb)  return 0;
    else if(suma>sumb)  return 1;
    else return -1;
}
int32_t main() {
    //std::ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        int suma=0,sumb=0;
        rep(i,n){
            cin>>a[i]>>b[i];
            int k=sum_of_digits(a[i],b[i]);
            if(k==1)    suma++;
            else if(k==-1)  sumb++;
            else{
                suma++;
                sumb++;
            }
        }
        if(suma==sumb)  cout<<2<<" "<<suma<<endl;
        else if(suma<sumb)  cout<<1<<" "<<sumb<<endl;
        else cout<<0<<" "<<suma<<endl;

    }
}























