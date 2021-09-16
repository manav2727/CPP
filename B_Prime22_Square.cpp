#include<bits/stdc++.h>
#define endl '\n'
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define mi map<int, int>
#define mll map<ll,ll>
#define test ll tt; cin>>tt; while(tt--)
#define mkp make_pair
#define vop vector<pair<ll,ll>>
#define vopi vector<pair<int,int>>
#define mod 1000000007
#define MAX 1e18
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
typedef unsigned int ui;
 
bool isPrime(ll n){
    if(n<=1) return 0;
    if(n<=3) return 1;
    if(n%2==0 || n%3 == 0) return 0;
    for(ll i=5; i*i<=n; i+=6) if(n%i==0 || n%(i+2)==0) return 0;
    return 1; 
}    
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b){return (a*b)/(gcd(a,b));}
void swap(int& a, int& b) { a=a^b; b=a^b; a=a^b; }
 
 
inline void solve()
{
    int n=0;
    cin>>n;
    vi a(n, 0);
    a[0]=1;
    a[1]=6;
    int ans[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[(i+j)%n]<<" ";
        cout<<endl;
    }
}
 
signed main()
{

    FAST;
    test
    {
        solve();
    }

    return 0;
}