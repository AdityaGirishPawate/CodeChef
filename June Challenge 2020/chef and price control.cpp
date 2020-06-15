#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;


int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int actual=0,diminished=0;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin>>temp;
            if(temp>k)  diminished+=k;
            else    diminished+=temp;
            actual+=temp;
        }
        cout<<actual-diminished<<endl;
    }

    return 0;
}


