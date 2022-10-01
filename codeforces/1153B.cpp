#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, m, h;
    cin >> n >> m >> h;
    int a1[m], a2[n], a[n][m];

    for (int i = 0; i < m; i++)
    {
        cin >> a1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << min(a2[i],a1[j])*a[i][j] << " ";
        }    
        cout << endl;    
    }   
    return;    
}
int main()
{
     int t=1;
    //  freopen("i.txt", "r", stdin);
    //  freopen("o.txt", "w", stdout);
    //  cin >> t;
     while(t--){
     solve();
     }
 return 0;
}