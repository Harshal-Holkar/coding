#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fact(int n)
{
    if (n < 2)
        return 1;
    return n * fact(n - 1);
}

void solve()
{
    ll n, r = 0, l = 0, z = 0, ans = 0;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    while (r < n && l < n && z < n)
    {
        if (arr[z] >= (r - l + 1))
        {
            r++;
            z++;
        }
        else
        {
            if (r - l == 2)
                ans += 3;
            else
            {
                ans += fact(r - l);
            }
            l = r;
            // z++;
        }

        // cout <<"arr[z] = "<< arr[z] << "; r = " << r  << "; l = " << l  << "; ans = " << ans << endl;
    }
    if (r >= l)
    {
        if (r - l == 2)
            ans += 3;
        else
        {
            ans += fact(r - l);
        }
    }

    cout << ans << endl;
}
int main()
{
    int t = 1;
    // freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}