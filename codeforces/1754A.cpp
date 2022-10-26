#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for(auto i : s){
        if(i == 'Q') ans ++;
        if( i == 'A') ans --;
        if(ans < 0) ans = 0;
    }
    if(ans) cout << "NO"<< endl;
    else cout << "YES" << endl;
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