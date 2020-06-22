#include <bits/stdc++.h>

using namespace std;
#define ll long long 

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a1,a2,a3,a4,a5,p,sum;
        cin>>a1>>a2>>a3>>a4>>a5>>p;
        sum=a1+a2+a3+a4+a5;
        if(sum*p<=24*5)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
}
