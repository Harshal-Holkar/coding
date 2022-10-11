#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string a, b;
    cin >> a >> b;
    int h = a.size(), m = b.size();
    if (a == b)
        cout << "=" << endl;
    else if (a[h - 1] == 'S')
    {
        if (b[m - 1] == 'M' || b[m - 1] == 'L')
            cout << "<" << endl;
        else if (b[m - 1] == 'S')
        {
            if (h > m)
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
    }
    else if (a[h - 1] == 'M')
    {
        if (b[m - 1] == 'S')
            cout << ">" << endl;
        else
            cout << "<" << endl;
    }
    else if (a[h - 1] == 'L')
    {
        if (b[m - 1] == 'M' || b[m - 1] == 'S')
            cout << ">" << endl;
        else if (b[m - 1] == 'L')
        {
            if (h < m)
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
    }
    return;
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