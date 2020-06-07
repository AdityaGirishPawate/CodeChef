#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll k,l0,l1;
        cin>>k>>l0>>l1;
        ll sum,sum0,sum1,sum2,sum3,sum4,temp,rem;
        sum=(l0+l1)%3;
        sum0=((l0+l1)%10)%3;
        sum1=((2*(l0+l1))%10);
        sum2=(sum1+((4*(l0+l1))%10));
        sum3=(sum2+((8*(l0+l1))%10));
        sum4=(sum3+((6*(l0+l1))%10));
        if(k==2){
            if(sum%3) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        if(k==3){
            sum+=sum0;
            if(sum%3) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
            temp=(k-3)/4;
            rem=(k-3)%4;
            sum+=(sum0+(temp*((sum4)%3)%3));
            if(rem==0){
                if(sum%3) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
            if(rem==1){
                sum+=sum1;
                if(sum%3) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
            if(rem==2){
                sum+=sum2;
                if(sum%3) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
            if(rem==3){
                sum+=sum3;
                if(sum%3) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
        }
        
    }

    return 0;
}
