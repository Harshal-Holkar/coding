#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    cout << 3 * (10 - n) * ( 9 - n) << endl;
    int x;
    for(int i = 0; i < n; i++) cin >> x;
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