#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> vect[10001];
bool flag = 1;

int dfs(int i){
    if(vect[i].size() == 0) return 1;
    int children = 0;
    for(auto j : vect[i]){
        children += dfs(j);
    }
    if(children < 3) flag = 0;
    return 0;
}

void solve(){
    int n,x;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        vect[x].push_back(i+1);
    }
    dfs(1);

    if(flag == 0) cout << "NO" << endl;
    else cout << "Yes" << endl;
    
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