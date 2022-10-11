#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    bool flag = 0, flag2 = 0;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]) flag = 1;
    }
    for(int i = 0; i < n; i++){
        if(arr[i] < arr[i-1]) flag2 = 1;
    }

    if(flag == 1 && flag2 == 1) cout <<"No" << endl;
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