#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   ll n;
   cin >> n;
   ll arr[n];
   bool odd = 0, even = 0;
   for(int i = 0;i < n; i++){
    cin >> arr[i];
    if(arr[i]%2) odd = 1;
    else even = 1;
   } 
//    n = sizeof(arr)/sizeof(arr[0]);
   if(odd && even) sort(arr, arr+n);
   for(int i = 0; i < n; i++ ){
    cout << arr[i] << " ";
   }
   cout << endl;

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