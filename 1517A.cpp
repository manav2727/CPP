#include<bits/stdc++.h>
#include<string.h>

typedef long long ll;
using namespace std;

int main(){
    ll t;
	cin>>t;
	while(t--){
		ll n,ans,summ=0,ans_len;cin>>n;
		if(n%2050 != 0)
			cout<<-1<<"\n";
		else{
			ans=n/2050;
			ans_len=to_string(ans).length();
			for (int i = ans_len-1; i >= 0; i--) {
			    summ += ans % 10;
			    ans /= 10;
			}
			cout<<summ<<"\n";
		}
	}
    return 0;
}
