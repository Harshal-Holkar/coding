#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, x,mx = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x <= 500000) mx = max(mx, x-1);
        else mx = max(mx, 1000000-x);
    }
    cout << mx << endl;
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