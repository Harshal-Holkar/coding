#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    if(n == 1 || n == 3) {
        cout << -1 << endl;
        return;
    }
    for(int i = 0; i < n; i++){
        if( i < n/2) cout << n - i << " ";
        else cout << i - (n/2) +1 << " ";
    }
    cout << endl;
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