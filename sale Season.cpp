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
        ll n;
        cin >> n;
        if (n > 5000)
            cout << n - 500 << endl;
        else if (n > 1000)
            cout << n - 100 << endl;
        else if (n > 100)
            cout << n - 25 << endl;
        else
            cout << n << endl;
    }
    return 0;
}