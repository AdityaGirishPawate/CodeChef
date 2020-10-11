#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(i=a;i<b;i++)
#define int long long

void solve(){
    int n;
    cin>>n;
    int temp=n;
    if(n==1) {
        cout << "1" << endl;
        return;
    }
    while(temp%2!=1 && temp>0){
        temp=temp/2;
    }
    if(temp==1){
        cout<<-1;
    }
    else{
        cout<<"2 3 1 ";
        for (int i = 4; i <= n; ++i) {
            temp=i;
            while(temp%2!=1 && temp>0){
                temp=temp/2;
            }
            if(temp==1){
                cout<<i+1<<" "<<i<<" ";
                i++;
            }
            else{
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

