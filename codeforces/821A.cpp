#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n = 5, k, mx;
    cin >> n >> k;
    int arr[n+1]{0};
    for(int i = 1; i <= n; i++)
    {cin >> mx;
     arr[i%k] = max(mx, arr[i%k]);}
     mx = 0;
     for(auto i : arr)mx += i;
     cout << mx << endl;

}
int32_t main()
{
int t=1;
 cin >> t;
while(t--){
solve();
}
 return 0;
}