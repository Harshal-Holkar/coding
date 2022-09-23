#include <bits/stdc++.h>
using namespace std;

int ct(int z){
    int ans = 0;
    while(z){
        z/=2;
        ans++;
    }
    return ans;
}

void solve(){
    long long n, k, m, count = 0;
    cin >> n >> m >> k;
    vector<int> v;
    long long arr[m+1];
    for (int i = 0; i <= m; i++)
    {
        cin >> arr[i];
    }
    
    int t = arr[m];
    for(auto i : arr){
        v.push_back(i^t);
    }
    for(auto i : v){
        t = 0;
    for(int j =0; j < n; j++) if(i&(1<<j)) t++;
    if(t <=k) count++;
    }
    if(count > 0) count--;
//     while(t){
//         v.push_back(t%2);
//         t /= 2;
//     }
//     for(int i = 0; i < m ; i++){
// t = 0;
//         int j = 0;
//         while (arr[i] && j < v.size())
//         {
//             if(arr[i]%2 != v[j]) t++;
//             arr[i] /= 2;
//             j++;
//         }
//         while(arr[i]){
//             t++; arr[i]/=2;
//         }
//         t += (v.size()-j);
//         if(t <= k) {count++;  }     
//         // cout << t << " " << k << endl;
//     }
    cout << count << endl;
}
int main()
{
int t=1;
//  cin >> t;
while(t--){
solve();
}
 return 0;
}