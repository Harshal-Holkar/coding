#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, x, mx = INT_MIN, mn = INT_MAX;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[x - 1] = i;
    }
    // string st = "";
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
        if (mx - mn == i)
            cout << 1;
        else
            cout << 0;
    }

    cout << endl;
}
int main()
{
    int t = 1;
    //  freopen("i.txt", "r", stdin);
    //  freopen("o.txt", "w", stdout);
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

