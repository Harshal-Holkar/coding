#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ispov(ll n){
    for (ll i = 1; i <= n; i *= 2)
    {
        if( i == n) return 1;
    }
    return 0;    
}
void solve(){
    ll n, x, count = 0, diff = 1, i = 0;
    cin >> n;

queue<ll> q;
    for(int i = 0; i < n; i++){
        cin >> x;
    q.push(x);
    }
    // for(int i = 0; i < n; i++){
    //     x = q.front();
    //     cout << x << " ";
    //     q.pop();
    // q.push(x);
    // }

    if(n == 1) {
        cout << 0 << endl;
        return;
    }
i = 0;
    while(q.size() > 1){
        i++;
        if( i > n/2) {diff *= 2; n /= 2; i = 1;}
        ll first = q.front();
        q.pop();
        ll second = q.front();
        q.pop();
            // cout << n << " " << i << " " << diff << " " << first << " " << second << endl;
        if(abs(first-second) != diff){
            cout << -1 << endl;
            return;
        }
        if(first > second) count++;
        q.push(max(first, second));
    }

    cout << count << endl;
    return;
}
int main()
{
     int t=1;
    //  freopen("i.txt", "r", stdin);
    //  freopen("o.txt", "w", stdout);
     cin >> t;
     while(t--){
     solve();
     }
 return 0;
}