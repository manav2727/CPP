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

ll facto[1000001];

unsigned long long power(unsigned long long x,
								int y, int p)
{
	unsigned long long res = 1; // Initialize result

	x = x % p; // Update x if it is more than or
	// equal to p

	while (y > 0)
	{
	
		// If y is odd, multiply x with result
		if (y & 1)
			res = (res * x) % p;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % p;
	}
	return res;
}

// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n,
											int p)
{
	return power(n, p - 2, p);
}


ll nCr(ll n,ll r)
{
	if (n < r)
		return 0;

	if (r == 0)
		return 1;

	return (facto[n] * modInverse(facto[r], mod) % mod
			* modInverse(facto[n - r], mod) % mod)
		% mod;
}

void LetsSolveIt(){
    vars(s)
    ll temp2 = 0,ans=0,mainAns = 1;
    ll n = s.length(),f;

    for(ll i=0;i<n;i++){
        if(s[i] == 'w' || s[i] == 'm'){
            cout<<0;
            return;
        }
    } 

    for(ll i=0;i<n;i++){
        f=0;
        while(i<n && s[i] == 'u'){
            temp2++;
            i++;
            f=1;
        }
        if(f){
            f=0;
            if(temp2>=2){
                ll l=temp2,r=0;
                while(l>=r){
                    ans = (ans + nCr(l,r))%mod;
                    l--,r++;
                }
                // cout<<ans<<" "<<i<<"\n";
                mainAns = mainAns*ans%mod;
                ans = 0;
            }
            i--;
            temp2=0;
        }
        
        while(i<n && s[i] == 'n'){
            temp2++;
            i++;
            f=1;
        }
        if(f){
            f=0;
            if(temp2>=2){
                ll l=temp2,r=0;
                while(l>=r){
                    ans = (ans + nCr(l,r))%mod;
                    l--,r++;
                }
                // cout<<ans<<" "<<i<<"\n";
                mainAns = mainAns*ans%mod;
                ans = 0;
            }
            i--;
            temp2=0;
        }
    }
    cout<<mainAns<<"\n";
}


signed main(){ 
    FIO;
    facto[0] = 1;
 
    for(int i = 1; i <= 1000001; i++) {
        facto[i] = (facto[i - 1] * i) % mod;
    }
    // test
        LetsSolveIt();
}


