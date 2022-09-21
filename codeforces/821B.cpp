#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, x , y;
    cin >> n >> x  >> y;
    if( max(x, y) == 0 || min(x, y) != 0){
        cout << -1 << endl;
        return;
    }
    y = max(x, y);
    if((n-1)%y != 0){
        cout << -1 << endl;
        return;
    }
    std::vector<int> v;
    for (int i = 2; i <= n; i+= y)
    {
        for(int j = 0; j < y; j++) v.push_back(i);
    }

    for(auto i : v) cout << i << " ";
    cout << endl;
    
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