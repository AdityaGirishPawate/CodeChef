#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    stack<pair<int,int>> st;
    int ans=1;
    for(int i=0;i<n;i++){
        while(!st.empty() && st.top().first > arr[i]){
            pair<int,int> element=st.top();

            int chaos = i - element.second +1 ;
            ans*=chaos;
            ans%=(1000000007);
            st.pop();
        }
        st.push(make_pair(arr[i],i));
    }
    cout<<ans<<endl;
    return 0;
}


