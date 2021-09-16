#include <iostream> 
using namespace std;

int main() {
	// your code goes here
	int t,n,x,k;
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>n>>x>>k;
		if(x<n+2 && x%k==0){ 
			cout<<"yes"<<"\n";
		}
		else{
			cout<<"no"<<"\n";
		}
	}
	return 0;
}
