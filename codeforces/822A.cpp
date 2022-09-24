#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,x;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll mi = INT_MAX, mn = INT_MAX, temp;
    for(int i = 0; i < n-2; i++){
            mn = min(mn,v[i+2]-v[i]) ;
            mi = min(mi, min(mn, min(2*v[i+2]-v[i+1]-v[i], v[i+2]+v[i+1]-2*v[i])));        
    }
    cout << mi << endl;
    return;
    
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