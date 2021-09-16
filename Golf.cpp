#include<bits/stdc++.h>
#include<string.h>
typedef long long ll;
using namespace std;

int main(){
    ll t;
	cin>>t;
	while(t--){
		ll n,x,k,rem;
		cin>>n>>x>>k;
		rem=(n+1)%k;
		if(x%k==rem || x%k==0)
		    cout<<"YES"<<"\n";
		else
		    cout<<"NO"<<"\n";
	}
    return 0;
}