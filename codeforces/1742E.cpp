#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, q, mx = INT_MIN, mxIndex = 0, mxans = 0;
    cin >> n >> q;
    int arr[n];
    for(int i = 0; i< n; i++) cin >> arr[i];
    while(q--){
        ll step, ans = 0, z = 0, flag = 0; 
        cin >> step;
        if(step >= mx){
            mx = step;
            ans = mxans;
            z = mxIndex;
            flag = 1;
            if(z == n - 1) {
                cout << ans << " ";
                continue;
            }
        }
        for(int i = z; i < n; i++){
            if(step >= arr[i]) ans+= arr[i];
            else { z = i;break;}
        }
        if(flag = 1){
            mxIndex = z;
            mxans = ans;
        }
            cout << ans << " ";
    }
    cout << endl;
}
int main()
{
     int t=1;
     freopen("i.txt", "r", stdin);
     freopen("o.txt", "w", stdout);
     cin >> t;
     while(t--){
     solve();
     }
 return 0;
}