#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k, m, count = 0;
    cin >> n >> m >> k;
    vector<int> v;
    int arr[m+1];
    for (int i = 0; i <= m; i++)
    {
        cin >> arr[i];
    }
    
    int t = arr[m];
    while(t){
        v.push_back(t%2);
        t /= 2;
    }
    for(int i = 0; i < m ; i++){
t = 0;
        int j = 0;
        while (arr[i] && j < v.size())
        {
            if(arr[i]%2 != v[j]) t++;
            arr[i] /= 2;
            j++;
        }
        while(arr[i]){
            t++; arr[i]/=2;
        }
        t += (v.size()-j);
        if(t <= k) {count++; cout << i << endl;  }     
        cout << t << " " << k << endl;
    }
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