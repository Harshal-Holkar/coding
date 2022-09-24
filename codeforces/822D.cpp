// incomplete 

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cal(ll i, ll j, ll max, vector<ll> v){
    if(i == 0 || j == v.size() - 1) return 1;
    if(max < 0) return 0;

    return cal(i-1,j,max+v[i],v) || cal(i,j+1,max+v[j],v);

}

void solve(){
    ll n, k, z;
    cin >> n >> k;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        cin >> z;
        v.push_back(z);
    }
    bool ans = cal(k, k, v[k], v);
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return;
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