#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {for(int j = 1; j <= i; j++){
        if(j == 1 || j == i) cout << 1 << " ";
        else cout << 0 << " ";
    }cout << endl;}
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