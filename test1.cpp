// 1 2 6 8 10 12 21 24 18 20 33

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define sz(a)           ll(a.size())

string decToBin(ll a){
    return bitset<64>(a).to_string();
}

int get(int n){
    string s = decToBin(n);
    ll ct0 = 0, ct1 = 0,i = 0;
    while(i<sz(s) && s[i] == '0')i++;
    s = s.substr(i);
    for(auto i : s){
        if(i == '0')ct0++;
        else ct1++;
    }
    return max(ct1,ct0)*n;
}

void solve(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
         cout<<get(i)<<'\n'; 
    }
}



signed main()
{ 
    //FIO;
    // test
        solve();
}