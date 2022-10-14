#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, x, flag = 0;
    cin >> n;

    unordered_map<int,int> mp;

        cin >> x;
        mp[x]++;
    for(int i = 1 ; i < n; i++){
        cin >> x;
        if(mp.find(x) != mp.end()) flag = 1;
        else mp[x]++;
    }
    if(flag) cout << "No" << endl;
    else cout << "Yes" << endl;
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