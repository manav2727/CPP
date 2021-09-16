#include<bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include<string>
#include <cstdlib>
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
int fact[1000006]={0};

//USEFUL MACROS
#define int long long
#define test            ll t;cin>>t;while(t--)
#define var(n)          ll n;cin>>n;
#define vars(s)         string s;cin>>s;
#define inp(a,n)        ll a[n];for(ll i = 0;i<n;i++) cin>>a[i];
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
#define vec(a)          (a).begin(),(a).end()
#define arr(a)          a,a+n
#define sortarr(a)    sort(arr(a),greater<int>())
#define sortvec(a)    sort(vec(a),greater<int>())
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
void amax(ll a, ll b){a=max(a,b);}
void amin(ll a, ll b){a=min(a,b);}
ll madd(ll a,ll b){return ((a%mod)+(b%mod))%mod;}
ll mmul(ll a,ll b){return ((a%mod)*(b%mod))%mod;}
ll msub(ll a,ll b){return ((a%mod)-(b%mod)+mod)%mod;}
ll fpow(ll x,ll y,ll p=mod){x%=p;ll sum = 1;while(y){if (y & 1)sum = sum * x; sum %= p; y = y >> 1; x = x * x; x %= p;} return sum;}
bool isPerSquare(long double a) {if(a<0) return false; ll sr = sqrt(a); return (sr*sr == a);}
void facto() {fact[0]=1;fact[1]=1;for(int i=2;i<1000006;i++)fact[i]=(fact[i-1]*i)%mod;}
string bin(ll n) {return bitset<64> (n).to_string();}
ll binLen(string s) {const auto loc1 = s.find('1');return 63 - loc1;}
bool is(string temp){char c = temp[0]; string s((temp).size(),c); return s<=temp;}

const ll N = 1e5+1;

void solve(){
    var(n)
    var(a)
    var(b)
    ll i=0,powe = a;
    if(a==1)
    {
        if((n-1)%b == 0)
        {
            cout<<"Yes"<<"\n";
            return;
        }
        else
        {
            cout<<"No"<<"\n";
            return;
        }
    }
    
    while(1)
    {
        powe = pow(a,i);
        if(powe>n)
            break;
        if((n-powe)%b == 0)
        {
            cout<<"Yes"<<"\n";
            return;
        }
        i++;
    }
    cout<<"No"<<"\n";

}



signed main()
{ 
    FIO;
    test
        solve();
}
/*
print((19260817-264) % 233)
print(2344/4)
print(19%5-1)
1 3 10
1*3 = 3 k1 = a
1+10 = 11 *
3*3 = 9 * k1 = a*a
3+ 10= 13 * 
11*3 = 33 k2*a
11+10 = 21 k2+b
9*3 = 27 k1 = a*a*a
9+4 = 9
27*3 = 81
9+4 = 13

3 5

3 6

9 8
18 11

27 14
24 13
54 23
33 16

81 30
42 19
72 27
39 42
162 59
69 28

6 8 11 13 14 16 19 23 27 28 30
6 - 1+5
8 - 3+5
11 - 1+5+5, 3+5+3
13 - 3+5+5
14 - 3*3+5
16 - 1+5+5+5
19 - 3*3 + 2*5
24 - 3*3 + 3*5
54 - (5+1)*3*3
20 - 3*5 + 1*5......but not in set
a^x + b*y = n
b*y = n - a^x
*/
