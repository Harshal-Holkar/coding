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
        ll n, x, y, temp;
        cin >> n >> x >> y;
        ll vect[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> vect[i];
        }
        priority_queue<ll, vector<ll>, greater<ll>> pq1(vect, vect + n);

        while (y > 0)
        {
            ll tp = pq1.top();
            if ((tp ^ x) > tp)
            {
                pq1.pop();
                pq1.push(tp ^ x);
                y--;
            }
            else
            {
                if ((y % 2) == 0)
                    break;
                else
                {
                    pq1.pop();
                    pq1.push(tp ^ x);
                    break;
                }
            }
        }

        while (pq1.empty() == false)
        {
            cout << pq1.top() << " ";
            pq1.pop();
        }
        cout << endl;
    }
    return 0;
}
