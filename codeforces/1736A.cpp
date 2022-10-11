#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, a0 = 0, a1 = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];

    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]){
            if(a[i] == 1) a0++;
            else a1++;
        }
    }

    int ans = abs(a0-a1);
    if(ans != max(a0, a1)) ans++;
    // ans += min(a0, a1);
    cout << ans << endl;
    

    
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