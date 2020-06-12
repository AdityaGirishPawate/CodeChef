#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int flav[k+1];
        int distictflavour=1;
        int l=0,r=0;
        for(int i=0;i<=k;i++) flav[i]=0;
        flav[arr[0]]=1;
        int maxrange=1;
        while(true){
            while(++r<n && distictflavour<k){
                if(flav[arr[r]]==0) distictflavour++;
                flav[arr[r]]++;
                if(distictflavour<k) maxrange=max(maxrange,r-l+1);
            }
            if(r==n) break;
            r--;
            while(l<=r && distictflavour==k){
                if(flav[arr[l]]==1) distictflavour--;
                flav[arr[l]]--;

                l++;
            }
        }
        cout<<maxrange<<endl;
    }


    return 0;
}


