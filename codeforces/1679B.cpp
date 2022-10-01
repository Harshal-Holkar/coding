#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, q, sum = 0, val = -1;
    cin >> n >> q;
    ll arr[n];
    unordered_map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    while (q--)
    {
        int z;
        cin >> z;
        if (z == 2)
        {
            ll val1;
            cin >> val1;
            sum = val1 * n;
            mp.clear();
            val = val1;
        }
        else if (z == 1)
        {
            ll x, val2;
            cin >> x >> val2;
            x--;
            if (val == -1)
            {
                if (mp.find(x) == mp.end())
                {
                    sum += val2 - arr[x];
                    mp[x] = val2;
                }
                else
                {
                    sum += val2 - mp[x];
                    mp[x] = val2;
                }
            }
            else
            {
                if (mp.find(x) == mp.end())
                {
                    sum += val2 - val;
                    mp[x] = val2;
                }
                else
                {
                    sum += val2 - mp[x];
                    mp[x] = val2;
                }
            }
        }
        cout << sum << endl;
    }
}
int main()
{
    int t = 1;
    // freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);
    //  cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}