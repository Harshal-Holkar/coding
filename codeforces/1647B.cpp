#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    string st;
    for(int i = 0; i < n; i++){
        cin >> st;
        for(int j = 0; j< m; j++)arr[i][j] = st[j]-'0';
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if((arr[i][j] + arr[i+1][j] + arr[i][j+1] + arr[i+1][j+1]) == 3){
                cout << "No" << endl; return;
            }
        }        
    }
    cout << "Yes" << endl;
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