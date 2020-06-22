/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
#define ll long long int 

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,i,sum=0;
        cin>>n;
        n++;
        ll* a1=(ll*)malloc(n*sizeof(ll));
        ll* a2=(ll*)malloc(n*sizeof(ll));
        a1[0]=0;
        a2[0]=0;
        for(i=1;i<n;i++)
        {
            cin>>a1[i];
        }
        for(i=1;i<n;i++)
        {
            cin>>a2[i];
        }
            
        for(i=1;i<n;i++)
        {
            a1[i]+=a1[i-1];
            a2[i]+=a2[i-1];
        }
        for(i=1;i<n;i++)
        {
            if(a1[i]==a2[i]&&a1[i-1]==a2[i-1])
                sum+=a1[i]-a1[i-1];
            
        }
        cout<<sum<<"\n";
    }
}

