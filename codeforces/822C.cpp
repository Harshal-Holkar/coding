#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    string st;
    cin >> st;
    unordered_map<ll, ll> mp1; // present
    unordered_map<ll, ll> mp2; // toDelete
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '1')
            mp1[i + 1] = i + 1;
        else
        {
            mp2[i + 1] = i + 1;
        }
    }
    
    // for (auto i : mp1) {
    //     cout << i.first << " " << i.second << " => ";
    // }cout << endl;
    // for (auto i : mp2) {
    //     cout << i.first << " " << i.second << " => ";
    // }cout << endl;
    
    ll count = 0;
    for (int i = 1; i <= n; i++)
    {
        ll x = i;
        for (int j = 1; j*i <= n; j++)
        { x = j*i;
            if (mp1.find(x) == mp1.end())
            {
                if(mp2.find(x) != mp2.end())
                {mp2.erase(x);
                count += i;}
                // break;
            }
            else { 
                // cout << "(" << i << " " << j << ")" << ", ";
                break;}
        }
    }
    // cout << endl;
    // for (auto i : mp1) {
    //     cout << i.first << " " << i.second << " => ";
    // }cout << endl;
    // for (auto i : mp2) {
    //     cout << i.first << " " << i.second << " => ";
    // }cout << endl;

    cout << count << endl;
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