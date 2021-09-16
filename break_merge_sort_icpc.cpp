#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <random>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define iterate(x) for(auto itr=x.begin(); itr != x.end(); ++itr)
ll myceil(ll a,ll b) { if(a%b == 0) return a/b; else return a/b+1; }
bool isPerSquare(long double a) {if(a<0) return false; ll sr = sqrt(a); return (sr*sr == a);}
 
 

vector<ll> vec[100001];
 
void solve(){
    ll n,m,a,b,c,d;
    string s;

    cin >> n;

    forn(i,n)
    {
        cin >> a;

        vector<ll> temp;

        forn(j,a)
        {
            cin >> b; temp.push_back(b);
        }
        vec[i] = temp;
    }

    //forn(i,n) {for(auto j:vec[i]) cout << j << " "; cout << endl;}

    multiset<ll> ans;

    ll val = 0;

    forn(i,n)
    {
        ll k = 1;
        ll siz = 1;
        deque<ll> dq;

        while(k < vec[i].size())
        {
            if(vec[i][k] >= vec[i][k-1]) {k++; siz++;}
            else
            {
                dq.push_back(siz);
                siz = 1;
                k++;
            }
        }
        dq.push_back(siz);

        while(dq.size() > 1)
        {
            if(dq.front() > dq.back())
            {
                

                val += dq.back();
                ans.insert(dq.back());

                dq.pop_back();
            }
            else
            {
                //cout << dq.front() << endl;

                val += dq.front();
                ans.insert(dq.front());

                dq.pop_front();
            }
        }
        ans.insert(dq.front());

    }

    //cout << ans.size() << endl;

    while(ans.size() > 1)
    {
        ll p = *ans.begin();
        ans.erase(ans.begin());

        p += *ans.begin();
        ans.erase(ans.begin());

        val += p;

        ans.insert(p);
    }

    cout << val << "\n";

    forn(i,n) vec[i].clear();


}
int main()
{
 fast_cin();
 ll t = 1;
 cin >> t;
 for(int it=1;it<=t;it++) {
     //cout << "Case #" << it+1 << ": ";
     solve();
 }
 return 0;
}