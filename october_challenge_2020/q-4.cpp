#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(i=a;i<b;i++)
#define int long long

void solve(){
    int i,n,x,p,k;
    cin>>n>>x>>p>>k;
    bool present=false;
    int rank=1;
    vector<int> a(n);
    f(i,0,n){
        cin>>a[i];
        if(a[i]==x)
            present=true;
        if(a[i]<=x)
            rank++;
    }   
    if(present){
        if(rank==p)
            cout<<0<<endl;
        else{
            if(p==k)    cout<<1<<endl;
            else if((p<k && rank<k)||(p>k && rank>k)) cout<<abs(p-rank)<<endl;
            else cout<<-1<<endl;
        }
    }
    else{
        if(k==p)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }
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
