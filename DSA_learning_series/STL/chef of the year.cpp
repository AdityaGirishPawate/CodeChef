#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int N=1e5;


int32_t main() {
    int n,m;
    cin>>n>>m;
    map<string,int> chef_votes;
    map<string,int> country_votes;
    map<string,string> chef_country;
    while(n--){
        string chef,country;
        cin>>chef>>country;
        chef_country[chef]=country;
        chef_votes[chef]=0;
        country_votes[country]=0;
    }
    int max_chef_votes=0;
    int max_country_votes=0;
    string max_chef;
    string max_country;
    while(m--){
        string chef;
        cin>>chef;
        country_votes[chef_country[chef]]++;
        chef_votes[chef]++;
        if(country_votes[chef_country[chef]] > max_country_votes) {
            max_country_votes=country_votes[chef_country[chef]];
            max_country=chef_country[chef];
        }
        if(chef_votes[chef] > max_chef_votes){
            max_chef_votes=chef_votes[chef];
            max_chef=chef;
        }
    }
    cout<<max_country<<endl;
    cout<<max_chef<<endl;

    return 0;
}


