#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // cout << n << "\n"
    //      << s << "\n";
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    // cout << endl;
    ll curr = 0, prev = -1, ans = 0;
    while (curr < n)
    {
        if(s[curr] == '0') prev = curr;
        if (s[curr] == '1')
        {
            if ( arr[prev] >= arr[curr] && prev != -1)
            {
                ans += arr[prev];
                prev = curr;
            }
            else
            {
                ans += arr[curr];
            }
        }
        // cout << ans << " ";
            curr++;
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