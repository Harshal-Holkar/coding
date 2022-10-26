#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a, b, c, d, product, p2;
    cin >> a >> b >> c >> d;
    product = a*b;
    a++; b++;
    for(int i = a; i <= c; i++){
        for(int j = b; j <= d; j++){
            // cout << i << " " << j << " " << a << " " << b << " " << c << " " << d << endl;
            p2 = i*j;
            // cout << p2 << " ** " << product << endl;
            if(!((p2) % (product))){
                cout << i << " " << j << endl;return;
            }
        }
    }
    cout << -1 << " " << -1 << endl;
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