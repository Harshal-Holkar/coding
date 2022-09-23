#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, x, flag = 0;
    cin >> n >> x;
    vector<ll> a;
    for(int i = 0; i < n; i++){
        int p;
        cin >> p;
        a.push_back(p);
    }
    vector<ll> z;
    z = a;
    sort(z.begin(),z.end());
    for(int i = n-x; i < x; i++) if(z[i] != a[i]) {flag = 1; break;}
    if(flag == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
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