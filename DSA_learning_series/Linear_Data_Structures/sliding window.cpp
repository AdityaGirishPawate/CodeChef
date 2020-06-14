#include <bits/stdc++.h>
#include <deque>
using namespace std;
#define int long long
const int N=1e5;
int a[N];

void push(int x,deque<pair<int,int>> &dq){
    while(!dq.empty() && dq.back().first<a[x]){
        dq.pop_back();
    }
    dq.push_back({a[x], x});
}
int query(int l,int r,deque<pair<int,int>> &dq){
    while (!dq.empty() && dq.front().second< l)
            dq.pop_front();
    return dq.front().first;
}

int32_t main() {
    deque<pair<int,int>> dq;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int j = 1; j <= k; ++j) {
        push(j,dq);
    }
    int l=1,r=k;
    cout<<query(l,r,dq)<<" ";
    for (r = k+1; r <= n; ++r) {
        l++;
        push(r,dq);
        cout<<query(l,r,dq)<<" ";
    }

    return 0;
}


