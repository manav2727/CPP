#include<bits/stdc++.h>
using namespace std;

// DECLARATIONS
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
#define test            ll t;cin>>t;while(t--)
#define var(n)          ll n;cin>>n;
#define vars(s)         string s;cin>>s;
#define inp(a,n)       vll a(n);for(ll i = 0;i<n;i++) cin>>a[i];
#define pqs             priority_queue<ll,vll,greater<ll> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define dec(x)         cout<<fixed<<setprecision(x)<<endl;
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


//USEFUL FUNCTIONS
bool isPrime(ll n){if(n <= 1)return false;if(n <= 3)return true;if(n%2 == 0 || n%3 == 0)return false;for(ll i=5; i*i<=n; i=i+6)if(n%i == 0 || n%(i+2) == 0)return false;return true;}
ll nextPrime(ll N){if(N<=1)return 2;ll prime = N;bool found = false;while(!found){prime++;if(isPrime(prime))found=true;}return prime;}
ll cl(ll n,ll d){return (n+d-1)/d;} 
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b){return (a*b)/(gcd(a,b));}
void print(vll a){for(auto i : a)cout<<i<<" ";"\n";}
void printr(vll a,ll start,ll end){for(ll i =start;i<end;i++)cout<<a[i]<<' ';"\n";}
void print(ll a,ll b){cout<<a<<' '<<b<<' ';}
ll madd(ll a,ll b){return ((a%mod)+(b%mod))%mod;}
ll mmul(ll a,ll b){return ((a%mod)*(b%mod))%mod;}
ll msub(ll a,ll b){return ((a%mod)-(b%mod)+mod)%mod;}
ll fpow(ll x,ll y,ll p=mod){x%=p;ll sum = 1;while(y){if (y & 1)sum = sum * x; sum %= p; y = y >> 1; x = x * x; x %= p;} return sum;}
bool isPerSquare(long double a) {if(a<0) return false; ll sr = sqrt(a); return (sr*sr == a);}
string bin(ll n) {return bitset<64> (n).to_string();}
ll countBits( ll number) { return (ll)log2(number)+1;}
bool is(string temp){char c = temp[0]; string s((temp).size(),c); return s<=temp;}
// void facto() {fact[0]=1;fact[1]=1;for(int i=2;i<1000006;i++)fact[i]=(fact[i-1]*i)%mod;}
// string(1,char(i))+char(j))....to concatenate 2 or more characters using ascii
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57

// For a string of length n, max possible combinations of substring of length 2 will be = (n)+(n-1)
// i.e. = 1999(max), and we have max combinations - 26*26 = 726 < 1999
// if we take 3 as the length of substring, = 2997(n+(n-1)+(n-2)), and combinations = 26*26*26 = 17,576
// Therfore we will get answer of 3 chars in worts cases also


void solve(){
    var(n)
    vars(s)
    mcll m;
    for(ll i=0;i<n;i++){
        m[s[i]]++;
    }
    ll x=97;
    for(auto &i:m){
        if(char(x) != i.first)
        {
            cout<<char(x)<<"\n";
            return;
        }
        x++;
    }
    if(x<123){
        cout<<char(x)<<"\n";
        return;
    }
    for(ll i=97;i<123;i++){
        for(ll j=97;j<123;j++){
            string s1 = string(1,char(i))+char(j);
            /*string s1="";
            s1 += char('a'+i); ....where i=0 to i=25
            s1 += char('a'+j); ....where j=0 to j=25*/
            ll f=0;
            for(ll k=0;k<n-1;k++){
                if(s1 == string(1,s[k])+char(s[k+1])){
                    f=1;
                    break;
                }
            }
            if(f==0){
                cout<<s1<<"\n";
                return;
            }
        }
    }
    for(ll h=97;h<123;h++){
        for(ll i=97;i<123;i++){
            for(ll j=97;j<123;j++){
                string s1 = string(1,char(h))+char(i)+char(j);
                ll f=0;
                for(ll k=0;k<n-2;k++){
                    if(s1 == string(1,s[k])+char(s[k+1])+char(s[k+2])){
                        f=1;
                        break;
                    }
                }
                if(f==0){
                    cout<<s1<<"\n";
                    return;
                }
            }
        }
    }
}



signed main()
{ 
    FIO;
    test
        solve();
}