#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;

int find_pow(int ts){
    int count=0;
    while(ts%2==0){
        count++;
        ts/=2;
    }
    return count;
}
int find_num(int n,int ts){
    int itr=pow(2,n+1);
    return  ts/itr;
}
int32_t main() {
    int t;
    cin>>t;
    while(t--) {
        int ts;
        cin>>ts;
        int pow2=find_pow(ts);
        cout<<find_num(pow2,ts)<<endl;
    }

    return 0;
}


