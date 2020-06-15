#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;

int32_t main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n%2){
            for (int i = 0; i < n; ++i) {
                for (int j = 1; j <=n; ++j) {
                    cout<<(n*i+j)<<" ";
                }
                cout<<endl;
            }
        }
        else{
            for (int i = 0; i < n; ++i) {
                if(i%2){
                    for (int j = 1; j <= n ; ++j) {
                        cout<<(n*i+j)<<" ";
                    }
                    cout<<endl;
                }
                else{
                    for (int j = n; j >= 1; --j) {
                        cout<<(n*i+j)<<" ";
                    }
                    cout<<endl;
                }
            }
        }
    }

    return 0;
}


