#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool gcd(ll a, ll b)
{
    for (int i = 2; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void solve()
{
    int n, x, mx = -1;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            if (gcd(v[j], v[i]) == 1)
            {
                mx = max(i+j+2, mx);
                // cout << gcd(v[j], v[i]) << " " <<  v[i] << " " << v[j] << endl;
            }
        }
    }

    cout << mx << endl;
}
int main()
{
    int t = 1;
    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}