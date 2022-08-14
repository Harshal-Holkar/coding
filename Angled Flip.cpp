#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
       ll n, m;
    cin >> n >> m;
    bool checker = 1;
    ll matrix1[n][m], matrix2[n][m];
    for (ll i = 0; i < n; i++) {
        for(ll j= 0; j < m; j++){
            cin >> matrix1[i][j];
        }
    }
    for (ll i = 0; i < n; i++) {
        for(ll j= 0; j < m; j++){
            cin >> matrix2[i][j];
        }
    }
    if(n == 1 || m == 1){
        if(n == 1){
            for (ll i = 0; i < m; i++) {
               if (matrix1[0][i] != matrix2[0][i]) {checker = 0; break;}
            }
            
        }
        else{
            for (ll i = 0; i < n; i++) {
               if (matrix1[i][0] != matrix2[i][0]) {checker = 0; break;}
            }
        }
        if(checker) cout << "YES" << endl;
        else cout << "NO" << endl;
        continue;
    }

    vector<int> matrix1odd;
    vector<int> matrix1even;
    vector<int> matrix2odd;
    vector<int> matrix2even;
    
    for (ll i = 0; i < n; i++) {
        for(ll j= 0; j < m; j++){
            if((i+j)&1) {matrix1odd.push_back(matrix1[i][j]); matrix2odd.push_back(matrix2[i][j]);}
            else {matrix1even.push_back(matrix1[i][j]); matrix2even.push_back(matrix2[i][j]);}
        }
    }
    
    sort(matrix1odd.begin(), matrix1odd.end());
    sort(matrix1even.begin(), matrix1even.end());
    sort(matrix2odd.begin(), matrix2odd.end());
    sort(matrix2even.begin(), matrix2even.end());
    
    if (matrix1odd != matrix2odd || matrix2even != matrix1even)
{
    checker = 0;
}
    
    if(checker) cout << "YES" << endl;
        else cout << "NO" << endl;
        }
        return 0;
    }
