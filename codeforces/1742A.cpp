#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
  vector<int> v;
  for(int i = 0; i < 3; i++) {
    int x; cin >> x; v.push_back(x);
  }
  sort(v.begin(), v.end());

    if(v[0]+v[1] == v[2]) cout << "Yes" << endl;
    else cout << "No" << endl;
    
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