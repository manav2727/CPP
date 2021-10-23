#include<bits/stdc++.h>
using namespace std;


typedef long long  ll;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef std::vector<ll> vll;
typedef std::vector<int> vii;
typedef std::vector<char> vcll;
typedef std::vector<string> vsll;
typedef std::vector<pll> vpll;
typedef std::vector<vll> vvll;
typedef map<ll,ll> mll;
typedef map<char,ll> mcll;
typedef map<ll,pll> mpll;
typedef set<ll> sll;



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


bool isPrime(ll n){if(n <= 1)return false;if(n <= 3)return true;if(n%2 == 0 || n%3 == 0)return false;for(ll i=5; i*i<=n; i=i+6)if(n%i == 0 || n%(i+2) == 0)return false;return true;}
ll nextPrime(ll N){if(N<=1)return 2;ll prime = N;bool found = false;while(!found){prime++;if(isPrime(prime))found=true;}return prime;}

ll cl(ll n,ll d){return (n+d-1)/d;} 
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b){return (a*b)/(gcd(a,b));}

ll madd(ll a,ll b){return ((a%mod)+(b%mod))%mod;}
ll mmul(ll a,ll b){return ((a%mod)*(b%mod))%mod;}
ll msub(ll a,ll b){return ((a%mod)-(b%mod)+mod)%mod;}
ll fpow(ll x,ll y,ll p=mod){x%=p;ll sum = 1;while(y){if (y & 1)sum = sum * x; sum %= p; y = y >> 1; x = x * x; x %= p;} return sum;}
bool isPerSquare(ld a) {if(a<0) return false; ll sr = sqrt(a); return (sr*sr == a);}

string bin(ll n) {return bitset<64> (n).to_string();}
ll countBits( ll number) { return (ll)log2(number)+1;}
bool is(string temp){char c = temp[0]; string s((temp).size(),c); return s<=temp;}

void print(vll a){for(auto i : a)cout<<i<<" ";"\n";}

// string(1,char(i))+char(j))....to concatenate 2 or more characters using ascii
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57


void LetsSolveIt(){
    var(n)
    multiset<ll> m1,m2;
    if(n%4 == 0){
        cout<<"YES\n";
        for(ll i=1;i<=(n/2)/2;i++){
            m1.insert(i);
             m1.insert(n-i+1);
            // cout<<i<<" "<<n-i+1<<" ";
        }
        for(ll i=(n/2)/2+1;i<=n/2;i++){
            m2.insert(i);
             m2.insert(n-i+1);
            // cout<<i<<" "<<n-i+1<<" ";
        }
        for(auto &i:m1){
            cout<<i<<" ";
        }
        cout<<"\n";
        for(auto &i:m2){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<"NO\n";
    }
}


signed main(){ 
    FIO;
    test
        LetsSolveIt();
}