#include <bits/stdc++.h>
using namespace std;
#define ll long long

int isdiv(int n){
    int ans = 0;
    while( !(n % 2)){
        ans ++;
        n /= 2;
    }
    return ans;
}

void solve(){
    int n, curr = 0, ans = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    ll pro = 1;
    vector<int> v;
    for(int i = 0; i < n; i++) {cin >> arr[i]; pro *= arr[i]; curr += isdiv(arr[i]);}
    if(curr < n) 
    {
        for(int i = 1; i <= n; i++){
            if(!(i%2)) v.push_back(isdiv(i));
        }
        sort(v.begin(), v.end());
        int z = v.size();
        z--;
        while (curr <= n){
            if(z < 0){
                cout << -1 << endl;
                return;
            }
            curr += v[z];
            ans ++;
            z--;
        }

        cout << ans << endl;
        return;
        
    }


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