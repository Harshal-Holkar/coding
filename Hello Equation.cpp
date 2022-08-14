#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool checker(ll n){
    for (ll i = 2; i*i <= n; i++) {
        if(n%i == 0) return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
      ll x ; 
    cin >> x;
    x+= 4;
    if(x < 9) cout << "NO"<<endl;
    else if(x%2 == 0){
        if(!checker(x/2)) cout << "yes"<<endl;
        else cout << "no"<<endl;
    }
    else{
        if(!checker(x)) cout << "yes"<<endl;
        else cout << "no"<<endl;
    }
    }
    return 0;
}
