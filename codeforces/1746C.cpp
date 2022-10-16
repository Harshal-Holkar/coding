#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    int arr[n], ans[n+1];
    unordered_map<int, int> mp;
    for(int i = 1; i <= n; i++) ans[i] = 1;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n-1; i++) if(arr[i] > arr[i+1]){
        int z = arr[i]-arr[i+1] + 1;
        if(mp.find(z) == mp.end()){
            mp[z]++;
        ans[(z) ] = i+2; 
        }else{
            while (mp.find(z) != mp.end())
            {
                z++;
            }
            if(z <= n) ans[z] = i+2;            
        }
        // cout << i+2 << "* ";
    }
    for(int i = 1; i<= n; i++) cout << ans[i] << " ";
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