#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int N=1e5;


int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> currency;
        currency[5]=0;
        currency[10]=0;
        currency[15]=0;
        bool flag= false;
        int temp;
        for (int i = 0; i < n; ++i) {
            cin>>temp;
            if(temp==5) currency[5]++;
            else if(temp==10 && currency[5]>0){
                currency[10]++;
                currency[5]--;
            }
            else if(temp==10 && currency[5]<=0){
                flag=true;
                break;
            }
            else if(temp==15 && currency[10]>0){
                currency[15]++;
                currency[10]--;
            }
            else if(temp==15 && currency[10]<=0 && currency[5]>1){
                currency[15]++;
                currency[5]-=2;
            }
            else if(temp==15 && currency[10]<=0 && currency[5]<=1){
                flag=true;
                break;
            }
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}


