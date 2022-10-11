#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, sum = 0, mx = n, j = 0, sum1 = 0,sum2;
    cin >> n;
    ll arr[n];
    for(int i = 0; i< n; i++) {cin >> arr[i]; sum += arr[i];}
    while(j < n){
        sum1 += arr[j];
        if( sum != sum1 && (sum%sum1) == 0){
            ll l=j, r=j;sum2 = 0;
            mx = j+1;
            while (r < n)
            {
               sum2 += arr[r];
                // cout << sum1 << " " << sum2 << " -> " ;
                if(r==(n-1)){
                    if(sum2 == sum1){
                        mx = max(mx,(r-l));
                        break;
                    }
                }
               if(sum2 == sum1){
                mx = max(mx,(r-l));
                l=r;
                sum2 = 0;
               }
               r++;
            //  cout << mx << "* ";
            }
            if((sum2 != sum1)){
                mx = n;
            } 
            //  cout << mx << " ";           
        }
        j++;
    }

    cout << mx << endl;

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