#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf 1e10
int32_t main(){
    int n;
    cin>>n;
    pair<int,int> arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);
    stack<pair<int,int>> st;
    int rb[n],lb[n];
    pair<int,int> element;
    for (int j = 0; j < n; ++j) {
        while(!st.empty() && st.top().first > arr[j].second){
             element= st.top();
            rb[element.second]= arr[j].first;
            st.pop();
        }
        st.push(make_pair(arr[j].second,j));
    }
    while(!st.empty()){
        element=st.top();
        rb[element.second]=100000;
        st.pop();
    }
    for (int j =n-1; j >=0 ; --j) {
        while(!st.empty() && st.top().first > arr[j].second){
            element = st.top();
            lb[element.second]= arr[j].first;
            st.pop();
        }
        st.push(make_pair(arr[j].second,j));
    }
    while(!st.empty()){
        element=st.top();
        lb[element.second]=0;
        st.pop();
    }
    int maxarea=0;
    for (int k = 0; k < n; ++k) {
        maxarea=max(maxarea,arr[k].second*(rb[k]-lb[k]));
    }
    for (int l = 0; l < n-1; ++l) {
        maxarea=max(maxarea,(arr[l+1].first-arr[l].first)*500);
    }
    maxarea = max(maxarea,500*(arr[0].first));
    maxarea = max(maxarea,500*(100000-arr[n-1].first));
    cout<<maxarea<<endl;
    return 0;
}


