#include<bits/stdc++.h>
using namespace std;
//DATATYPES AND DATASTRUCTURES DECLARATION
typedef long long  ll;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef std::vector<ll> vll;
typedef std::vector<int> vii;
typedef std::vector<pll> vpll;
typedef std::vector<vll> vvll;
typedef map<ll,ll>mll;
typedef map<char,ll>mcll;
typedef map<ll,pll>mpll;
typedef set<ll> sll;
// int fact[1000006]={0};

//USEFUL MACROS
#define int long long
#define test            ll t;cin>>t;while(t--)
#define var(n)          ll n;cin>>n;
#define vars(s)         string s;cin>>s;
#define inp(a,n)        ll a[n];for(ll i = 0;i<n;i++) cin>>a[i];
#define inpv(a,n)       vll a(n);for(ll i = 0;i<n;i++) cin>>a[i];
#define sz(a)           a.size()
#define loop(i,a,n)     for(ll i=a;i<n;i++)
#define loopr(i,a,n)    for(ll i =n-1;i>=a;i--)
#define nl              cout<<endl;
#define printarr(a)     for(auto i : a) cout<<i<<' ';nl;
#define F               first
#define S               second
#define pb              push_back
#define pqs             priority_queue<ll,vll,greater<ll> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define dec(x)         cout<<fixed<<setprecision(x)<<endl;
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define minArr(a)       *min_element(arr(a))
#define minVec(a)       *min_element(vec(a))
#define maxArr(a)       *max_element(arr(a))
#define maxVec(a)       *max_element(vec(a))


//USEFUL FUNCTIONS
bool isPrime(ll n){if(n <= 1)return false;if(n <= 3)return true;if(n%2 == 0 || n%3 == 0)return false;for(ll i=5; i*i<=n; i=i+6)if(n%i == 0 || n%(i+2) == 0)return false;return true;}
ll nextPrime(ll N){if(N<=1)return 2;ll prime = N;bool found = false;while(!found){prime++;if(isPrime(prime))found=true;}return prime;}
ll cl(ll n,ll d){return (n+d-1)/d;} 
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b){return (a*b)/(gcd(a,b));}
void print(pll a){cout<<a.F<<' '<<a.S<<' ';nl;}
void print(ll a){cout<<a<<' ';nl}
void print(vll a){for(auto i : a)cout<<i<<' ';nl;}
void print(string s){cout<<s<<' ';nl;}
void printr(vll a,ll start,ll end){for(ll i =start;i<end;i++)cout<<a[i]<<' ';nl;}
void print(ll a,ll b){cout<<a<<' '<<b<<' ';}
ll madd(ll a,ll b){return ((a%mod)+(b%mod))%mod;}
ll mmul(ll a,ll b){return ((a%mod)*(b%mod))%mod;}
ll msub(ll a,ll b){return ((a%mod)-(b%mod)+mod)%mod;}
ll fpow(ll x,ll y,ll p=mod){x%=p;ll sum = 1;while(y){if (y & 1)sum = sum * x; sum %= p; y = y >> 1; x = x * x; x %= p;} return sum;}
bool isPerSquare(long double a) {if(a<0) return false; ll sr = sqrt(a); return (sr*sr == a);}
// void facto() {fact[0]=1;fact[1]=1;for(int i=2;i<1000006;i++)fact[i]=(fact[i-1]*i)%mod;}
string bin(ll n) {return bitset<64> (n).to_string();}
ll countBits( ll number) { return (ll)log2(number)+1;}
bool is(string temp){char c = temp[0]; string s((temp).size(),c); return s<=temp;}

// const ll N = 1e5+1;

void solve(){
    var(n)
    inp(arr,n)
    ll ans = 0;
    for(ll i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
            ans += arr[i-1]-arr[i];
    }
    cout<<ans<<"\n";
}



signed main()
{ 
    FIO;
    test
        solve();
}