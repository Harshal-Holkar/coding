#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << "YES" << endl;
        return;
    }
    int a = max(x, y);
    int b = min(x, y);
    if (a % b != 0)
    {
        cout << "NO" << endl;
        return;
    }
    a = a / b;
    b = 1;
    for (int i = 1; i < 32; i++)
    {
        b *= 2;
        if (b == a)
        {
            cout << "YES" << endl;
            return;
        }
    }
    {
        cout << "NO" << endl;
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}