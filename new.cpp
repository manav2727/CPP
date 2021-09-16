#include<bits/stdc++.h>
using namespace std;
 
 
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii>vpii;
typedef std::vector<ll> vll;
typedef std::vector<pll> vpll;
typedef std::vector<bool> vbb;
typedef map<ll,ll>mll;
typedef set<ll> sll;
typedef multiset<ll> msll;
const ll MOD=0ll;
const ll INF=3e18;
 
 
 
// #define ll              long long int
#define test            ll t;cin>>t;while(t--)
#define inp(a,n)        ll a[n];for(ll i = 0;i<n;i++) cin>>a[i];
#define print_inp(a)    for(auto i : a) cout<<i<<" ";   
#define loopi(a,n)           for(ll i=a;i<n;i++)
#define loopj(a,n)           for(ll j=a;j<n;j++)
#define loopr(a,n)      for(ll i =n-1;i>=a;i--)     
#define F               first
#define S              second
#define pb              push_back
#define popb            pop_back
#define popf            pop_front
#define mp              make_pair
#define mt              make_tuple
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define range(a,b)        substr(a,b-a+1)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a)     (a).begin(),(a).end()
#define rall(a)     (a).rbegin(),(a).rend()
 
 
 
 
 
 
// best way to input a vector // vll a(k),b(k);// cin>>a>>b;
 
bool isPrime(int n){if(n <= 1)return false;if(n <= 3)return true;if(n%2 == 0 || n%3 == 0)return false;for(int i=5; i*i<=n; i=i+6)if(n%i == 0 || n%(i+2) == 0)return false;return true;}   
int nextPrime(int N){if(N<=1)return 2;int prime = N;bool found = false;while(!found){prime++;if(isPrime(prime))found=true;}return prime;} 
ll fact(ll n){if(n==1) return 1;return  n* fact(n-1);}
ll cl(ll n,ll d){return (n+d-1)/d;} 
 
 
 
int main()
{   
  FIO;
 
  test{
    int A, B;
    cin >> A >> B;
    int best = 1e9;
 
    for (int b_add = 0; b_add <= 20; b_add++) {
        if (B > 1) {
            int ops = b_add;
            int a = A;
 
            while (a > 0) {
                cout<<a<<"\n";
                a /= B;
                ops++;
            }
 
            best = min(best, ops);
        }
 
        B++;
    }
 
    cout << best << '\n';
  }
}