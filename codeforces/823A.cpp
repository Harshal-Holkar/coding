#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, c;
    cin >> n >> c;
    unordered_map<int,int> mp;
    int x, count = 0;
    for(int i =0; i < n; i++){
        cin >> x;
        mp[x]++;
    }
    for(auto i : mp){
        // cout << i.first << " " << i.second << " **" << endl;
        if(i.second < c){
            count+= i.second;
        }
        else{
            count += c;
        }
    }
    cout <<  count << endl;
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