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
int vio=0;
void merge(vector<int> &a,int l,int mid,int r){
    vector<int> b(r-l+1);
    int i=l,j=mid+1,k=0;
    while(i<mid+1 && j<r+1){
        if(a[i]>a[j]){
            b[k++]=a[j++];
            vio+=mid-i+1;
        }
        else    b[k++]=a[i++];
    }
    while(i<mid+1)  b[k++]=a[i++];
    while(j<r+1)    b[k++]=a[j++];
    rep(q,r-l+1)    a[q+l]=b[q];
}
void merge_sort(vector<int> &a,int l,int r){
    int mid=(r+l)/2;
    if(r<=l) return;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,r);
    merge(a,l,mid,r);
}



int32_t main() {
    //std::ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;
    merge_sort(a,0,n-1);
    //rep(i,n)    cout<<a[i]<<endl;
    cout<<vio<<endl;
    return 0;
}























