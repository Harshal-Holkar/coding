#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, k;
    cin >> n>> k;
    ll x, mn = INT_MAX, mx = INT_MIN, first , last;
    for(int i = 0 ; i < n; i++){
        cin >> x;
        if(i == 0) first = x;
        if(i == n-1) last = x;
        if(x > mx) mx = x;
        if(x < mn) mn = x;
    }
    if(k == 1) cout << mn << endl;
    else if(k == 2) cout << max(first, last) << endl;
    else cout << mx << endl;
}
int main()
{
     int t=1;
    //  freopen("i.txt", "r", stdin);
    //  freopen("o.txt", "w", stdout);
    //  cin >> t;
     while(t--){
     solve();
     }
 return 0;
}


/*
    given array n, split into k, take minimum of k, take maximum of taken minimum

    if n < k then nothing, if k = 1 then overall min, else overall max
 */