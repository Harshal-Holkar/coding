#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, x, y, count = 0;
    cin >> n >> x >> y;
    int p[n+1];
    bool vis[n+1]{0};
    // x--;y--;
    for(int i = 0; i < n; i++) {cin >> p[i];}
    while(x!=y){
        if(vis[x]){
            cout << -1 << endl;
            return;
        }
        vis[x] = true;
        count++;
        x--;
        x = p[x];
    }
    cout << count << endl;
    return;
}
int main()
{
    // freopen("i.txt","r",stdin);
    // freopen("o.txt","w",stdout);
int t=1;
//  cin >> t;
while(t--){
solve();
}
 return 0;
}