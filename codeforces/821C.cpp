#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << n - 1 << endl;
    
    if(n == 1) return;

    if(arr[0]%2 == arr[n-1]%2) arr[0] = arr[n-1];
    else {arr[n-1] = arr[0];}
    cout << 1 << " " << n << endl;

    for (int i = 1; i < n-1; i++)
    {
        if(arr[0]%2 != arr[i]%2)
        cout << 1 << " " << i+1 << endl;
        else{cout << i+1 << " " << n << endl;}
    }
    
    
}
int main()
{
int t=1;
 cin >> t;
while(t--){
solve();
}
 return 0;
}