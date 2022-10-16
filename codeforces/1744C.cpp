#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, ans = 0;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    if (c == 'g')
    {
        cout << ans << endl; return;
    }
    s += s;
    int x = 0, r;
    for (int i = 0; i < 2*n; i++)
    {
       if(s[i] == c && x == 0) {
        x = 1; r = i;
       }
       if(s[i] == 'g' && x == 1){
        x = 0; ans = max(ans, (i-r));
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