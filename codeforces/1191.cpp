#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << 0 << endl;
        return;
    }
    if (a == b || b == c || a == c)
    {
        cout << 1 << endl;
        return;
    }

    if (b > a)
        swap(a, b);
    if (c > a)
        swap(c, a);
    if (c > b)
        swap(c, b);

    if (a[1] == b[1] && b[1] == c[1])
    {
        if (a[0] - b[0] == 1 && b[0] - c[0] == 1)
        {
            cout << 0 << endl; return;
        }
    }

    if (a[1] == b[1])
    {
        if (a[0] - b[0] == 1 || a[0] - b[0] == 2)
        {
            cout << 1 << endl;return;
        }
    }

    if (a[1] == c[1])
    {
        if (a[0]-c[0]==1 || a[0] - 2 == c[0])
        {
            cout << 1 << endl;return;
        }
    }

    if (b[1] == c[1])
    {
        if (b[0] - c[0] == 1 || b[0] - c[0] == 2)
        {
            cout << 1 << endl;return;
        }
    }
    cout << 2 << endl;return;
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