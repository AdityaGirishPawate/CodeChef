#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;
set<int> subarrays;
int find_ans(int i){
    auto j= subarrays.upper_bound(i);
    j--;
    return(*j);
}
void remove(int i){
    subarrays.erase(i);
}

int32_t main() {
    int n,q;
    cin>>n>>q;
    int arr[n+1];
    for (int i = 1; i <=n ; ++i) {
        cin>>arr[i];
    }
    subarrays.insert(1);
    for (int j = 2; j <= n; ++j) {
        if(arr[j]%arr[j-1]==0) continue;
        subarrays.insert(j);
    }
    while (q--){
        int type,i;
        cin>>type>>i;
        if(type==1){
            cin>>arr[i];
            if(i>1) {
                if ((find_ans(i) == i) && (arr[i] % arr[i - 1] == 0))
                    remove(i);
                else if ((find_ans(i) < i) && (arr[i] % arr[i - 1] != 0))
                    subarrays.insert(i);
            }
            if(i<n){
                if((find_ans(i+1)<=i) && (arr[i+1]%arr[i] !=0))
                        subarrays.insert(i+1);
                else if((find_ans(i+1)>i) && (arr[i+1]%arr[i] ==0))
                        remove(i+1);
            }
        }
        else{
            cout<<find_ans(i)<<endl;
        }
    }

    return 0;
}


