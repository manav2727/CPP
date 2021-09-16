// #include<bits/stdc++.h>
// using namespace std;
// //DATATYPES AND DATASTRUCTURES DECLARATION
// typedef long long  ll;
// typedef long double ld;
// typedef pair<ll,ll> pll;
// typedef std::vector<ll> vll;
// typedef std::vector<int> vii;
// typedef std::vector<pll> vpll;
// typedef std::vector<vll> vvll;
// typedef map<ll,ll>mll;
// typedef map<char,ll>mcll;
// typedef map<ll,pll>mpll;
// typedef set<ll> sll;
// // int fact[1000006]={0};

// //USEFUL MACROS
// #define int long long
// #define test            ll t;cin>>t;while(t--)
// #define var(n)          ll n;cin>>n;
// #define vars(s)         string s;cin>>s;
// #define inp(a,n)        ll a[n];for(ll i = 0;i<n;i++) cin>>a[i];
// #define inpv(a,n)       vll a(n);for(ll i = 0;i<n;i++) cin>>a[i];
// #define sz(a)           a.size()
// #define loop(i,a,n)     for(ll i=a;i<n;i++)
// #define loopr(i,a,n)    for(ll i =n-1;i>=a;i--)
// #define nl              cout<<endl;
// #define printarr(a)     for(auto i : a) cout<<i<<' ';nl;
// #define F               first
// #define S               second
// #define pb              push_back
// #define pqs             priority_queue<ll,vll,greater<ll> >
// #define setbits(x)      __builtin_popcountll(x)
// #define mod             1000000007
// #define inf             1e18
// #define dec(x)         cout<<fixed<<setprecision(x)<<endl;
// #define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define minArr(a)       *min_element(arr(a))
// #define minVec(a)       *min_element(vec(a))
// #define maxArr(a)       *max_element(arr(a))
// #define maxVec(a)       *max_element(vec(a))


// //USEFUL FUNCTIONS
// bool isPrime(ll n){if(n <= 1)return false;if(n <= 3)return true;if(n%2 == 0 || n%3 == 0)return false;for(ll i=5; i*i<=n; i=i+6)if(n%i == 0 || n%(i+2) == 0)return false;return true;}
// ll nextPrime(ll N){if(N<=1)return 2;ll prime = N;bool found = false;while(!found){prime++;if(isPrime(prime))found=true;}return prime;}
// ll cl(ll n,ll d){return (n+d-1)/d;} 
// ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
// ll lcm(ll a,ll b){return (a*b)/(gcd(a,b));}
// void print(pll a){cout<<a.F<<' '<<a.S<<' ';nl;}
// void print(ll a){cout<<a<<' ';nl}
// void print(vll a){for(auto i : a)cout<<i<<' ';nl;}
// void print(string s){cout<<s<<' ';nl;}
// void printr(vll a,ll start,ll end){for(ll i =start;i<end;i++)cout<<a[i]<<' ';nl;}
// void print(ll a,ll b){cout<<a<<' '<<b<<' ';}
// ll madd(ll a,ll b){return ((a%mod)+(b%mod))%mod;}
// ll mmul(ll a,ll b){return ((a%mod)*(b%mod))%mod;}
// ll msub(ll a,ll b){return ((a%mod)-(b%mod)+mod)%mod;}
// ll fpow(ll x,ll y,ll p=mod){x%=p;ll sum = 1;while(y){if (y & 1)sum = sum * x; sum %= p; y = y >> 1; x = x * x; x %= p;} return sum;}
// bool isPerSquare(long double a) {if(a<0) return false; ll sr = sqrt(a); return (sr*sr == a);}
// // void facto() {fact[0]=1;fact[1]=1;for(int i=2;i<1000006;i++)fact[i]=(fact[i-1]*i)%mod;}
// string bin(ll n) {return bitset<64> (n).to_string();}
// ll countBits( ll number) { return (ll)log2(number)+1;}
// bool is(string temp){char c = temp[0]; string s((temp).size(),c); return s<=temp;}

// // const ll N = 1e5+1;

// void solve(){
//     var(r)
//     for(ll j=0;j<r;j++)
//     {
//         var(n)var(x)
//         ll cnt=log2(n);
//         if(!cnt&1)
//             cnt--;
//         ll temp = pow(2,cnt),nos=0,g=0;
//         if(n%temp == 0 || n<=x)
//         {
//             cout<<1<<"\n";
//         }
//         else if((n%temp == 1 ) && x>0)
//         {
//             cout<<2<<"\n";
//         }
//         else
//         {
//             while(n%temp !=0 && n%temp != 1)
//             {
//                 if(n%temp <= x)
//                 {
//                     g=1;
//                     nos++;
//                     break;
//                 }
//                 n = n%temp;
//                 temp /= 4;
//                 nos++;
//             }
//             if(g)
//                 cout<<nos<<"\n";
//             else if(n%temp == 0 )
//             {
//                 cout<<nos<<"\n";
//             }
//             else if(n%temp == 1 && x>0)
//             {
//                 cout<<nos+1<<"\n";
//             }
//             else
//             {
//                 cout<<-1<<"\n";
//             }
            
//         }
//     }
    
    
    
// }



// signed main()
// { 
//     FIO;
//     //test
//         solve();
// }

#include<bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
    #define eprintf(...) fprintf(stderr, __VA_ARGS__);fflush(stderr);
#else
    #define eprintf(...) 42
#endif
 
#define endl '\n'
#define ll int64_t
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define yyy cout<<"YES\n"
#define nnn cout<<"NO\n"
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define T int t;cin >> t;while(t--)
 
 
const ll MAX = 1e7 + 7;
const ll mod = 1000000007;
ll xyp(ll x,ll y){if(y == 0) return 1LL;if(y == 1) return x;if(y % 2){ll p = xyp(x,y - 1);return (x * p) % mod;}ll p = xyp(x,y / 2);return (p * p) % mod;}
ll inv(ll x){return xyp(x,mod - 2);}
ll fact[MAX];void init(){fact[0] = 1;for(ll i = 1;i < MAX;i++){fact[i] = (fact[i - 1] * i) % mod;}}
ll ncr(ll n,ll r){if(r < 0 || n < 0) return 0LL;if(r == 0 || n == r) return 1LL;if(r == 1 || ((n - r) == 1)) return n;ll p = (((fact[n] * inv(fact[r])) % mod) * inv(fact[n - r])) % mod;return p;}
 
void read_arr(int a[],int n){
    FOR(i,0,n) cin>>a[i];
}
 
void write_arr(int a[],int n){
 
    FOR(i,0,n) cout<<a[i]<<" ";
    cout<<'\n';
}
 
 
 
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
 
 
 
clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

ll n,x;

int numberOfPowersOfTwo(ll n){
    if(n&1)
        n--;
    int res = 0;
    while(!(n&1)){
        n/=2;
        res++;
    }
    return res;
}


void solve(){
    cin>>n>>x;

    ll temp = n;
    
    int ans = 0;
    
    if(n<=x){
        cout<<1<<endl;
        return;
    }
    int last=0;
    while(temp>1){
        if(temp<=x)
            break;
        int power = (int)log2((double)temp);
        if(!(power&1))
            power--;
        temp-=(1<<power);
        last = 1<<power;
        // cout<<(1<<power)<<" ";
        ans++;
    }
    // cout<<endl;
    
    if(temp<=x && temp!=0){
        cout<<ans+1<<endl;
        return;
    }
    
    if(temp == 1 && x==0)
        cout<<-1<<endl;
    else if(temp==1 && last+1<=x)
        cout<<ans<<endl;
    else if(temp==1)
        cout<<ans+1<<endl;
    else
        cout<<ans<<endl;

}

 
 
int main(){

    // hello
 
    // startTime = clock();
    // #ifdef _DEBUG
    //     freopen("input.txt", "r", stdin);
    //     //    freopen("output.txt", "w", stdout);
    // #endif
    //     // init();



    T{
        solve();
    }
 
        // =================================== ****************===========================
 
    // }
}