#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    string st;
    cin >> st;
    int c1 = 0, c2 = 0, count = 0;
    for(auto i : st){
        if(i == '<') c1 = 1;
        else if(i == '>') c2 = 1;
    }
    if((c1 && c2) == 0){
        cout << n << endl;
        return;
    }
     for(auto i = 0; i < n; i++)   
     {
        if(st[i] == '-' || st[(i+1)%n] == '-') count++;
     }
     cout << count << endl;
     return;
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