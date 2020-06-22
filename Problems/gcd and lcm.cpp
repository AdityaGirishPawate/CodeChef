#include <iostream>

using namespace std;
#define ll long long

ll gcd(ll a, ll b);
ll lcm(ll a,ll b);

int main()
{
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<gcd(a,b)<<" "<<lcm(a,b)<<"\n";
    }

    return 0;
}

ll gcd(ll a, ll b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return a*b/gcd(a,b);
}
