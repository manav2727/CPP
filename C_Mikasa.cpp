#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll F;
    cin >> F;

    while (F--)
    {
        ll n, m, temp;
        vector<bool> v(1000000005, false);
        cin >> n >> m;
        ll arr[m];
        for (ll i = 0; i < m + 1; i++)
        {
            temp = n ^ i;
            v[temp] = true;
        }
        ll t = 0;
        while (v[t] == true)
        {
            t++;
        }
        cout << t << endl;
    }
}