// #include<bits/stdc++.h>
// using namespace std;
// #define int long long;
// const int mod = 1000000007;

// int32_t main(){
// int m, n, a, b;
// cin >> m >> n>> a >> b;
// int z = max(m,n)+1;
// int ** dp = new int*[z];
// for(int i = 0; i < z ;i++){
//     dp[i] = new int[z];
// }
// for (int i = 0; i < m; i++)
// {
//     for(int j = 0; j < n; j++){
//         if(i >= (m-a) && j < b) continue;
//         if(i == 0 || j == 0) dp[i][j] = 1;
//         else{
//             dp[i][j] = dp[i-1][j]+dp[i][j-1];
//         }
//     }
// }

// cout << dp[m][n];

//     return 0;
// }



 #include<bits/stdc++.h>
using namespace std;
long long mod = 1000000007;

long long cal(int a , int b){
    // need to cal (a+b-2)C(min(b-1))
    long long product = 1;
    int mn = min(a, b) - 1;
    int mx = a + b - 2;
    for(int i = 0 ; i <= mn; i++){
        product = ((product%mod)*((mx+1-i)%mod)/i)%mod;
    }
    return product;
}

int main (){
    int m = 100000;
    int** z = new int*[m];
 
    for (int i = 0; i < m; i++) { 
        // Declare a memory block
        // of size n
        z[i] = new int[m];
    }

    int r , c , a , b;
    cin >> r >> c >> a >> b;
    m = max(r, c);
    for(int i = 1 ; i <= m; i++){
        for(int j = i; j <= m; j++){
            long long y = cal(i, j);
            z[i][j] = y;
            z[j][i] = y;
        }
    }
    long long ans = z[r][c];
    for(int i = 1; i <= a; i++){
            ans -= z[r-a+i][b]*z[i][c-b+1];
    }
    cout << ans << endl;

}