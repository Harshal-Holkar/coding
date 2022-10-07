// Incomplete

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string st, ans = "";
    cin >> st;
    int k, count = 0, flag = -1;
    cin >> k;
    stack<char>s;
    for(auto i : st){
        if(i == '*' || i == '?') count ++;
        if(i == '*') flag = 1;
    }
    if(k < st.size() - 2*count) cout << "Impossible" << endl;
    else{
        int requiredToAdd = k - (st.size() - 2*count);
        // k req length of string
        // * to remove, leave or repeat(addition)
        // ? to remove or leave
        if(flag == -1){
            for(int i = 0; i < st.length(); i++){
                s.push(st[i]);
                if(s.top() == '*'){
                if(requiredToAdd >= 0){
                    
                }}
            }
        }
    }
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