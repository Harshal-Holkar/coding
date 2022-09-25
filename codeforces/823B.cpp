#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin >> s;
    int n = s.length();
    vector<int> ans;
    int z = 0;
    while(z < n){
        int sm = INT_MAX, ind = z;
        for(int i = z; i < n; i++){
            if(s[i] - '0' <= sm){
                sm = s[i] - '0';
                ind = i;
            }
        }
            for(int i = z; i <= ind; i++){
                if(s[i]-'0' == 9) ans.push_back(9);
                else if(s[i] - '0' == sm) ans.push_back(sm);
                else ans.push_back(s[i]-'0' + 1);
            }
            z = ind+1;
            // for(auto i : ans) cout << i << " "; cout << endl;
    }
    sort(ans.begin(), ans.end());
    string st = "";
    for (int i = 0; i < n; i++)
    {
        if(ans[i] == 0) st+="0";
        else if (ans[i] == 1) st+="1";
        else if (ans[i] == 2) st+="2";
        else if (ans[i] == 3) st+="3";
        else if (ans[i] == 4) st+="4";
        else if (ans[i] == 5) st+="5";
        else if (ans[i] == 6) st+="6";
        else if (ans[i] == 7) st+="7";
        else if (ans[i] == 8) st+="8";
        else if (ans[i] == 9) st+="9";
    }
    // z/=10;
    
    // st = to_string(z);
    
    cout << st << endl;

}
int main()
{
     int t=1;
     freopen("i.txt", "r", stdin);
     freopen("o.txt", "w", stdout);
     cin >> t;
     while(t--){
     solve();
     }
 return 0;
}