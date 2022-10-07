#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,x; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
        
    vector<ll> v1, v0, v;
    
    for (int i = 0; i < n; i++) {cin >> x; v.push_back(x); }

    
    for (int i = 0; i < n; i++) 
        {

        if (arr[i])
        {
            v1.push_back(v[i]);
            cout << 1 ;
        }
        else
        {cout << 0;
          v0.push_back(v[i]);
        }
        }
        cout << "%";

        if(v0.size()) sort(v0.begin(),v0.end());
        if(v1.size()) sort(v1.begin(),v1.end());

        int i = v1.size(), j = v0.size();
        ll ans1 = 0;
        while( i > 0 && j > 0){ans1+= 2*(v0[j-1] +v1[i-1]); i--; j--;}
        while( i > 0 ){ans1+= v1[i-1]; i--;}
        while( j > 0 ){ans1+= v0[j-1]; j--;}
        if(i == j) ans1 -= min(v1[0], v0[0]);

        cout << ans1 << endl;
        
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

// 1
// 4
// 1 1 1 1
// 1 10 100 1000