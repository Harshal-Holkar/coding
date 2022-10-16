#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) if(arr[i] == 1) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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