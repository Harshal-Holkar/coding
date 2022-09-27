#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     int n, s;
    //  freopen("i.txt", "r", stdin);
    //  freopen("o.txt", "w", stdout);
     cin >> n >> s;
     int ans = -1;
        int x, y;
     while(cin >> x >> y){        
     if(100*s >= 100*x + y) {ans = max(ans, (100-y)%100);}
     }
     cout << ans << endl;
 return 0;
}