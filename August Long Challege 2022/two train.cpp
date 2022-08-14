#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, minTime = 0, maxTime = 0;
        cin >> n;
        ll distanceArr[n];
        for (ll i = 0; i < n - 1; i++)
        {
            cin >> distanceArr[i];
            minTime += distanceArr[i];
            maxTime = max(maxTime, distanceArr[i]);
        }
        cout << minTime + maxTime << endl;
    }
    return 0;
}