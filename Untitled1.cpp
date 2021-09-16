#include<bits/stdc++.h>
#include<string.h>
typedef long long ll;
const unsigned int M = 1000000007;
using namespace std;

int main(){
    ll t;
	cin>>t;
	while(t--){
		ll n;cin>>n;
		n = n-1;
		ll fin = 1;
		ll x = 2;
        while (n > 0)
        {
        	//cout<<"hello"<<"\n";
            if (n & 1)
                fin = (fin*x) % M;
    
            n = n>>1;
            x = (x*x) % M;
        }
	    cout<<fin<<"\n";
	}
    return 0;
}
