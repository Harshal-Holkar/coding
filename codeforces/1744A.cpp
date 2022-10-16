#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, flag = 0;
    cin >> n;
    int arr[n];
    string st;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> st;
    unordered_map<int, char> mp;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if( arr[i] == arr[j]){
                if(st[i] != st[j]){cout << "NO" << endl; return;}
            }
        }
    }
    cout << "YES" << endl;
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